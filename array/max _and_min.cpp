//Find maximum and minimum element
#include <iostream>
using namespace std;

int main()
{
     int n;
     cout<<"enter the no. of elements; ";
     cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
       if(arr[i]>max)
       {
           max=arr[i];
       }
    }
  int min=arr[0];
    for(int i=1;i<=n;i++)
    {
       if(arr[i]<min)
       {
           min=arr[i];
       }
    }
    
    cout<<"tha maximum element in the array is:"<<max;
    cout<<"tha minimum element in the array is:"<<min;
    
    

    return 0;
}
