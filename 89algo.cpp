 #include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"finding 6-> "<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"lower bound->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound->"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a=3;
    int b=5;

    cout<<"max "<<max(a,b)<<endl;
    cout<<"min "<<min(a,b)<<endl;
    
    swap(a,b);
    cout<<"after swapping "<<a<<" "<<b<<endl ;

    string s = "abcd";
    reverse(s.begin(),s.end());
    cout<<"reversed string "<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotating"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end());
    cout<<"after sorting"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }


    return 0;
}