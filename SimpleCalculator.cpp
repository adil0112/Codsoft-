#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    char op;
    cout<<"\t\tSimple Calculator\n\n";
    cout<<"Enter 1st number: ";
    cin>>num1;
    cout<<"Enter operator(+,-,*,/): ";
    cin>>op;
    cout<<"Enter 2nd number: ";
    cin>>num2;
    switch (op)
    {
    case '+':
                cout<<num1+num2;
        break;
    case '-':
                cout<<num1-num2;
         break;
    case '*':
                cout<<num1*num2;    
        break;         
    case '/':
                cout<<num1/num2;          
        break;                 
    default:
                cout<<"Invalid operator";

    }
}
