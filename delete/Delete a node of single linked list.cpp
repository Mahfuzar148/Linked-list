
#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node{
     int data;
     Node *link;
};
Node *Create_node(int node_pos)
{
    Node *node;
    node = (Node*)malloc(sizeof(Node));

    cout<<"Enter data for node "<<node_pos<<" = ";
    int num;
    cin>>num;
    node->data = num;
    node->link = NULL;
    return node;

}
void print(Node *head)
{
    Node *ptr;
    ptr = head;
    cout<<"Value of the linked list :"<<endl;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->link;
    }
    cout<<endl;
}


int main()
{
    Node *head,*tmp,*next;
    cout<<"Enter node number = ";
    int n;
    cin>>n;

    head = Create_node(1);

    tmp = head;
    for(int i=2;i<=n;i++)
    {
        next = Create_node(i);

        tmp->link = next;
        tmp = tmp->link;

    }
    print(head);

    /** Delete first node
        of the linked list
     */
    head = head->link;
    cout<<"After deleting first node ";

    print(head);

    Node *node1 = Create_node(1);

    node1->link = head;
    head = node1;

     print(head);


    /** Delete last node
        of the linked list
     */

     Node *tmp1 = head;
     while(tmp1->link->link!= NULL)
     {
         tmp1 = tmp1->link;
     }
     tmp1->link = NULL;

    cout<<"After deleting last node ";
    print(head);


    /**
    3 no node delete from the linked list
    */
    int pos;
    cout<<"Enter node number that you want to delete = ";
    cin>>pos;
    Node *tmp2 = head;
     for(int i=2;i<pos;i++)
     {
         if(tmp2->link!=NULL)
         {
             tmp2 = tmp2->link;
         }
     }
     tmp2->link = tmp2->link->link;

    cout<<"After deleting  node "<<pos;
    print(head);

    return 0;
}
/**
C:\Users\mahfu\OneDrive\Documents\Delete a node of single linked list.cpp
*/
