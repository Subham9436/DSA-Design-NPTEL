#include<iostream>
using namespace std;
void pattern(int n)
{
   
    
    for(int i=0;i<n;i++)
    {
       char s='A'+i;
        for(int j=0;j<=i;j++)
        {
            cout<<" "<<s;
            

            
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