#include <iostream>
#include <math.h>
using namespace std;

int main()
{
        try
        {
            int a,b;
            cout<<"Enter the value : ";
            cin>>a>>b;
            if(b==0)
            throw 0;
            cout<<a/b;
        }
        catch(int x)
        {
           cout<<"Division not possible."; 
        }
        
        return 0;
}
