#include<iostream>
using namespace std;

int main(){


    int num;
    cout<<"Enter The Number: ";
    cin>>num;
    if(num>0&&num%2==0){
        cout<<"The Number is Positive and Even";
    }else if(num<0&&num%2==0){
        cout<<"The Number is Negative and Even";
    }else if(num>0){
        cout<<"The Number is Positive and Odd";
    }else{
        cout<<"The Number is Negative and Odd";
    }

    return 0;
}
