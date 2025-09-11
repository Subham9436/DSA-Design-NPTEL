#include<iostream>
using namespace std;
void pattern(int n)
{
    int x=1;
    for(int i=1;i<=n;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
            cout<<" "<<x;
            x=x+1;
        }
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