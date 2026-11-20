// Через do-while запросить номер выхода от 1 до 50. 
// После корректного ввода вывести, находится ли он в первой половине (1..25) или второй.
//
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int exitNum;

    do {
        cout << "Введите номер выхода (от 1 до 50): ";
        cin >> exitNum;
    } while (exitNum < 1 || exitNum > 50);

    if (exitNum <= 25) {
        cout << "Выход находится в первой половине (1..25)." << endl;
    }
    else {
        cout << "Выход находится во второй половине (26..50)." << endl;
    }

    return 0;
}