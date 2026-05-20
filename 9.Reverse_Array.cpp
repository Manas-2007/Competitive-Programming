//Write a program to reverse the array (sequence) in the original array (NOT PRINT IN REVERSE)...

#include<iostream>
using namespace std;

//Reverse Function
void reverse(int *array,int size)
{
    for(int i=0;i<(size/2);i++)
    {
       int temp=array[i];
        array[i]=array[size-1-i];
        array[size-1-i]=temp;
    }
}
int main()
{
   int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int *array=new int[size];
    cout<<"Enter "<<size<<" elements in array : \n";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"\nYour Elements are : ";
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    reverse(array,size);
    cout<<"\nARRAY PRINTING AFTER REVERSING ORIGINAL ARRAY : \n";
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;    
}