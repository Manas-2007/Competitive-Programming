//Write a program to check palindrome of a string,logic must be case insensitive and if string is containng non-alphanumeric characters then remove it and compare....(String contain only alphanumeric that is a-z,A-Z or 0-9 numbers....)

#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter String : ";
    getline(cin,s);

    int start=0;                //Starting index (0)
    int end=s.length()-1;       //Last index (n-1)
    bool ismatch=true;
    while(start<=end)
    {
        //Skip Alphanumeric Characters
        if(!(s[start]>='a' && s[start]<='z' ||
            s[start]>='A' && s[start]<='Z' ||
            s[start]>='0' && s[start]<='9'))
            {
                start++;
                continue;
            }

            if(!(s[end]>='a' && s[end]<='z' ||
            s[end]>='A' && s[end]<='Z' ||
            s[end]>='0' && s[end]<='9'))
            {
                end--;
                continue;
            }



        //Case insensitive Logic
        if((s[start]>=65) && (s[start]<=90))
        {
            s[start]=char(s[start]+32);
        }
        
        if((s[end]>=65) && (s[end]<=90))
        {
            s[end]=char(s[end]+32);
        }
        
        //Comparison Logic
        if(s[start]==s[end])
        {
            start++;
            end--;

        }
        else
        {
            ismatch=false;
            break;
        }
    }
    if(ismatch)
    {
        cout<<"String is PALINDROME";
    }
    else
    {
        cout<<"String is NOT PALINDROME";
    }
    return 0;
}