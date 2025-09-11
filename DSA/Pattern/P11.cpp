#include<iostream>
using namespace std;
void pattern(int n)
{
    int flag=1;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            {
                flag=0;
            }
        else
            {
                flag=1;
            }
        for(int j=1;j<=i;j++)
        {
            cout<<" "<<flag;
            flag=1-flag;
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