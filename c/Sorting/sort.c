#include<stdio.h>
#include<stdlib.h>

void swap(int *s,int *d)
{
    int temp=*s;
    *s=*d;
    *d=temp;
}

void selection_sort(int* arr,int n)
{    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            swap(&arr[i],&arr[j]);
        }
    }
}

void bubble_sort(int* arr,int n)
{    
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            swap(&arr[j],&arr[j+1]);
        }
    }
}

void insertion_sort(int *arr,int n)
{
    int i =0, j=0, k=0;
    for(i=1;i<n;i++) //////////////////////////start the loop from first index
    {
        k = arr[i];////////////////////////////pivot element
    ///////////////////////////////////////////start the second loop from 0 index to compare the elements to the pivot element
        for(j=i-1;j>=0 && arr[j] >k ;j--)  ////Shift the elements to the right side till got the place to park 
        arr[j+1]=arr[j]; ///////////////////// once get the element, which is greater than current pivot value then shift it

        arr[j+1]=k; ///////////////////////////place the correct element to the index to make it an ascending order
    }
    
}

int main()
{
    int arr[] = {35,50,20,45,25,15,40,5,10,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("n - %d\n",n);
    //selection_sort(arr,n);
    //bubble_sort(arr,n); 
    insertion_sort(arr,n);   
    
    for(int i=0;i<n;i++)
    printf("a[%d] - %d\n",i,arr[i]);
}