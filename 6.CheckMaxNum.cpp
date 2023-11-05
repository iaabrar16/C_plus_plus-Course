#include<iostream>
using namespace std;

int main(){


    int num1,num2,num3;
    cout<<"Enter The 3 Number: ";
    cin>>num1>>num2>>num3;
    if(num1>num2&&num1>num3){
        cout<<"The Number 1 is Max: "<<num1;
    }else if(num2>num1&&num2>num3){
        cout<<"The Number 2 is Max: "<<num2;
    }
    else{
        cout<<"The Number 3 is Max: "<<num3;
    }

    return 0;
}
