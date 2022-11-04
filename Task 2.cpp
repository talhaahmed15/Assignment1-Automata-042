#include <iostream>

using namespace std;

int main()
{
        string n;
    
    cout << "Enter a number that if starts with 0 it must have another 0 and if starts with 1 it must have another 1 ";
    
    cin >> n;
    int l = n.length();
    
    
    if(n[0] == '0')
    {
        for(int i = 1; i < l; i++)
        {
            if(n[i] == '0')
            {
                cout << "Your string is correct";
            }
        }
    }else
    {
        cout << "Your string is incorrect";
    }
    
    
    
    if(n[0] == '1')
    {
        for(int i = 1; i < l; i++)
        {
            if(n[i] == '1')
            {
                cout << "Your string is correct";
            }
        }
    }else
    {
        cout << "Your string is incorrect";
    }
    
}