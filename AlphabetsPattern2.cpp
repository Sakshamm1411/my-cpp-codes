#include <iostream>
using namespace std;

int main(){


    int n;
    cout<<"Enter a number - ";
    cin>>n;


    for(int i=1; i<=n; i++){
        cout<<endl;

        char a = 'a';
        for(int j=1; j<=i; j++){
            cout<<a;
            a++;
        }
      
    }
}