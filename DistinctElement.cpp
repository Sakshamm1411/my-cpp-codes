#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of an array - ";
    cin>>n;

    int A[n];

    cout<<"Enter the array - ";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }

    for(int i=0; i<n; i++){
        int check = 0;
        for(int j=0; j<n; j++){
            if(A[i]==A[j]){
                check++;
            }
        }
        if(check == 1){
            cout<<A[i]<<" ";
        }
    }

}