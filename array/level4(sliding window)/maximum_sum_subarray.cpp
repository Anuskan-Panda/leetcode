/*Q3. Maximum Sum Subarray of Size K

Problem:
Find maximum sum of any subarray of size k.
let size=3
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,4,6,3,8,2};
    int len=sizeof(arr)/sizeof(arr[0]);
    int size=3,sum=0;
   
    //first window
    for(int i=0;i<size;i++)
    {
       sum+=arr[i];
    }
     int maximum=sum;  // save the sum value in maximum
    //next window loop
    for(int i=size;i<len;i++)
    {
        sum+=arr[i];
        sum-=arr[i-size];
        maximum=max(maximum,sum);  // no nee dto use a as we will compare maximum and sum no need of a
        
    }
    cout<<"the maximum sum of subarray is: "<<maximum;
    return 0;
}