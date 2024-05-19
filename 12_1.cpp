#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;


template<typename T>
vector<vector<T>> transpose(const vector<vector<T>>& matrix) {
    size_t rows = matrix.size();
    size_t cols = matrix[0].size();
    vector<vector<T>> transposed(cols, vector<T>(rows));
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }
    return transposed;
}

template<typename T>
T sumAround(const vector<vector<T>>& matrix, int x, int y) {
    T sum = T();
    int rows = matrix.size();
    int cols = matrix[0].size();
    for (int i = x - 1; i <= x + 1; ++i) {
        for (int j = y - 1; j <= y + 1; ++j) {
            if (i >= 0 && i < rows && j >= 0 && j < cols && !(i == x && j == y)) {
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

template<typename T>
void printMatrix(const vector<vector<T>>& matrix) {
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            if constexpr (is_floating_point<T>::value) {
                cout << fixed << setprecision(1) << elem << " ";
            }
            else {
                cout << elem << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    while (cin >> rows >> cols) {
        vector<vector<int>> matrix1(rows, vector<int>(cols));
        vector<vector<double>> matrix2(rows, vector<double>(cols));
        vector<vector<char>> matrix3(rows, vector<char>(cols));

        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                cin >> matrix1[i][j];

        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                cin >> matrix2[i][j];

        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                cin >> matrix3[i][j];

        vector<pair<int, int>> coords1(3);
        for (int i = 0; i < 3; ++i) {
            cin >> coords1[i].first >> coords1[i].second;
        }

        vector<pair<int, int>> coords2(3);
        for (int i = 0; i < 3; ++i) {
            cin >> coords2[i].first >> coords2[i].second;
        }

        cout << "===== [ Matrix 1 ] =====" << endl;
        cout << "Original matrix:" << endl;
        printMatrix(matrix1);
        auto transposed1 = transpose(matrix1);
        cout << "Transposed matrix:" << endl;
        printMatrix(transposed1);
        cout << "Sum of the surrounding element:" << endl;
        for (const auto& coord : coords1) {
            cout << "(" << coord.first << ", " << coord.second << ") -> " << sumAround(transposed1, coord.first, coord.second) << endl;
        }
        cout << endl;

        cout << "===== [ Matrix 2 ] =====" << endl;
        cout << "Original matrix:" << endl;
        printMatrix(matrix2);
        auto transposed2 = transpose(matrix2);
        cout << "Transposed matrix:" << endl;
        printMatrix(transposed2);
        cout << "Sum of the surrounding element:" << endl;
        for (const auto& coord : coords2) {
            cout << "(" << coord.first << ", " << coord.second << ") -> " << fixed << setprecision(1) << sumAround(transposed2, coord.first, coord.second) << endl;
        }
        cout << endl;

        cout << "===== [ Matrix 3 ] =====" << endl;
        cout << "Original matrix:" << endl;
        printMatrix(matrix3);
        auto transposed3 = transpose(matrix3);
        cout << "Transposed matrix:" << endl;
        printMatrix(transposed3);
    }
}