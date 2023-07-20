#include <iostream>
using namespace std;



int main(){


    int n;  
    cout<<"Enter any shape - "<<endl;
    cout<<"1. Circle"<<endl<<"2. Triangle"<<endl<<"3. Rectangle"<<endl<<"4. Square"<<endl;
    cin>>n;

    
    switch (n){

        case 1:{
            int r;
            cout<<"Enter radius - ";
            cin>>r;

            float A;
            float P;

            int O;

            cout<<"1. Area"<<endl<<"2. Parameter "<<endl;
            cin>>O;
            
            switch(O){
                case 1: 
                A = 3.14*r*r;
                cout<<A;
                break;

                case 2:
                P = 2*3.14*r;
                cout<<P;
                break;
            }
            break;
        }
            
        case 2:{

            int s;
            int b;
            int h;

            cout<<"Enter side - ";
            cin>>s;
            cout<<"Enter base - ";
            cin>>b;
            cout<<"Enter height - ";
            cin>>h;

            int x;
            float A;
            float P;

            cout<<"1. Area"<<endl<<"2. Parameter"<<endl;
            cin>>x;

            switch(x){
                case 1:
                A = 1/2*b*h;
                cout<<A;
                break;

                case 2:
                P = s+b+h;
                cout<<P;
                break;
            }
            break;
        }

        case 3:{

            int l;
            int b;

            cout<<"Enter length - ";
            cin>>l;
            cout<<"Enter breadth - ";
            cin>>b;

            int x;
            float A;
            float P;

            cout<<"1. Area"<<endl<<"2. Parameter"<<endl;
            cin>>x;

            switch(x){
                case 1:
                A = l*b;
                cout<<A;
                break;

                case 2:
                P = 2*(l+b);
                cout<<P;
                break;
            }
            break;
        }

        case 4:{

            int s;
            cout<<"Enter side - ";
            cin>>s;

            float A;
            float P;
            int x;

            cout<<"1. Area"<<"2. Parameter"<<endl;
            cin>>x;

            switch (x){
                    case 1:
                    A = s*s;
                    cout<<A;
                    break;

                    case 2:
                    P = 4*s;
                    cout<<P; 
                    break;
            }
            break;
        }
    }
}