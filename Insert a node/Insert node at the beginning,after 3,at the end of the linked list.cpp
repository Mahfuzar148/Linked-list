#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node {
   int data;
   Node *link;
};
Node *getNode()
{
    Node *next = (Node*)malloc(sizeof(Node));
    cout<<"Enter a number = ";
    int num;
    cin>>num;
    next->data = num;
    next->link = NULL;
    return next;
}
int main()
{
    int n;
    cout<<"Insert node number = ";
    cin>>n;

    Node *head,*next,*temp;

    head = (Node*)malloc(sizeof(Node));

    cout<<"Enter data for node 1 = ";
    int a;
    cin>>a;
    head->data = a;
    head->link = NULL;
    next = head;
    for(int i=2;i<=n;i++)
    {
        cout<<"Enter data for node "<<i<<" = ";
        int b;
        cin>>b;
        temp = (Node*)malloc(sizeof(Node));
        temp->data = b;
        temp->link = NULL;

        next->link = temp;
        next = next->link;

    }

    cout<<"Value of linked list :"<<endl;
    Node *value = head;
    while(value != NULL)
    {
        cout<<value->data<<" ";
        value = value->link;
    }
    cout<<endl;

    cout<<"Insert a node at the beginning of the linked list :"<<endl;
    Node *node1 = getNode();
    node1->link = head;
    head = node1;
    cout<<"Value of linked list after inserting a node at the begin :"<<endl;
    Node *value1 = head;
    while(value1 != NULL)
    {
        cout<<value1->data<<" ";
        value1 = value1->link;
    }
    cout<<endl;

    cout<<"intert a node at the end of the linked list : "<<endl;;

    Node *endNode =getNode(),*node2;
    node2 = head;

    while(1)
    {
        if(node2->link == NULL)
        {
            node2->link = endNode;
            break;
        }
        node2 = node2->link;

    }

     cout<<"Value of linked list after inserting a node at the end :"<<endl;

     Node *value2 = head;
    while(value2 != NULL)
    {
        cout<<value2->data<<" ";
        value2 = value2->link;
    }
    cout<<endl;

    cout<<"Insert node at the middle of linked list = "<<endl;

    Node *midNode = getNode();

    Node *node3 = head;

    while(node3!=NULL)
    {
        if(node3->data == 3)
        {
            cout<<"node3->data = "<<node3->data<<endl;
            midNode->link = node3->link;
            node3->link = midNode;
        }
        node3 = node3->link;

    }

    cout<<"Value of linked list after inserting a node at the middle :"<<endl;

    Node *value3 = head;
    while(value3 != NULL)
    {
        cout<<value3->data<<" ";
        value3 = value3->link;
    }
    cout<<endl;





    return 0;


}
