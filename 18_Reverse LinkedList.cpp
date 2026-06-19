//Write a program to reverse a singly linked list
#include<iostream>
#include<vector>
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

//Traverse
void Traverse(Node*&head)
{
    Node*ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

//Create List
void CreateList(Node*&head, int size)
{
    Node*ptr=head;
    int data;
    for(int i=1;i<=size;i++)
    {
        cout<<"Data at Node "<<i<<" : ";
        cin>>data;
        Node*newnode =new Node(data);
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

//Reverse a List
void Reverse(Node*&head)
{
    int count=0;
    Node*ptr=head;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }

    vector<int> data(count);
    ptr=head;
    for(int i=0;i<count;i++)
    {
        data[i]=ptr->data;
        ptr=ptr->next;
    }
    ptr=head;
    for(int i=count-1;i>=0;i--)
    {
        ptr->data=data[i];
        ptr=ptr->next;
    }
}

int main()
{
    Node*head=NULL;
    int size;
    cout<<"Total Nodes: ";
    cin>>size;
    CreateList(head,size);
    Traverse(head);
    cout<<"\nReversing List: \n";
    Reverse(head);
    Traverse(head);
    

    return 0;
}