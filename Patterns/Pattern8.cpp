#include<iostream>
using namespace std;

void Pattern(int n){
    // No.of rows
    for(int i=0;i<n;i++){
        
       // No.of columns for space before pattern
       for(int j=0;j<i;j++){
            cout << " " ;
        }
        // Pattern
        for(int j=0;j<2*n-(2*i+1);j++){
            cout << "*" ;
        }
        // No.of columns of space after pattern
        for(int j=0;j<i;j++){
            cout << " " ;
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