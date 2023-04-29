//program to find if there exist any pair in array arr such that its sum is equal to the given sum
//return true if yes else false;
//note:-array is sorted here 
#include<iostream>
bool twoPointer(int arr[],int n,int sum)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        int checkSum=arr[i]+arr[j];
        if(checkSum==sum)
        {
            return true;
        }
        else if(checkSum>sum)
        {
            j--;
        }
        else 
        {
            i++;
        }
    }
    return false;
}
using namespace std;
int main()
{
    int arr[]={5,7,19,34,45};
    int n=5;
    int sum=64;
    if(twoPointer(arr,n,sum))
    {
        cout<<"fount pair";
    }
    else 
    {
        cout<<"no pair found";
    }
    return 0;
}