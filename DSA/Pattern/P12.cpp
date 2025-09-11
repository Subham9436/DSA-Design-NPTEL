#include<iostream>
using namespace std;
void pattern(int n)
{
    int x=2*(n-1);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" "<<j;
        }
        for(int j=1;j<=x;j++)
        {
            cout<<"  ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<" "<<j;
        }
        x=x-2;
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