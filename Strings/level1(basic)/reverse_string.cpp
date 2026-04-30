/*Q3. Reverse a string

Concept: basic traversal / two pointer*/
#include<iostream>
using namespace std;
int main()
{
    string str="hii this is nice";
    int len=str.size(),temp;
    int st=0,end=len-1;
    while(st<end)
    {
        temp=str[st];
        str[st]=str[end];
        str[end]=temp;
        st++;end--;
    }
    cout<<"\n"<<str;
    return 0;
}