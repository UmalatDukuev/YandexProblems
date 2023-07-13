#include <iostream>


int main()
{
    int n = 0, m = 0, sum = 0;

    std::cin >> n >> m;

    int **mas = new int* [n];
    for (int i = 0; i < n; i++) {
        mas[i] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> mas[i][j];
        }
    }

    for (int i = 1; i < m; i++) {

        mas[0][i] += mas[0][i - 1];
    }

    for (int i = 1; i < n; i++) {

        mas[i][0] += mas[i - 1][0];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            mas[i][j] = std::min(mas[i][j] + mas[i - 1][j], mas[i][j] + mas[i][j - 1]);
        }
    }

    std::cout << mas[n - 1][m - 1];
    return 0;
}