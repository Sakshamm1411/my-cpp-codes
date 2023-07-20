#include <iostream>
using namespace std;

int main(){

    int n;
    int x;

    cout<<"Enter the size of the Array - ";
    cin>>n;

    int A[n];

    cout<<"Enter the Array - ";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }

    cout<<"Enter the number - ";
    cin>>x;

    for(int i=0; i<n; i++){
        if(A[i]==x){
            cout<<"Yes the number exists in position - "<<i;
            break;
        }
        else
        cout<<"It does not exist ";
        break;
    }
}