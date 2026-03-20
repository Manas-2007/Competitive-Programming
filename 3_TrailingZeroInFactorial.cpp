//Write a program to trail zeros in the factorial of a given number.....

#include<iostream>
using namespace std;

//Logic of traialing zero
int TrailZero(int n)
{
    int sum=0;
    while(n>0)
    {
        n=n/5;
        sum=sum+n;   
    }
    return sum;
}
int main()
{
    int num;
    cout<<"Enter the Number : ";
    cin>>num;
    cout<<TrailZero(num);
    return 0;
}