#include<iostream>
using namespace std;
void pattern(int n)
{
    //for upper half
    int spaces=0;
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<=n-i-1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<spaces;j++)
        {
            cout<<" ";
            
        }
        for(int j=0;j<=n-i-1;j++)
        {
            cout<<"*";
        }
        spaces=spaces+2;
        cout<<endl;

    }
    //for lower half
     spaces=2*(n-1);
    for(int i=1;i<=n;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<spaces;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        spaces=spaces-2;
        cout<<endl;

    }
}
int main()
{
    int n;
    cout<<"Enter the number of rows:"<<endl;
    cin>>n;
    pattern(n);
    return 0;
}