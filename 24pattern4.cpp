#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(j<=n-i){ 
    //             cout<<"  ";
    //         }
    //         else{
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // char ch = 'A';
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
            
    //         cout<<ch;
    //         ch++;
            
    //     }
    //     cout<<endl;
    // }


 
    for(int i=1;i<=n;i++){
        char ch='A'+i-1;
        for(int j=1;j<=n;j++){
           
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}