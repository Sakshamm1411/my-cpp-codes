#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter A Number - ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        cout<<"*";
        }
        for(int k=1; k<=n-i; k++){
            cout<<" ";
        }
        for(int x=1; x<=n; x++){
            cout<<"*";
        }
        for(int u=1; u<=n-i; u++){
            cout<<" ";
        }
        for(int p=1; p<=i; p++){
            cout<<"*";
        }
    cout<<endl;
    }
    
}