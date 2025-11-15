#include <iostream>
using namespace std;
int main ()
{
    int n,t,r,i,s;
    cout<<"\nEnter the No:";
    cin>>n;
    t=n;
    s=0;
    while (n > 0)
        {
            r=n%10;
            s=s*10+r;
            n=n/10;
        }
    if (s==t)
        {
            cout<<"\nTrue";
        }
    else 
        {
            cout<<"\nFalse";
        }
    return (0);

}

O/P : n=121 
      True
    
      n=122
      False
    
