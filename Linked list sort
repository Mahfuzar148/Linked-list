#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node {
     int data;
     Node *link;
};
Node *Create_node(int i)
{
    Node *ptr;
    int num;
    cout<<"Enter data for node "<<i<<" = ";
    cin>>num;
    ptr = (Node*)malloc(sizeof(Node));

    ptr->data = num;
    ptr->link = NULL;

    return ptr;
}
Node *create_Linked_list(Node *head,int n)
{

    head = Create_node(1);
    Node *next,*tmp;
    tmp = head;
    for(int i=2;i<=n;i++)
    {
       next = Create_node(i);
       tmp->link = next;
       tmp = tmp->link;

    }
    return head;
}
void print(Node *ptr)
{
    if(ptr==NULL)
    {
        cout<<"Linked list is empty .";
        exit(1);
    }
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";

        ptr = ptr->link;
    }
    cout<<endl;
}

void sort_linked_list(Node *head)
{
    Node *next1,*current;
   int tmp1;
    current = head;
    while(current!=NULL)
    {
        next1 = current->link;
        while(next1!=NULL)
        {
            if(current->data>next1->data)
            {
                tmp1 = current->data;
                current->data = next1->data;
                next1->data = tmp1;
            }
            next1 = next1->link;
        }
       current=current->link;
    }
}

int main()
{
     cout<<" Enter node number = ";
    int n;
    cin>>n;
    Node *head;
    head = create_Linked_list(head, n);

    cout<<"Linked list before sorting :"<<endl;
    print(head);

    sort_linked_list(head);

    cout<<"Linked list after sorting :"<<endl;
    print(head);
    return 0;

}
