#include <iostream>
using namespace std;

void swap (int a, int b){
        int temp = a;
        a = b;
        b = temp;
}

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
        swap(A[i],A[n-1-i]);
    }

    cout<<"New array is - ";
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
}