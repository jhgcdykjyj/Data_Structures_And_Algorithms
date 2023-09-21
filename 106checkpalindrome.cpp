#include<iostream>
// #include<string>
using namespace std;

bool palin(int s, int e,string ch){
    if(s>=e)
        return true;

    if(ch[s]!=ch[e])
        return false;
    else
        return palin(s+1,e-1,ch);

    
}



int main(){
    string ch;
    cin>>ch;

    int s=0;
    int e=ch.length()-1;


    if(palin(s,e,ch))
        cout<<"YES";
    else
        cout<<"NO";

    
    return 0;
}