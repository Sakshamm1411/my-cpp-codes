#include <iostream>
using namespace std;

int main(){

    int size;

    cout<<"Enter the size - ";
    cin>>size;

    int A[size];
    cout<<"Enter the Array - ";
    for(int i=0; i<size; i++){
        cin>>A[i];
    }

    cout<<"Sorted Array - ";
    for(int i=0; i<=size-1; i++){
        for(int j=i+1; j<size;j++){
            if(A[i]>A[j]){
                int temp = A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }

    for(int i=0; i<size; i++){
        cout<<A[i]<<" ";
    }
}