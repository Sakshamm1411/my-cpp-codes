#include <iostream>
using namespace std;


int main(){

    int n;
    cout<<"Enter the size of the array - ";
    cin>>n;

    int A[n];


    cout<<"Enter the Array - ";
    for(int i=0; i<=n-1; i++){
        cin>>A[i];
    }

    for(int i=0; i<n; i++){
            if(A[i]==0){
                for(int j = i; j<=n-2;j++){
                    swap(A[j],A[j+1]);
                }
                
            }
    }

    for(int i=0; i<=n-1; i++){
            cout<<A[i];
        }

}
