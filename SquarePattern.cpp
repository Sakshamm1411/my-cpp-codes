#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number - ";
    cin>>n;
    

for(int j = 1;j<=n;j++){
    cout<<"*"<<" ";
}
cout<<endl;

for(int i=1;i<=n-2;i++){
    cout<<"*"<<" ";
    for(int k=1;k<=n-2;k++){
        cout<<" "<<" ";
    }
    cout<<"*";
    cout<<endl;
}  
for(int j = 1;j<=n;j++){
    cout<<"*"<<" ";
}
    
    
}