#include<iostream>
using namespace std;

void Pattern(int n){
    // No.of rows
    int spaces = 2*n-2;
    for(int i=1;i<=n;i++){
        // No.of columns
       for(int j=1;j<=i;j++){
            cout << "" << j ;
        }
         
        //   middle spaces 
       for(int j=1;j<=spaces;j++){
            cout << " " ;
        }
        
        // After pattern 
         for(int j=i;j>=1;j--){
            cout << "" << j ;
        }
         cout << endl;
         spaces=spaces-2;
    }

    
    
}
int main(){
    int n;
    cout << "Enter the number of rows:" << endl;
    cin >> n;
    Pattern(n);
    return 0;

}