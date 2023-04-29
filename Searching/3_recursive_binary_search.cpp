#include<iostream>
using namespace std;
int recursiveBinarySearch(int arr[],int l,int h,int tar)
{
    if(l>h)
    {
        return -1;
    }
    int mid=l+(h-l)/2;
    if (arr[mid]==tar)
    {
        return mid;
    }
    else if(arr[mid]>tar)
    {
        return recursiveBinarySearch(arr,l,mid-1,tar);

    }
    else
    {
        return recursiveBinarySearch(arr,mid+1,h,tar);
    }
    
}
int main()
{
    int arr[]={10,20,30,40,50};
    int tar=30;
    int n=5;
    int res=recursiveBinarySearch(arr,0,n-1,tar);
    if(res==-1)
    {
        cout<<"element not found!";
    }
    else{
        cout<<"element found at "<<res<<" index";
    }
}