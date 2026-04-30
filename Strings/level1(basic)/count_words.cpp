#include<iostream>
using namespace std;
int main()
{
    string str="this is new here i love it";
    int len=str.size(),count=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]==' '||str[i]=='\0')
        {
            count++;
        }
    }
    cout<<"the no. of words are: "<<count+1;
    return 0;
}