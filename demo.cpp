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
int main()
{
    Node *head=NULL,*ptr,*n1,*n2,*n3,*n4,*n5;
    int a[5];
    n1=new Node(10);
    n2=new Node(20);
    n3=new Node(30);
    n4=new Node(40);
    n5=new Node(50);

    head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;
    ptr=head;
    for(int i=0;i<5;i++)
    {
           a[i]=ptr->data;
           ptr=ptr->next;
    }

for(int i=4;i>=0;i--)
{
    cout<<a[i]<<"  ";
}
return 0;
}