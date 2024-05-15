#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2, m;
    cin >> n1 >> n2 >> m;
    vector<vector<int>> matrix(n1, vector<int>(n2));
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            cin >> matrix[i][j];
        }
    }
    matrix.resize(n1 + m, vector<int>(n2));
    for (int i = n1; i < n1 + m; i++) {
        for (int j = 0; j < n2; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < n1 + m; j++) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}
