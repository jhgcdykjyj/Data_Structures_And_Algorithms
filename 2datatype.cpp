#include<iostream>
using namespace std;

int main(){
   
    int a; //Declaration
    a = 12;//Initialisation

    cout<<"Size of int "<<sizeof(a)<<endl;

    float b;
    cout<<"Size of float "<<sizeof(b)<<endl;

    char c;
    cout<<"Size of char "<<sizeof(c)<<endl;

    bool d;
    cout<<"Size of bool "<<sizeof(d)<<endl;
     
    short int sh;
    long int lo;
    cout<<"Size of short int "<<sizeof(sh)<<endl;
    cout<<"Size of long int "<<sizeof(lo)<<endl;



    return 0;
}