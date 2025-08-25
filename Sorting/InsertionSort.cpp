#include<iostream>
using namespace std;

void Insert(int a[],int n){
    for(int i=0;i<n;i++){
        int key=a[i];
        int j;
        for( j=i-1;j>=0 && a[j]>key;j--){
            a[j+1]=a[j];
        }
        a[j+1]=key;

    }
}

int main() {
    int a[]={4,3,8,1,9,0,2,5,7,6};
    int n=sizeof(a)/sizeof(a[0]);
    cout << "Before sorting: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    Insert(a,n);

    cout << "After sorting: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    
    return 0;
}