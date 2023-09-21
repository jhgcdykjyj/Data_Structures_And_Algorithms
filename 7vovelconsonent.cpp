#include<iostream>
using namespace std;

int main(){
    char a;
    int Vovel;
    cout<<"Enter an Alphabet\n";
    cin>>a;

    Vovel = ( a=='a' || a=='e' || a=='i' || a=='o' || a=='u');

    if(Vovel){
        cout<<"It is a vovel";
    }
    else{
        cout<<"It is a consonent";
    }
    return 0;
}