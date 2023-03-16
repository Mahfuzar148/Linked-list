#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node{
    int data;
    Node *link;
};

int main()
{
   Node *head = (Node*) malloc(sizeof(Node));
   head->data=20;
   head->link = NULL;


   Node *current = (Node*) malloc(sizeof(Node));
   current->data=30;
   current->link = NULL;
   head->link=current;

   current = (Node*) malloc(sizeof(Node));
   current->data=40;
   current->link = NULL;
   head->link->link = current;




   printf("%d\n",head->data);
   printf("%d\n",head->link->data);
   printf("%d\n",head->link->link->data);

   return 0;
}
