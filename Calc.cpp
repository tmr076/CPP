#include <iostream>
using namespace std;
int main(){
    int x,y;
    char op;
    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter operator (Add[+], Subtract[-], Multiply[*], Division[/], and Modulo Division[%]): ";
    cin>>op;
    cout<<"Enter second number: ";
    cin>>y;
    switch(op){
        case '+':
            cout<<"Sum: "<<x+y;
            break;
        case '-':
            cout<<"Difference: "<<x-y;
            break;
        case '*':
            cout<<"Product: "<<x*y;
            break;
        case '/':
            if(y!=0){
                cout<<"Quotient: "<<x/y;
            }else{
                cout<<"Error: Don't divide by zero. Try different numbers.";
            }
            break;
        case '%':
            if(y!=0){
                cout<<"Remainder: "<<x%y;
            }else{
                cout<<"Error: Don't divide by zero. Try different numbers!";
            }
            break;
        default:
            cout<<"Invalid operator!";
    }
    return 0;
}