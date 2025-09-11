#include<iostream>
using namespace std;

void Pattern(int n){
    // No.of rows
    for(int i=1;i<=n;i++){
        // No.of columns
       for(int j=1;j<=i;j++){
            cout << ""<< i ;
        }
         cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter the number of rows:" << endl;
    cin >> n;
    Pattern(n);
    return 0;

}