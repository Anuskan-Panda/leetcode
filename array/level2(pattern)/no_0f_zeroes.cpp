//Move all zeros to end
//used two pointer approach to swap to 0 to the end we can use swap function to swap

#include<iostream>
using namespace std;
int main()
{
    int n,temp;
     cout<<"enter the no. of elements; ";
     cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<", ";
    }
    
    int st=0,end=n-1;
    while(st<end)
    {
      if(arr[st]==0)
      {
        temp=arr[st];
            arr[st]=arr[end];
            arr[end]=temp;
            end--;
      }
      else
      {
        st++;
      }
    } 
    cout<<"\n";
for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<", ";
    }
    
    return 0;
}