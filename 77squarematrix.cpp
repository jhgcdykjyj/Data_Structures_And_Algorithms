#include<iostream>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }

    for(int i=0; i<3; i++){
        for(int j=1; j<3; j++){
            //swap
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;

        }

    }
    //print

    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}