#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array - ";
    cin>>n;

    int A[n];

    cout<<"Enter the array - ";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }

    for(int i=0; i<n/2; i++){
        int temp = A[i];
        A[i]=A[n-1-i];
        A[n-1-i] = temp;
    }

    cout<<"New array is - ";
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
}