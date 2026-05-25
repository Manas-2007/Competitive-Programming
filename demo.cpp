#include<iostream>
using namespace std;
void mergesort(int *array,int start,int end)
{
    if(start<end)
    {
        int mid=start+(end-start)/2;
        mergesort(array,start,mid);
        mergesort(array,mid+1,end);

        int n1=mid-start+1;
        int n2=end-mid;

        int L[n1],R[n2];
        for(int i=0;i<n1;i++)
        {
            L[i]=array[start+i];
        }
        for(int j=0;j<n2;j++)
        {
            R[j]=array[mid+1+j];
        }

        int i=0,j=0,k=start;
        while(i<n1 && j<n2)
        {
            if(L[i]<=R[j])
            {
                array[k]=L[i];
                i++;
            }
            else
            {
                array[k]=R[j];
                j++;
            }
            k++;
        }

        while(i<n1)
        {
            array[k]=L[i];
            i++;
            k++;
        }
        while(j<n2)
        {
            array[k]=R[j];
            j++;
            k++;
        }        
    }
}
int main()
{
    int marks[5]={56,43,7,3,57};
    mergesort(marks,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<marks[i]<<" ";
    }
}