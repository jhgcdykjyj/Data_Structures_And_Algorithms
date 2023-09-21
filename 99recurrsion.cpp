#include<iostream>
using namespace std;
//             // FACTORIAL
// int factorial(int n){
//     //BASE CASE
//     if(n==0){
//         return 1;
//     }
//     //RECURSIVE RELATION
//     return n*factorial(n-1);
// }



//             // POWER
// int power(int n){
//     //BASE CASE
//     if(n==0){
//         return 1;
//     }
//     //RECUERSIVE CASE
//     return 2*power(n-1);
// }




            // POWER
void print(int n){
    //BASE CASE
    if(n==0){
        return ; 
    }

    print(n-1);
    cout<<n<<endl;
}



int main(){

    // int n;
    // cin>>n;

    // int ans=factorial(n);
    // cout<<ans<<endl;    



    // int n;
    // cin>>n;

    // int ans=power(n);
    // cout<<ans<<endl;    


    int n;
    cin>>n;
    cout<<endl;
    print(n);   
    return 0;
}