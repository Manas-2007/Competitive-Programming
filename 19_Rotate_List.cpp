//Write a program to rotate a list by kth position clockwise (rightside)
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


//Rotate List
Node* Rotate(Node*head , int k)
{
    Node*ptr=head;
    int count=0;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }
    ptr=head;
    if(head==NULL)
    {
        return head;
    }
    else if(k==0)
    {
        return head;
    }
    k=k%count;
    vector<int> data(count);
    for(int i=0;i<count;i++)
    {
        data[i]=ptr->data;
        ptr=ptr->next;
    }
    vector<int> godown(k);
    for(int i=0;i<k;i++)
    {
        godown[i]=data[count-k+i];
    }

    for(int i=count-1;i>=k;i--)
    {
        data[i]=data[i-k];
    }
    for(int i=0;i<k;i++)
    {
        data[i]=godown[i];
    }

    for(int i=0;i<count;i++)
    {
        cout<<data[i]<<" ";
    }
};

int main()
{
    Node*head=NULL;
    int size;
    cout<<"Total Nodes: ";
    cin>>size;
    CreateList(head,size);
    Traverse(head);
    cout<<"\nData After Rotation:\n";
    Rotate(head,2);
    

    return 0;
}