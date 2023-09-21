#include <iostream>
#include <vector>
using namespace std;

void solve(string str, string output, int index, vector<string>& ans) {
    // Base case
    if (index >= str.length()) {
        ans.push_back(output);
        return;
    }

    // Exclude
    solve(str, output, index + 1, ans);

    // Include
    char element = str[index];
    solve(str, output + element, index + 1, ans);
}

vector<string> sub(string str) {
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
    return ans;
}

int main() {
    string input = "abc";
    vector<string> result = sub(input);

    for (const string& subsequence : result) {
        cout << subsequence << " ";
    }

    return 0;
}
