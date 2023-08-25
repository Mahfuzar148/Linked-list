#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};
Node* create_linkedlist1(Node* head)
{
    cout<<"Number of element : "<<endl;
    int n;
    cin>>n;
    int val;
    cin>>val;
    head = new Node(val);
    Node* tmp = head;
    for(int i=1;i<n;i++)
    {
        cin>>val;
        tmp->next = new Node(val);
        tmp = tmp->next;
    }
    //Node* tmp1 = head;
    return head;
}
void print_linkedlist1(Node* head)
{
    Node* tmp = head;
    while(tmp!=nullptr)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void add_begin(Node* &head)
{
    Node* tmp = new Node(3);
    tmp->next = head;
    head = tmp;
}
void add_midle(Node* &head)
{
    Node* tmp1;
    Node* tmp2;
    tmp1 = head;
    int val;
    cout<<"enter value for inserting : ";
    cin>>val;
    tmp2 = new Node(val);
    cout<<"enter position for adding a node  = "<<endl;
    int n;
    cin>>n;
    int f = 0;
    if(n==0)
    {
         Node* tmp = new Node(3);
         tmp->next = head;
         head = tmp;
         f=1;
    }


    for(int i=2;i<=n;i++)
    {
        tmp1 = tmp1->next;
    }

    if(f==0)
    {
         tmp2->next = tmp1->next;
         tmp1->next = tmp2;

    }

    cout<<"insert a value after 4 : "<<endl;
    cout<<"take a value for inserting after 4 : ";
    int num;
    cin>>num;
    Node* tmp3 = new Node(num);
    Node* tmp4 = head;
    while(1)
    {
        if(tmp4->data==4)
        {
            break;
        }
        tmp4 = tmp4->next;
    }
    tmp3->next = tmp4->next;
    tmp4->next = tmp3;


}
void sort_linkedList(Node* &head)
{
    Node* tmp = head;
    while(tmp!=nullptr)
    {
        Node* ptr = tmp->next;
        while(ptr!=nullptr)
        {
            if(ptr->data<tmp->data)
            {
               int val = ptr->data;
               ptr->data = tmp->data;
               tmp->data = val;

            }
            ptr = ptr->next;
        }
        tmp = tmp->next;
    }
}

int main()
{
    Node* head = nullptr;
    head = create_linkedlist1(head);
    add_begin(head);
    print_linkedlist1(head);
    add_midle(head);
    cout<<"Element after adding node in the middle :";
    print_linkedlist1(head);

    sort_linkedList(head);
    cout<<" sorted  linked list : ";
    print_linkedlist1(head);
    cout<<"insert a value in a sorted array :";
    int num ;
    cin>>num;
    Node *tmp = new Node(num);
    Node* tmp1 = head;
   if(num<=head->data)
   {
       tmp->next = head;
       head = tmp;
   }
   else
   {
        while(tmp1->next!=nullptr&& num>tmp1->next->data)
        {
            tmp1 = tmp1->next;
        }
       tmp->next = tmp1->next;
       tmp1->next = tmp;
   }
   print_linkedlist1(head);
   cout<<"enter value for deleting : ";
   int num1;
   cin>>num1;
   Node* tmp3 = head;
   if(num1==tmp3->data)
   {
       head = head->next;
   }
   else
   {
       while(tmp3->next->data!=num1)
       {
           tmp3 = tmp3->next;
       }
       tmp3->next = tmp3->next->next;
   }
   cout<<"linked list atter deleting a value : ";
   print_linkedlist1(head);


}
