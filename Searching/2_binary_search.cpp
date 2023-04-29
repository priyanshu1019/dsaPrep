#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int tar)
{
    int high=n-1;
    int low=0;
    while(low<=high)
    {
        int mid=(low+mid)/2;
        if(arr[mid]==tar)
        {
            return mid;
        }
        else if(arr[mid]>tar)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }

    }
    return -1;
}
int main()
{
    int arr[]={10,20,30,40,50};
    int n=5;
    int tar=40;
    cout<<binarySearch(arr,n,tar);
    return 0;
}