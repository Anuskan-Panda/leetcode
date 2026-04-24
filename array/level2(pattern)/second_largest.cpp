//Find second largest element(found n largest number from the array)
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
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                 temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
            }
        }
    }
  
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    

    int m;
    cout<<"enter the nth largest number you want: ";
    cin>>m;
    cout<<"the "<<m<<" largest number is "<<arr[m-1];
    return 0;
}