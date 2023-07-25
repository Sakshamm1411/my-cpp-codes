#include <iostream>
using namespace std;

int main(){

    int size;
    
    cout<<"Enter the size - ";
    cin>>size;

    int q = size/2;
    int l[q];
    int r[q];

    int A[size];
    int F[size];

    cout<<"Enter the Array - ";
    for(int i=0; i<size; i++){
        cin>>A[i];
    }

    for(int i=0; i<size/2; i++){
        l[i]= A[i];
    }


    for(int i=0; i<=q-1; i++){
        for(int j=i+1; j<q;j++){
            if(l[i]>l[j]){
                int temp = l[i];
                l[i]=l[j];
                l[j]=temp;
            }
        }
    }

    
    for(int i=size/2; i<size; i++){
        r[i-size/2]=A[i];
    }
    for(int i=0; i<=q-1; i++){
        for(int j=i+1; j<q;j++){
            if(r[i]>r[j]){
                int temp = r[i];
                r[i]=r[j];
                r[j]=temp;
            }
        }
    }
    
    cout<<"First Array - ";
    for(int i=0; i<q; i++){
        cout<<l[i]<<" ";
    }

    cout<<endl;
    cout<<"Second Array - ";
    for(int i=0; i<q; i++){
        cout<<r[i]<<" ";
    }

    int i=0,j=0,k=0;
    while(i<q && j<q){
        if(l[i]<=r[i]){
            A[k]=l[i];
            k=k+1;
            i=i+1;
        }
        else{
            A[k]=r[j];
            j=j+1;
            k=k+1;
        }

    }

    cout<<"Final Array - ";
}