#include<iostream>
using namespace std;
bool IsPresent(int arr[],int n,int key){
if(n==0){
    return false;
}

if(arr[n-1]==key){
    return true;
}
return IsPresent(arr, n-1,key);
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;

    if(IsPresent(arr,n,key)){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
    return 0;
}