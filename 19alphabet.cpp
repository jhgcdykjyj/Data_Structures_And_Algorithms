#include<iostream>
using namespace std;

int main(){
    
    char a;
    cout<<"Enter the alphabet: "<<endl;
    cin>>a;
    
    switch (a)
    {
    case 'a':
        cout<<"Vowel";
        break;
    case 'e':
        cout<<"Vowel";
        break;
    case 'i':
        cout<<"Vowel";
        break;
    case 'o':
        cout<<"Vowel";
        break;
    case 'u':
        cout<<"Vowel";
        break;
    
    default:
        cout<<"Consonent";
        break;
    }
    return 0;
}