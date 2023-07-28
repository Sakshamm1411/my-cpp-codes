#include <iostream>
using namespace std;

int main(){

    string s;
    cout<<"Enter a word - ";
    cin>>s;

    int n = s.length();
    
    for(int i=0; i<n/2; i++){
        char temp = s[i];
        s[i] = s[n-i-1];
        s[n-i-1] = temp;
    }
    cout<<s;


    for(int i = 0; s[i] != '\0'; i++){
        cout<<s[i]<<" ";
    }
}