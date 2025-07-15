#include <bits/stdc++.h> 
using namespace std; 

void towerOfHanoi(int n, char from, char to,  char aux)  // A C B to B C A 
{ 
	if (n == 0) { 
		return; 
	} 
	towerOfHanoi(n - 1, from, aux, to); 
	cout << "Move disk " << n << " from rod " << from 
		<< " to rod " << to << endl; 
	towerOfHanoi(n - 1, aux, to, from); 
} 

int main() 
{ 
	int n; cin>>n; 
	towerOfHanoi(n, 'A', 'C', 'B'); 
}