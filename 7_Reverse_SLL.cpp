//Write a program to reverse a singly linked list provided that the user will enter the size of node and their values at runtime.....

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};

void reversedisplay(int size,Node *head)
{
    Node *ptr=head;
    int a[size];
    for(int i=0;i<size;i++)
    {
        a[i]=ptr->data;
        ptr=ptr->next;
    }

    //Reverse loop
    ptr=head;
    for(int i=size-1;i>=0;i--)
    {
        cout<<a[i]<<"  ";
    }

}
int main()
{
    int size,value;
    cout<<"Enter the size of Linked List : ";
    cin>>size;
    Node *head=NULL,*ptr,*newnode;

    //Taking data at runtime
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the data  of Node "<<i+1<<" : ";
        cin>>value;
        newnode=new Node(value);
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

    //Displaying output of the linked list
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"   ";
        ptr=ptr->next;
    }
    cout<<"\nREVERSED DISPLAY LINKED LIST USING ARRAY\n";
    reversedisplay(size,head);
    return 0;
}