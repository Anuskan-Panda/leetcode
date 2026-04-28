/*
Q5. Longest Subarray with Sum = K

Problem:
Find length of longest subarray with sum equal to k.
*/
#include<iostream>
using namespace std;
int main()
{
   int arr[]={1,2,3,6,8,3,6,5,8,4,9,12};
   int len=sizeof(arr)/sizeof(arr[0]);
   int size=0,i=0,j=0;
   int sum=0,target=6,maxlen=0;

   //first window
   while(j<len)
   {
    sum+=arr[j];
    if(sum>target)
    {                                 //add the values until it is equal or more than the target
      sum-=arr[i];                    // if more than target, then subtract he value fo array in the sum
      i++;                               // if equal then check between amxlena dn the length of the subarray to find 
    }                                      // maximum length
    if(sum==target)
    {
        maxlen=max(maxlen,j-i+1);
    }
    j++;
   }
   cout<<"the maximum length is:  "<<maxlen;

    return 0;
}