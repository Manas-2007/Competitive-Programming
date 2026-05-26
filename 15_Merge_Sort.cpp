#include<iostream>
#include<vector>
using namespace std;

//Ascending Merge Sort
void Ascend_mergeSort(int *array,int start,int end)
{
    if(start<end)
    {
        int mid=start+(end-start)/2;

        //Left subarray
        Ascend_mergeSort(array,start,mid);

        //Right subarray
        Ascend_mergeSort(array,mid+1,end);

        //Sizes of both arrays
        int n1=mid-start+1;
        int n2=end-mid;

        //Temporary Left & Right arrays
        vector<int> L(n1),R(n2);

        //Copy data into Left & Right array
        for(int i=0;i<n1;i++)
        {
            L[i]=array[start+i];
        }
        
        for(int j=0;j<n2;j++)
        {
            R[j]=array[mid+1+j];
        }


        int i=0,j=0,k=start;

        //Ascending Condition
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

        //Inserting remaining elements into array
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

//Descending Merge Sort
void Descend_mergeSort(int *array,int start,int end)
{
    if(start<end)
    {
        int mid=start+(end-start)/2;

        //Left subarray
        Descend_mergeSort(array,start,mid);

        //Right subarray
        Descend_mergeSort(array,mid+1,end);

        //Sizes
        int n1=mid-start+1;
        int n2=end-mid;

        //Temporary arrays
        vector<int> L(n1),R(n2);

        //Entering data in arrays
        for(int i=0;i<n1;i++)
        {
            L[i]=array[start+i];
        }
        for(int j=0;j<n2;j++)
        {
            R[j]=array[mid+1+j];
        }

        int i=0,j=0,k=start;

        //Descending Condition
        while(i<n1 && j<n2)
        {
            if(L[i]>=R[j])
            {
                array[k]=L[i];
                i++;
            }
            else{
                array[k]=R[j];
                j++;
            }
            k++;
        }

        //Remaining Elements insertion
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
    int nums[5]={67,45,36,99,3};
    cout<<"Ascending Order : ";
    Ascend_mergeSort(nums,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<"\nDescending Order : ";
    Descend_mergeSort(nums,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}