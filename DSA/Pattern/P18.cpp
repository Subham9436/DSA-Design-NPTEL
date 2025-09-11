#include<iostream>
using namespace std;
void pattern(int n)
{
    for(int i=0;i<n;i++)
    {
        char ch;
        for( ch=('A'+n-1)-i;ch<='A'+n-1;ch++)
        {
            cout<<""<<ch;
           
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