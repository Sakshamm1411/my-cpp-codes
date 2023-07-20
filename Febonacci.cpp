#include <iostream>
using namespace std;

int main(){

    int n;
    int a=0;
    int b=1; 
    int sum;

    cout<<"Enter a number - ";
    cin>>n;
    
    cout<<"0"<<" "<<"1"<<" ";
    for(int i=0; i<n-2; i++){
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
}