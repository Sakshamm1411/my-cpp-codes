#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number - ";
    cin>>n;
    int count = 0;

    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count=2){
        cout<<" prime number ";
    }
    else
    cout<<"not prime ";
}