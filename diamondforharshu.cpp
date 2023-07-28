#include <iostream>
using  namespace std;

int main(){

    int n;
    cout<<"Enter a number -";
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<endl;
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i*2-1; k++){
            cout<<"*";
        }
    }
    for(int i=n-1; i>=0; i--){
        cout<<endl;
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i*2-1; k++){
            cout<<"*";
        }
    }
}