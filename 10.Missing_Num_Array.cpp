//Write a program to find the missing number having in an array having size N-1 such that it contains distinct elements from 1 to N

#include<iostream>
using namespace std;

//Missing function
int Miss(int *array,int N)
{
    int second_sum=(N*(N+1))/2;
    int first_sum=0;
    for(int i=0;i<N-1;i++)
    {
        first_sum=first_sum+array[i];
    }
    int MN=second_sum-first_sum;
    return MN;
}

int main()
{
     int x;
    cout<<"Enter the value of N : ";
    cin>>x;
    int *array=new int[x-1];
    cout<<"Enter "<<x-1<<" elements in array : \n";
    for(int i=0;i<x-1;i++)
    {
        cin>>array[i];
    }
    cout<<"\nYour Elements are : ";
    for(int i=0;i<x-1;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<"\nMissing Number is "<<Miss(array,x);

    return 0;
}