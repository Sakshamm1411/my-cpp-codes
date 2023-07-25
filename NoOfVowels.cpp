#include <iostream>
using namespace std;

int main(){

    string a;
    cout<<"Enter a word - ";
    cin>>a;

    int n = a.length();

    int count=0;

    for(int i=0; i<=n; i++){
        if(a[i]=='a'){
            count++;
        }
        if(a[i]=='e'){
            count++;
        }
        if(a[i]=='i'){
            count++;
        }
        if(a[i]=='o'){
            count++;
        }
        if(a[i]=='u'){
            count++;
        }
    }
    cout<<count;

}