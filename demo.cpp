#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

//Dynamic Creation of List
void CreateList(Node*&head,int size)
{
    Node*ptr=head;
    for(int i=1;i<=size;i++)
    {
        int data;
        cout<<"Enter the data of Node "<<i<<" : ";
        cin>>data;
        Node*newnode=new Node(data);
        if(head==NULL)
        {
            head=newnode;
            ptr=head;
        }
        else
        {
            ptr->next=newnode;
            ptr=ptr->next;
        }
    }
}

//Traversal of Ll
void Traverse(Node *&head)
{
    Node*ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

int main()
{
    int size;
    Node*head=NULL;
    cout<<"Enter the size of the Nodes : ";
    cin>>size;
    CreateList(head,size);
    Traverse(head);

    return 0;
}