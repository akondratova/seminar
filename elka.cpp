#include <iostream>
using namespace std;
 
//печать елки
void print_tree(int m, int n, int k) { 
    // m - текущий ярус, 
    // n - всего ярусов, 
    // k - ширина елки
    if (m <= n) { 
        // печатаем текущий ярус
        // если ярус номер m, то его ширина 2*m+1
        for (int i = 0; i <= m * 2; i += 2) {
            for (int j = 0; j < (k - i - 1) / 2; ++j) cout << ' ';
            for (int j = 0; j <= i; ++j) cout << '*';
            cout << '\n';
        }
        print_tree(m + 1, n, k); // вызываем функцию для след. яруса
    }
    return;
}
 
int main() {
    int n; // число ярусов
    cout << "n = ";
    cin >> n;
    print_tree(1, n, 2 * n + 1); // рекурсивная функция печати елки
    return 0;
}
