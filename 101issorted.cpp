// #include<iostream>
// #include<vector>
// using namespace std;

// bool IsSorted(vector<int> arr, int i, int n){
//     for(i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             return false;
//         } 
//     } 
//     return true;

// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     int i;
//     for(i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     if(IsSorted(arr,i,n)){
//         cout<<"Sorted";
//     }
//     else{
//         cout<<"Unsorted";
//     }
// }


//             USING RECURSION

#include<iostream>
using namespace std;
bool IsSorted(int arr[],int n){
if(n<=1){
    return true;
}

if(arr[n-1]<arr[n-2]){
    return false;
}
return IsSorted(arr, n-1);
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(IsSorted(arr,n)){
        cout<<"Sorted";
    }
    else{
        cout<<"Unsorted";
    }
    return 0;
}