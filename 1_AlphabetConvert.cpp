//Write a program to convert the english alphabets from uppercase to lowercase and vice versa....

#include<iostream>
using namespace std;

//Function to  convert
char Convert(char x)
{
    if(x>='a' && x<='z')
    {
        return char(x-32);
    }
    else if(x>='A' && x<='Z')
    {
        return char(x+32);
    }
    else
    {
       return x;
    }
}
int main()
{
    char x;
    cout<<"Enter Character : ";
    cin>>x;
    char result=Convert(x);
    cout<<result<<endl;
    return 0;
}