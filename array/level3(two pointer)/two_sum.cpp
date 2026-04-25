/*Problem:
Given a sorted array, find two numbers such that they add up to a target.

Input:
arr = [1,2,3,4,6], target = 6
Output:
[2,4]*/

#include<iostream>
using namespace std;
int main()
{
   int arr[]={1,2,3,4,6};
   int len=sizeof(arr)/sizeof(arr[0]);
   int st=0,end=len-1;
   while(st<end)
   {
    if(arr[st]+arr[end]==6)
    {
        break;
    }
    else if(arr[st]+arr[end]>6)
    {
        end--;
    }
    else
    {
        st++;
    }
   }

   cout<<"the two  value in array are "<<arr[st]<<" "<<arr[end];


    return 0;
}