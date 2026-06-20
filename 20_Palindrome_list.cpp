//Write a program to check whether the SLL in palindrome of not.....
#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
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

//Palindrome Check
void Palindrome(Node*head)
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

    int match=2;
    for(int i=0;i<count/2;i++)
    {
        if(data[i]!=data[count-1-i])
        {
            match=1;
        }
    }

    if(match==1)
    {
        cout<<"\nIt's NOT  a Palindrome List";
    }
    else
    {
        cout<<"\nIt's  a Palindrome List";
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
    Palindrome(head);
    return 0;
}