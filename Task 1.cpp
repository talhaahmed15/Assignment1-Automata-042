#include <iostream>
#include <string>


using namespace std;


int main ()
{
    string n;
    
    cout << "Enter a number that has even number of 0s and 1s: ";
    
    cin >> n;
    int l = n.length();
    
    int counter1 = 0;
    int counter2 = 0;
    
    for(int i=0; i<l; i++ )
    {
        if(n[i]== '1')
        {
            counter1++;
        }
        
        if(n[i]=='0')
        {
            counter2++;
        }
    }
    
    if(counter2%2 == 0 && counter1%2==0)
    {
        cout << "Your string is correct";
    }
    else
    {
        cout << "Your string is incorrect";
    }
}