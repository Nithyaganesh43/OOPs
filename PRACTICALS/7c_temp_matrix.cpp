#include <iostream>

using namespace std;

template <typename T, int ROWS, int COLS>
class MatrixOperations {
private:
    T matrix[ROWS][COLS];

public:
    MatrixOperations() {}

    void inputMatrix() {
        cout << "Enter elements of " << ROWS << "x" << COLS << " matrix:" << endl;
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                cin >> matrix[i][j];
            }
        }
    }

    void displayMatrix() {
        cout << "Matrix:" << endl;
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    void add(const MatrixOperations<T, ROWS, COLS>& other) {
        cout << "Result of addition:" << endl;
        MatrixOperations<T, ROWS, COLS> result;
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                result.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
            }
        }
        result.displayMatrix();
    }

    void subtract(const MatrixOperations<T, ROWS, COLS>& other) {
        cout << "Result of subtraction:" << endl;
        MatrixOperations<T, ROWS, COLS> result;
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                result.matrix[i][j] = matrix[i][j] - other.matrix[i][j];
            }
        }
        result.displayMatrix();
    }

    template <int OTHER_COLS>
    void multiply(const MatrixOperations<T, COLS, OTHER_COLS>& other) {
        cout << "Result of multiplication:" << endl;
        MatrixOperations<T, ROWS, OTHER_COLS> result;
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < OTHER_COLS; ++j) {
                result.matrix[i][j] = 0;
                for (int k = 0; k < COLS; ++k) {
                    result.matrix[i][j] += matrix[i][k] * other.matrix[k][j];
                }
            }
        }
        result.displayMatrix();
    }
};

int main() {
    MatrixOperations<int, 2, 2> matrix1, matrix2;
    matrix1.inputMatrix();
    matrix2.inputMatrix();

    matrix1.add(matrix2);
    matrix1.subtract(matrix2);

    MatrixOperations<int, 2, 3> matrix3, matrix4;
    matrix3.inputMatrix();
    matrix4.inputMatrix();

    matrix3.multiply(matrix4);

    return 0;
}
