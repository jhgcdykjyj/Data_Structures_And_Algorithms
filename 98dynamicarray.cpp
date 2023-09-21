#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int m;
    cin >> m;

    // creation
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[1] = new int[m];
    }
    // input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // print
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0;i<n;i++){
        delete [] arr[i];
    }
    delete []arr;
    return 0;
}