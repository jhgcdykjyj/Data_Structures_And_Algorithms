#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


// int count=1;
// for(int i =1; i<=n; i++){
//     for (int j=1; j<=n; j++){
//         cout<<count;
//         count++;
//     }
//     cout<<endl;
// }
 
// int i =1;
// while(i<=n){
//     int j =1 ;
//     while(j<=i){
//         cout<<i-j+1;
//         j++;
//     }
//     i++;
//     cout<<endl;
// }

int count=1;
for(int i =1; i<=n; i++){
    for (int j=1; j<=i; j++){
        cout<<count;
        count++;
    }
    cout<<endl;
}

    return 0;
}