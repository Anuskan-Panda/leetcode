/*
leetcode-
Find two lines that together with x-axis form a container that holds maximum water.

Input:
[1,8,6,2,5,4,8,3,7]
Output:
49*/
#include<iostream>
#include <algorithm>
using namespace std;

int most_water(int arr[],int len)
{
      
    int st=0,maximum=0,end=len-1,length,breadth;
    
    while(st<end)
    {
         length=min(arr[st],arr[end]);
         breadth=end-st;
        int area=length*breadth;
       maximum=max(maximum,area);
       if(arr[st]<arr[end])
       {
        st++;
       }
       else
       {
        end--;
       }    

    }
    return maximum;
}
int main()
{
   
   int arr[]={1,8,6,2,5,4,8,3,7};
   int len=sizeof(arr)/sizeof(arr[0]);
   cout<<most_water(arr,len);

    return 0;
}