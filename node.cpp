#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;

    }
};
void deletenode( Node *&head)
{
  

Node *temp=head;
head=head->next;
delete temp;
}

int main()
{
    Node *head,*temp;
    head=temp=NULL;
    int arr[]={10,20,30,40,50};
    for(int i=0;i<5;i++)
    {

        if(head==NULL)
        {
            head=new Node(arr[i]);
            temp=head;
        }else
        {
            temp->next=new Node(arr[i]);
            temp=temp->next;
        }
    }
        deletenode(head);
    Node *temp1=head;
    while(temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
}