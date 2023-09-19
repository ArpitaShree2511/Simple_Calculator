#include<iostream>
using namespace std;

class Calculator{
    public: 
    double a, b;
    void getData(){
        cin>>a;
        cin>>b;
    }
    void add(){
        cout<<a<<" + "<<b<<" = "<<(a+b)<<endl;
    }
    void subtract(){
        cout<<a<<" - "<<b<<" = "<<(a-b)<<endl;
    }
    void multiply(){
        cout<<a<<" * "<<b<<" = "<<(a*b)<<endl;
    }
    void divide(){
        if(b!=0){
            cout<<a<<" / "<<b<<" = "<<(a/b)<<endl;
        }
        else{
            cout<<"Error: Division by zero is not allowed."<<endl;
        }   
    }
};

int main(){
    
    char operation;

    Calculator c;

    cout<<"Enter the numbers: "<<endl;
    c.getData();
       
    for(char operation = '+'; operation<'/'; operation++){
        cout<<"Enter an operation(+ , - , * , /): ";
        cin>>operation;

        switch(operation){

        case '+':
        c.add();
        cout<<endl;
        break;

        case '-':
        c.subtract();
        cout<<endl;
        break;

        case '*':
        c.multiply();
        cout<<endl;
        break;

        case '/':
        c.divide();
        cout<<endl;
        break;

        default:
        cout<<"END"<<endl;
        }
    }
    return 0;
}