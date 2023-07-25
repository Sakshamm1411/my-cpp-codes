#include <iostream>
using namespace std; 

int main(){

    int n;
    cout<<"Enter the size of Arrays - ";
    cin>>n;

    int sum=0;

    int A[n];

    cout<<"Enter the Array - ";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }

    cout<<"Sum of all numbers in an array - ";
    for(int i=0; i<n; i++){
        sum=sum+A[i];
    }
    cout<<sum<<endl;

    int count=0;
    
    for(int i=1; i<=sum; i++){
        if(sum%i==0)
        count++;
    }

    if(count<=2)
    cout<<"It is a prime number";

    else
    cout<<"It is a composite number";
}
