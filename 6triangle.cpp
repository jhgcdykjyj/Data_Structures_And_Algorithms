#include<iostream>
using namespace std;

int main(){
    int sidea, sideb, sidec;
    cout<<"Input 3 sides of Triangle"<<endl;
    cin>>sidea>>sideb>>sidec;

    if (sidea == sideb && sideb == sidec){
        cout<<"This ia an Equilateral triangle."<<endl;
    }
    else if (sidea == sideb || sideb == sidec || sidec == sidea){
        cout<<"This is an isoceles triangle."<<endl;
    }
    else{
        cout<<"This is a scaler triangle."<<endl;
    }
    return 0;
}