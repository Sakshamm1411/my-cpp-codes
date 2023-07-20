#include<iostream>
using namespace std;



int main(){

    int A[] = {3, -1 , 4, 5, 9 , 23, 7, 14};
    int srch,flag = 0;
    cin>>srch;

    for(int i=0;i<9;i++){
        if(A[i]==srch){
            cout<<"number found at "<<i;
            flag = 1;
        }
    }

    if(flag = 0)
    cout<<"not found";


    int n = 8;
    int start = 0;
    int end = n-1;
    int mid = (n-1)/2;
    int flag = 0;
    while(flag == 0){
        if(A[mid])
    }
}