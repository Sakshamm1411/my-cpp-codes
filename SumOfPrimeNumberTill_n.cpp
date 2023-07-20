#include<iostream>
using namespace std;


int checkprime(int x){

    int count = 0;
    for(int i=1; i<=x; i++){
        if(x%i==0){
            count++;
        }
    }
    if(count==2){
        return x;
    }
    else{
      return -1;
    }

}

int main(){
  int n;
  cout<<"Enter a number - ";
  cin>>n;
  int num;

  for(int i=1; i<=n; i++){
    num = checkprime(i);
    if(num!=-1){
      cout<<num<<" ";
    }
  }
    
}