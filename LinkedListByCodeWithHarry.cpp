#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct Node *head;
struct Node
{
    int data;
    struct Node *next;
};
void PrintData(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
Node *AddFirst(Node *ptr, Node *newnode)
{
    Node *temp;
    // cout<<" ptr 1 "<<ptr->data;
    newnode->next = ptr;
    ptr = newnode;
    temp = ptr;
    // cout<<" temp= "<<ptr->data;
    return temp;
}
void AddLast(Node *head, Node *newnode)
{
    struct Node *temp;
    temp = head;
    //newnode->next=NULL;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    temp=temp->next;
    temp->next=NULL;
    return;
   // temp->next=NULL;
    //return head;
}
int main()
{

    struct Node *temp, *newnode, *add;
    add = (struct Node *)malloc(sizeof(struct Node));
    add->data = 99;
    add->next = NULL;
    head = NULL;
    cout << add->data << endl;
    for (int i = 0; i < 10; i++)
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        cin >> newnode->data;
        if (head == NULL)
        {
            temp = head = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    newnode->next = NULL;
    // PrintData(head);
     AddLast(head, add);
    head = AddFirst(head, add);
    cout << endl;
    PrintData(head);
    return 0;
}