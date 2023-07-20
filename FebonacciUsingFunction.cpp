#include <iostream>
using namespace std;

int fibonacci(int x){
    int a=0;
    int b=1; 
    int sum;

    cout<<"0"<<" "<<"1"<<" ";
    for(int i=0; i<x-2; i++){
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;  
    }

}

int main(){

    int n;

    cout<<"Enter a number - ";
    cin>>n;

    fibonacci(n);   
}

