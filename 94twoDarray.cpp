#include<iostream>
using namespace std;

bool isPresent(int arr[2][2], int r, int c, int key){
    if(arr[2][2]==key){
        return 1;
    }
    else{
        return 0;
    }
}; 

void printSumr(int arr[2][2], int r, int c){
    
    for(int r=0;r<2;r++){
        int sum=0;
        for(int c=0;c<2;c++){  
            sum+=arr[r][c];
        }      
        cout<<sum<<" ";
    }
    cout<<endl;
}

void printSumc(int arr[2][2], int r, int c){
    
    for(int c=0;c<2;c++){
        int sum=0;
        for(int r=0;r<2;r++){  
            sum+=arr[r][c];
        }      
        cout<<sum<<" ";
    }
    cout<<endl;
}
int largestrowSum(int arr[][2],int r,int c){
    int max=INT8_MIN;
    int index=-1;
    for(int c=0;c<2;c++){
        int sum=0;
        for(int r=0;r<2;r++){  
            sum+=arr[r][c];
        }    
        if(sum>max){
            max=sum;
            index=r;
        }  
    }
    cout<<"max: "<<max<<endl;
    return r;
}


int main(){
    int arr[2][2];
    //input
    for(int r=0;r<2;r++){
        for(int c=0;c<2;c++){
            cin>>arr[r][c];
        }
    }
    //output
    for(int r=0;r<2;r++){
        for(int c=0;c<2;c++){
            cout<<arr[r][c]<<" ";
        }
        cout<<endl;
    }

/*    cout<<"Enter the element"<<endl;
    int key;
    cin>>key;

    if(isPresent(arr,key,2,2)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    printSumr(arr,2,2);
    printSumc(arr,2,2);

*/
    int ans=largestrowSum(arr,2,2);
    cout<<"max row index: "<<ans<<endl;
    return 0;
}