#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node{
    int data;
    Node *link;

};
int main()
{

    cout<<"Enter the number of node = ";
    int n;
    cin>>n;
    Node *head,*temp,*next;
    head = (Node*)malloc(sizeof(Node));
    if(head==NULL)
    {
        cout<<"Memory can not be allocated"<<endl;
        exit(1);
    }
    cout<<"Input data for node 1 = ";
    int num,i;
    cin>>num;
    head->data=num;
    head->link = NULL;
    temp = head;

    for(i=2;i<=n;i++)
    {
        next = (Node*)malloc(sizeof(Node));
         if(next==NULL)
            {
                cout<<"Memory can not be allocated"<<endl;
                break;
            }
            cout<<"Input data for node "<<i<<" = ";
            cin>>num;

            next->data=num;
            next->link = NULL;
            temp->link = next;
            temp = temp->link;

   }
   Node *ptr = head;
   cout<<"Output == "<<endl;
   while(ptr!=NULL)
   {
      cout<<ptr->data<<" ";
      ptr = ptr->link;
   }
   cout<<endl;
   return 0;

}
