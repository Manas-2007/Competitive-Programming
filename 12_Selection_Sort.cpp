#include<iostream>
using namespace std;

//Ascending Order
void Ascending(char *array,int size)
{
    for(int i=0;i<size;i++)
    {
        int minIdx=i;
        for(int j=i+1;j<size;j++)
        {
            if(array[j]<array[minIdx])
            {
                minIdx=j;
            }
        }
        swap(array[minIdx],array[i]);
    }
}

//Descending Order
void Descending(char *array,int size)
{
    for(int i=0;i<size;i++)
    {
        int maxIdx=i;
        for(int j=i+1;j<size;j++)
        {
            if(array[j]>array[maxIdx])
            {
                maxIdx=j;
            }
        }
        swap(array[maxIdx],array[i]);
    }
}

int main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    char *array=new char[size];
    cout<<"Enter the "<<size<<" characters :-\n";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"Ascending Order :\n";
    Ascending(array,size);
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }

    cout<<"\nDescending Order :\n";
    Descending(array,size);
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}