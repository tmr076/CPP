#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x, y;
    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter second number: ";
    cin>>y;
    cout<<"Before swapping: x = "<<x<<", y = "<<y<<endl;
    swap(&x, &y);
    int *a = &x;
    int *b = &y;
    cout<<"After swapping: x = "<<*a<<", y = "<<*b<<endl;
    cout<<"First number stored in: "<<a<<endl;
    cout<<"Second number stored in: "<<b<<endl;
    return 0;
}