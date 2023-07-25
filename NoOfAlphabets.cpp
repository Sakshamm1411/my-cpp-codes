#include<iostream>
#include<string>

using namespace std;




int main(){
    string str = "hi my name is saksham";

      int count = 0;

      int n = str.length();

    for(int i=0;i<n;i++){
        if(str[i]==' '){
            count++;
        }
    }

    cout<<"number of alphabets - "<<n-count;


}