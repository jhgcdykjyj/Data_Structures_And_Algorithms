#include<iostream>
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE // Not part of the code used to beautfy
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int savings;
    cin>>savings;

    if(savings>5000) {
        cout<<"Neha"<<endl;
        if(savings>10000) {
            cout<<"Roadtrip\n";
        } else {
            cout<<"Shopping\n";
        }   
    } else if(savings>2000){
        cout<<"Rashmi\n";
    } else {
        cout<<"Friends\n";
    }
    return 0; 
}