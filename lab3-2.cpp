//  С помощью while вводить массы багажа до ввода 0. Отрицательные значения пропускать. 
// Найти общий вес и количество мест тяжелее 20 кг.
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian"); 

    double totalWeight = 0; 
    int heavyCount = 0;    
    double weight;

    cout << "Вводите массы багажа (для завершения введите 0):" << endl;

    while (true) {
        cout << "Введите массу: ";
        cin >> weight;

        if (weight == 0) {
            break; 
        }

        if (weight < 0) {
            continue; 
        }

        totalWeight += weight; 

        if (weight > 20) {
            heavyCount++; 
        }
    }

    cout << "\n--- Результаты ---" << endl;
    cout << "Общий вес: " << totalWeight << " кг" << endl;
    cout << "Количество мест тяжелее 20 кг: " << heavyCount << endl;

    return 0;
}