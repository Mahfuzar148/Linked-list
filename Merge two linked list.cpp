
#include<bits/stdc++.h>
using namespace std;

struct Node{

    int val;
    Node* next;
    Node(int item)
    {
        val = item;
        next = nullptr;
    }
};
Node* create_linkedlist()
{
     Node* head = nullptr ;
    ///create linkedlist

    cout<<"enter element number of first linked list :";
    int n;
    cin>>n;
     int val;
     cin>>val;
     head = new Node(val);
     Node* tmp = head;
    for(int i=1;i<n;i++)
    {

        cin>>val;
        tmp->next= new Node(val);
        tmp = tmp->next;
    }
    return head;

}
void print_linkedlist(Node* head)
{
    Node* tmp = head;
    while(tmp!=nullptr)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
Node* merge_linkedlist(Node* head1,Node* head2)
{
    Node* tmp = nullptr;
    tmp = head1;
    while(tmp->next!=nullptr)
    {
        tmp = tmp->next;
    }
    tmp->next = head2;
    Node* tmp1 = head1;
    return tmp1;
}
int main()
{
    Node* head1=nullptr;
    Node* head2 = nullptr;
    head1 = create_linkedlist();
    head2 = create_linkedlist();
    cout<<"First linked list : "<<endl;
    print_linkedlist(head1);
    cout<<"Second linked list : "<<endl;
    print_linkedlist(head2);
    Node* tmp = merge_linkedlist(head1,head2);
    cout<<"After merging two linked list : "<<endl;
    print_linkedlist(tmp);
    return 0;
}

