#include<iostream>
using namespace std;

void Pattern(int n){
    // No.of rows
    for(int i=0;i<n;i++){
        // No.of columns
       for(int j=0;j<=i;j++){
            cout << "*" ;
        }
         cout << endl;
    }
    // No.of rows
    for(int i=0;i<n-1;i++){
        // No.of columns
       for(int j=n-1;j>i;j--){
            cout << "*" ;
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