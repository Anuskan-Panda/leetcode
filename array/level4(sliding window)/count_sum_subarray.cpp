/*
Q6. Count Subarrays with Sum K

Problem:
Count total number of subarrays having sum = k.
*/

#include<iostream>
using namespace std;
int main()
{
int arr[]={1,2,3,4,5,6,7,8,9,0,1,2,3,4,2,4,2,6,5,4};
int len=sizeof(arr)/sizeof(arr[0]);
int k=0,j=0,target=6;
int sum=0,maxlen=0,count=0;

    while(j<len)
    {
        sum+=arr[j];
        if(sum>target)
        {
            sum-=arr[j];
        }
        if(sum==target)
        {
          count++;
          sum=0;
          i++;
        }

        j++;
    }





    return 0;
}