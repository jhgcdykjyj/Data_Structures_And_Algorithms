#include<iostream>
using namespace std;

 int ap(int n){
    int ap=0;
    int ans=0;
    for(int i=1; i<=n; i++){
        ap=3*i+7;
        ans=ap;   
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int answer = ap(n);
    cout<<"nth term is: "<<answer<<endl;
    return 0;
}