#include<iostream>
using namespace std;
int binarySearch(int arr[],int x,int l,int h)
{
    while(l<h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]>x)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }

    }
    return -1;

}
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
//naive
int search(int arr[],int x)
{
    int i=0;
    while(true)
    {
        if(arr[i]==x)return i;
        if(arr[i]>x)return -1;
        i++;
    }
    
}
//pro hu mai
int searchPro(int arr[],int tar)
{
    if(arr[0]==tar)return 0;
    int i=1;
    while(arr[i]<tar)
    {
        i*=2;
    }
    if(arr[i]==tar)
    {
        return i;
    }
    return recursiveBinarySearch(arr,i/2+1,i-1,tar);//case when arr[i]>tar
    

}
int main()
{
    int arr[]={1,2,3,5,5};
    int x=4;
    cout<<searchPro(arr,x);
}