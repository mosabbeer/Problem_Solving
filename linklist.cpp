#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct node
{
   int data;
   struct node *next;
};

int main()
{
   int n, i, count = 0;
   struct node *a, *head = NULL, *current, *temp, *tempu, *secondhead;
   for (i = 0; i < 7; i++)
   {
      temp = (struct node *)malloc(sizeof(struct node));
      cin >> n;
      temp->data = n;
      temp->next = NULL;
      if (head == NULL)
      {
         head = temp;
         current = temp;
      }
      else
      {
         current->next = temp;
         current = current->next;
      }
   }
   tempu = head;
   while (tempu != NULL)
   {
      count++;
      if (count == 3)
      {
         secondhead = tempu->next;
         tempu->next = NULL;
      }
      tempu = tempu->next;
   }
   tempu = head;
   while (tempu != NULL)
   {
      cout << tempu->data << " ";
      tempu = tempu->next;
   }
   cout << "\n";
   tempu = secondhead;
   while (tempu != NULL)
   {
      cout << tempu->data << " ";
      tempu = tempu->next;
   }
   tempu = head;
   while (tempu != NULL)
   {
      tempu = tempu->next;
      if (tempu->next == NULL)
      {
         tempu->next = secondhead;
        break;
      }
   }
   tempu = head;
   cout << "\n";
   while (tempu != NULL)
   {
      cout << tempu->data << " ";
      tempu = tempu->next;
   }
   return 0;
}