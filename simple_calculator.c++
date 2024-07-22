#include <iostream>
using namespace std;


int main(){
    double num1 , num2 , result ;
    char oprator ;
    cout<<"Enter the first number : "<<endl;
    cin>>num1;
    cout<<"Enter the secound number :"<<endl;
    cin>>num2;
    cout<<"Enter the operation to perform ( + , - , * , /) : "<<endl;
    cin>>oprator;
    switch (oprator)
    {
    case '+':
        result = num1+num2;
        break;
    case '-':
        result = num1-num2;
        break;
    case '*' :
        result = num1*num2;
        break;
    case '/':
        if(num2 == 0){
            cout<<"Error: cannot divide by 0"<<endl;
            return 1;
        }
        else{
            result = num1/num2;
            break;
        }
    default:
        cout<<"Error: Invalid operation. "<<endl;
        return 1 ;
    }
    cout<<"Result :"<<result<<endl;
    return 0;
}
    


