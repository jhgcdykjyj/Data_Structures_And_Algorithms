#include<iostream>
using namespace std;
bool IsPresent(int arr[],int s,int e,int key){
int mid=s+(e-s)/2;

if(s>e){
    return false;
}

if(arr[mid]==key){
    return true;
}

if(arr[mid]<key){
    return IsPresent(arr,mid+1,e,key);
}

if(arr[mid]>key){
    return IsPresent(arr,s,mid-1,key);
}
return false;

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
    int s=0;
    int e=n-1;
    

    if(IsPresent(arr,s,e,key)){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
    return 0;
}