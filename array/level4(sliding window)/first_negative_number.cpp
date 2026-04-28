/*
Q4. First Negative Number in Every Window

Problem:
For each window of size k, find first negative number.
let the size k=3
i solved it using array , we can also solve it using queue which would be faster than the array version.
*/

#include<iostream>
using namespace std;
int main()
{
  int arr[]={1,-5,5,-3,6,4,-6,2,-4,7,8,-9};
  int k=3;
 
  int len=sizeof(arr)/sizeof(arr[0]);
  int negative,sum=0;
 //first  window
 for(int i=0;i<=len-k;i+=3)  //at last for , increment 3 or you will get double print statements 
 {                          //in second <= will be there or you will miss the last value
      bool flag=true;
    //sliding window
  for(int j=i;j<i+k;j++)   // i+k let you to get the range 
  {
     if(arr[j]<0)
     {
        cout<<"\n negative number: "<<arr[j];
        flag=false;
        break;
     }
  }
}
 if("flag")
 {
    cout<<"no negative number ";
 }

    return 0;
}