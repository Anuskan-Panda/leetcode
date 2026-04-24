#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=1;i<=10;i++)
    {
       if(arr[i]>arr[0])
       {
           max=arr[i];
       }
    }
    
    cout<<"tha maximum element in the array is:"<<max;
    

    return 0;
}
