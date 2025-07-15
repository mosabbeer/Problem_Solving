#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int arr[11] = {0};
int sz = 0;
int rehashSz = 3;

int hash_(int a) {
    return a%11;
}
int rehash(int i){
    return (i + rehashSz)%11;
}
//inserting value of n untill sz == 11 ...
void insert(int n) {
    if(sz == 11) {
        cout << "Full" << endl;
        return;
    }
    int hash_number = hash_(n);
    while(arr[hash_number] != 0){
        hash_number = rehash(hash_number);
    }
    arr[hash_number] = n;
    sz ++;
}
void printAll(){
    for(int i = 0; i < 11; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int s;
    for(int i = 0; i < 12; i++) {
        cin >> s;
        insert(s);
    } 
    printAll();
    return 0;
}