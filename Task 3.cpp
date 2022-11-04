#include<iostream>

using namespace std;

int main()
{
    
    string n;
    
    cout << "Enter a string: ";
    cin >> n;
    
    
    if(n[0] == 'a' || n[0] == 'b')
    {
        if(n[1] == 'a' || n[1] == 'b' || n[1] =='c')
        {
            goto a;
        }
        cout << "Your string is correct~";
        goto b;
    }
    else
    {
        a:
        cout << "Your string is incorrect";
        goto b;
        
    }
    
    
    
    if(n[0] == 'c')
    {
        
        if(n[1] == 'b' || n[1] == 'c')
        {
            if(n[1] == 'a' || n[1] == 'b' || n[1] =='c')
                {
                    goto a;
                }
            cout << "Your string is correct!";
        }
    }
    else
    {
        cout << "Your string is incorrect1";
    }
    
    b:
    
    cout << "\n End of program";
}