//Write a program to find the maximum and minimum element from the array...

#include<iostream>
using namespace std;

//Maximum Element
int max(int *array,int size)
{
    int max=array[0];
    for(int i=0;i<size;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    return max;
}

//Minimum Element
int min(int *array,int size)
{
    int min=array[0];
    for(int i=0;i<size;i++)
    {
        if(array[i]<min)
        {
            min=array[i];
        }
    }
    return min;
    
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
    cout<<"\nTHE LARGEST ELEMENT IS "<<max(array,size)<<endl;
    cout<<"THE SMALLEST ELEMENT IS "<<min(array,size)<<endl;
    delete[] array;

    return 0;

} 