#include<iostream>
using namespace std;

void Pattern(int n){
    // No.of rows
    for(int i=0;i<n;i++){
        // No.of columns
       for(int j=0;j<n;j++){
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