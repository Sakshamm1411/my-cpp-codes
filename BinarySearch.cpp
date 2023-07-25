#include<iostream>
using namespace std;

void sort(int A[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n;j++){
            if(A[i]>A[j]){
                int temp = A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
}

int BinarySearch(int A[], int start, int end, int check){

    if(start>end){
        return -1;
    }
    int mid = (start+end)/2;
    if(check == A[mid]){
        return mid;
    }
    else{
        if(check>A[mid]){
           return BinarySearch(A,mid+1,end,check);
        }
        else{
           return BinarySearch(A,start,mid-1,check);
        }
    }   
}

int main(){
    
    int size;
    

    cout<<"Enter the size of an Array - ";
    cin>>size;

    int A[size];
    int sortedArray[size];

    cout<<"Enter the array - ";
    for(int i=0; i<size; i++){
        cin>>A[i];
    }
    
    sort(A, size);
    cout<<"Sorted array is - ";
    for(int i=0; i<size; i++){
        cout<<A[i]<<" ";
    }

    int srch;
    int flag;

    cout<<endl<<"Enter the number you want to search - ";
    cin>>srch;

    flag = BinarySearch(A,0,size-1,srch);
    if(flag == -1){
        cout<<"no not found";
    }
    else {
        cout<<"number found at "<<flag;
    }
}