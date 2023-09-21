#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    int sum = 0;

    cout<<"Enter a number:"<<endl;
    cin>>num1;

    while(num1 >=0 ){
        cout<<"Enter another number:"<<endl;
        cin>>num2;
        sum = num1 + num2;
        cout<<"\nThe sum is: "<<sum<<endl;
    }

    return 0;
}