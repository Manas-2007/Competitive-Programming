#include<iostream>
using namespace std;

//Bubble Sort Algorithm
void BubbleSort(int *array,int size)
{
    int countswap=0;
    for(int i=0;i<size-1;i++)
    {
        bool isSwap=false;
        for(int j=0;j<size-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                countswap++;
                isSwap=true;
                swap(array[j],array[j+1]);
            }
        }
        if(!isSwap)
        {
            break;
        }
    }

    cout<<"\nTOTAL SWAPS : "<<countswap<<"\n";
}
int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int *array=new int[size];
    cout<<"Start entry : ";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    
    BubbleSort(array,size);

    cout<<"Your Sorted Elements : ";
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}