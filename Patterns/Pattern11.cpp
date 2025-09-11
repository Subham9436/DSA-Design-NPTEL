#include<iostream>
using namespace std;

void Pattern(int n){
    int start=1;
    // No.of rows
    for(int i=1;i<=n;i++){
        // No.of columns
       if(i%2==0){
        start=0;
       }
       else{
        start=1;
       }
        for(int j=1;j<=i;j++){
            cout << start;
            start=1-start;
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