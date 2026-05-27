#include<iostream>
using namespace std;

//Quick Sort 
int partition(int *arr,int start,int end)
{
    int pos=start-1;
    int pivot=arr[end];
    for(int i=start;i<end;i++)
    {
        if(arr[i]<=pivot)
        {
            pos++;
            swap(arr[i],arr[pos]);
        }   
    }
    swap(arr[pos+1],arr[end]);
    return pos+1;
}

void QuickSort(int *arr,int start,int end)
{
    if(start<end)
    {
        int pivotIdx=partition(arr,start,end);
        QuickSort(arr,start,pivotIdx-1);
        QuickSort(arr,pivotIdx+1,end);
    }
}

int main()
{
    int nums[5]={65,43,8,76,2};
    QuickSort(nums,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<nums[i]<<" ";
    }

    return 0;
}