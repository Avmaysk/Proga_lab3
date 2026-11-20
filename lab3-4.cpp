// Ввести rows и seats (1..10). Вложенными for вывести места самолёта в формате row-seat и посчитать общее число мест.
//

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int rows, seats;
    int total = 0; 

   
    cin >> rows >> seats;

   
    for (int r = 1; r <= rows; r++) {
      
        for (int s = 1; s <= seats; s++) {
            cout << r << "-" << s << " ";
            total++; 
        }
        cout << endl; 
    }

    
    cout << "Всего мест: " << total << endl;

    return 0;
}
