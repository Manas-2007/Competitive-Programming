//Write a program to rotate an array in clock-wise direction by 1..

#include<iostream>
using namespace std;

//Rotation function
void Rotation(int *array,int size)
{
    int lastdata=array[size-1];
    for(int i=size-1;i>0;i--)
    {
        array[i]=array[i-1];
    }
    array[0]=lastdata;
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

    Rotation(array,size);
    cout<<"\nArray after Rotation :\n";
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}