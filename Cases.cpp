#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter a character: ";
    cin>>c;
    if(c>='a' && c<='z'){
        cout<<"The character is a lowercase letter."<<endl;
    }
    else{
        cout<<"The character is an uppercase letter."<<endl;
    }
    return 0;
}