#include<iostream>
using namespace std;
int getlenght(char name[]){
    int count = 0;
    for(int i=0; name[i] != '\0'; i++){
    count ++;      
}
    return count;
}

    char getMaxOccuringChar(string str)
    {
        // Your code here
        int count[26]={0};
        for(int i=0;i<str.length();i++){
            char ch=str[i];
            count[ch-'a']++;
        }
        int max=INT8_MIN;
        int num=0;
        for(int i=0;i<26;i++){
            if(max<count[i]){
                max=count[i];
                num=i;
            }
        }
        return num+'a';
    }


int main(){
    string s;
    cin>>s;

    cout<<getMaxOccuringChar(s)<<endl;
    return 0;
}