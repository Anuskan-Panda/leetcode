/*Q6. Find frequency of each character

Concept: array[26] or map*/
#include<iostream>
using namespace std;
int main()
{
    string str="Hello thIs is good";
    int len=str.size(),j=0,k=97;
    for(int i=0;i<len;i++)
    {
      if(str[i]>='A' && str[i]<='Z' )
      {
         str[i]=str[i]+32;
      }
        }
        cout<<str;
    int arr[26]={0};
    for(int i=0;i<len;i++)
    {
        j=str[i]-'a';
        arr[j]++;

    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]>0)
        {
            cout<<"\n"<<char('a'+i)<<" -> "<<arr[i];
        }
    }
    return 0;
}
/*for(int i=0;i<len;i++)
    {
        j=str[i]-'a';
        arr[j]++;
        cout<<str[i]<<" -> "<<arr[j];   if you wan to print the frequency in the order of string alphabet

    }*/