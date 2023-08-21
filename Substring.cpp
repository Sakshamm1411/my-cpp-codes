#include <iostream>
using namespace std;

int main(){

    string a;
    cout<<"Enter first word - ";
    cin>>a;

    string b;
    cout<<"Enter another word - ";
    cin>>b;

    int n = a.length();
    int m = b.length();

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i]==b[j]){
                cout<<"Yes, It is a substring";
                break;
            }
            
            break;
        }
    }
}