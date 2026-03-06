// insettion at begining
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    Node *Head;
    Head = NULL;
    Head = new Node(4);
    int arr[] = {2, 5, 6, 8};
    for (int i = 0; i < 4; i++)
    {

        if (Head == NULL)
        {
            Head = new Node(arr[i]);
        }
        else
        {
            Node *temp , *temp1;
            temp1=Head;
            temp = new Node(arr[i]);
            // temp->next = Head;
            temp1->next = temp;
            temp1 = temp;
        }
    }

    // insert value in desire position
//    if(Head!=NULL)
//    {
//     Node*temp=Head;
//     Head=Head->next;
//     delete temp;
//    }
   



    Node *temp1;
    temp1 = Head;
    while (temp1 != NULL)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
}