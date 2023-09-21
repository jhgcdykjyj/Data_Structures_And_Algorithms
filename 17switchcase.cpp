#include<bits/stdc++.h>
using namespace std;

int main(){
    
    char button;
    cout<<"Input a character: ";
    cin>>button;

    /*
    if(button=='a'){
        cout<<"Hello"<<endl;
    }

    else if(button=='b'){
        cout<<"Namaste"<<endl;
    }
    else if(button=='c'){
        cout<<"Hola"<<endl;
    }
    else if(button=='d'){
        cout<<"Ciao"<<endl;
    }
    else{
        cout<<"I am still learning"<<endl;
    }
    */

   switch (button)
   {
        case 'a':
        cout<<"Hello";
        break;
        case 'b':
        cout<<"Namaste";
        break;
        case 'c':
        cout<<"Hola";
        break;
        case 'd':
        cout<<"Ciao";
        break;

   
    default:
    cout<<"I am still learning more..";
        break;
   }

    return 0;
}