/*Q7. First non-repeating character

Concept: frequency + traversal*/
#include<iostream>
using namespace std;

int main()
{
    string str = "HEELLO OAA";

    int arr[26] = {0};

    // Step 1: convert to lowercase (only alphabets)
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    // Step 2: count frequency
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            int k = str[i] - 'a';
            arr[k]++;
        }
    }

    // Step 3: find first non-repeating
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            int k = str[i] - 'a';
            if(arr[k] == 1)
            {
                cout << "First non-repeating: " << str[i];
                return 0;
            }
        }
    }

    cout << "No non-repeating character";

    return 0;
}