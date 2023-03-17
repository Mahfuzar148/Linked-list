#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node{
    int data;
    struct node *link;

};
Node *create_node(Node *ptr,int item)
{
    ptr = (Node*)malloc(sizeof(Node));
    ptr->data = item;
    ptr->link = NULL;
    return ptr;
}
 Node *add_begin(Node *head,int item)
{
    Node *ptr ;
    ptr = create_node(NULL,item);

    ptr->link=head;
    head = ptr;
    return head;
}
int main()
{
    Node *head,*ptr,*tmp;
    cout<<"Enter the number of node = ";
    int n;
    cin>>n;
    cout<<"Enter data for node 1 = ";
    int a;
    cin>>a;
    head =create_node(NULL,a);
    tmp = head;
    for(int i=2;i<=n;i++)
    {
        cout<<"Enter data for node "<<i<<" = ";
        cin>>a;
        ptr = create_node(NULL,a);
        tmp->link = ptr;
        tmp = tmp->link;
    }

     cout<<"  Create a node that want to add at the beginning of linked list "<<endl;
     cout<<"--------------------------------------------------------------------"<<endl;
     cout<<"Enter value for this node = ";
     cin>>a;

     head = add_begin(head,a);
     Node *next = head;
     cout<<"  Value of the each node of the linked list "<<endl;
     cout<<"----------------------------------------------"<<endl;
     int i = 1;
     while(next!=NULL)
     {
         cout<<"Value of node "<<i<<" = ";
         cout<<next->data<<endl;
         next = next->link;
         i++;
     }
     cout<<endl;


     return 0;

}
