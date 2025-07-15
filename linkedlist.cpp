#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int n, i;
    struct node *NewNode, *head = NULL, *current = NULL, *head2 = NULL, *prev;
    while (1)
    {
        NewNode = (struct node *)malloc(sizeof(struct node));
        cin >> n;
        if (n < 0)
            break;
        NewNode->data = n;
        NewNode->next = NULL;
        if (head == NULL)
        {
            head = NewNode;
            current = NewNode;
        }
        else
        {
            current->next = NewNode;
            current = NewNode;
        }
    }
    current = head;
    while (current != NULL)
    {
        if (current->data == 45)
        {
            head2 = current;
            prev->next = NULL;
        }
        prev = current;
        current = current->next;
    }
    current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << "\n";
    current = head2;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout<<"\n";
     current=head;
    while(current!=NULL)
    {
       prev=current;
        current=current->next;
    }
    prev->next=head2;
    current=head;
    while(current!=NULL)
    {
        cout<<current->data<<" ";
        current=current->next;
    }
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
    temp->data=5;
    temp->next=NULL;
    temp->next=head;
    head=temp;
     current=head;
    while(current!=NULL)
    {
        cout<<current->data<<" ";
        current=current->next;
    }
    return 0;
}