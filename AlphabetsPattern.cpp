#include<iostream>

using namespace std;


int main(){
    int n=10;
    char c = 'a';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<c;
            c++;
            if(c>'z')
            break;
        }
        cout<<endl;
        if(c>'z')
        break;
    }
}