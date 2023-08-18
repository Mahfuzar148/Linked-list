#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node{
   int data;
   Node* next;
};
Node* create_node(int item)
{
    Node* tmp;
    tmp =(Node*) malloc(sizeof(Node));
    tmp->data = item;
    tmp->next = NULL;
    return tmp;
}
void print(Node* head)
{
   Node* tmp = head;
   while(tmp!=NULL)
   {
       cout<<tmp->data<<" ";
       tmp = tmp->next;
   }
   cout<<endl;
}
int main()
{
    cout<<"Insert value otherwise type -1 : " <<endl;
    int data;
    cin>>data;
    Node* head = create_node(data);
    Node* tmp = head;

   while(1)
   {
        int data;
        cin>>data;
        if(data==-1)
        {
            break;
        }
        tmp ->next= create_node(data);
        tmp = tmp->next;


   }

    print(head);

    Node* node1 = create_node(54);
    ///insert node at the begin
    node1->next = head;
    head = node1;
    print(head);

    Node* node2 = create_node(54);
    Node* tmp2 = head;
    ///insert node at the end
    while(tmp2->next!=NULL)
    {
        tmp2 = tmp2->next;
    }

    tmp2->next = node2;
    print(head);

    int cnt = 0;
    Node* tmp3 = head;
    Node* node3 = create_node(54);
    ///insert 54 after 3 node
    while(1)
    {
        cnt++;
        tmp3 = tmp3->next;
        if(cnt==3)
        {
            node3->next = tmp3->next;
            tmp3->next = node3;
            break;
        }
    }
    print(head);
    ///insert 10 after 4
    Node* node4 = create_node(10);
    Node* tmp4 = head;
    while(1)
    {
        if(tmp4->data==4)
        {
            node4->next = tmp4->next;
            tmp4->next = node4;
            break;
        }
        else
        {
            cout<<"4 is not found "<<endl;
            break;
        }
        tmp4 = tmp4->next;
    }
    print(head);
    ///deleting first vale
    head = head->next;
    cout<<"After deleting first node :"<<endl;
    print(head);
    /// deleting last node
    Node* tmp5 = head;
    while(tmp5->next->next!=NULL)
    {
        tmp5 = tmp5->next;
    }
    tmp5->next = NULL;
    cout<<"After deleting last node :"<<endl;
    print(head);
    ///deleting 54
    Node* tmp6 = head;
    while(tmp6->next!=NULL)
    {
        if(tmp6->next->data==54)
        {
            tmp6->next = tmp6->next->next;
        }
        tmp6 = tmp6->next;
    }
    cout<<"after deleting 54 : "<<endl;
    print(head);

    /// delete the value of a particular node
    Node* tmp7 = head;
    cout<<" enter the node number for deleting value of that node  = " ;
    int num,cnt1 = 0;
    cin>>num;
    while(tmp7->next!=NULL)
    {
        cnt1++;
        if(cnt1==num-1)
        {
            tmp7->next = tmp7->next->next;
        }
        tmp7 = tmp7->next;
    }
    cout<<" After deleting node = "<<num<<" : "<<endl;
    print(head);


    return 0;

}
