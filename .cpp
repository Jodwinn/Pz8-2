#include <iostream>
#include <windows.h>;
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    const int size = 10;
    double jumps[size];  
 
    double maxHigh = -1, maxSufficient = -1, maxAverage = -1, maxLow = -1;
    double sumHigh = 0, sumSufficient = 0, sumAverage = 0, sumLow = 0;
    int countHigh = 0, countSufficient = 0, countAverage = 0, countLow = 0;
   
    cout << "Введіть результати за останні 10 років (у сантиметрах):\n";
    for (int i = 0; i < size; ++i) {
        cout << "Результат " << i + 1 << ": ";
        cin >> jumps[i];

        if (jumps[i] >= 160) {
            if (jumps[i] > maxHigh) maxHigh = jumps[i];
            sumHigh += jumps[i];
            countHigh++;
        }
        else if (jumps[i] >= 140) {
            if (jumps[i] > maxSufficient) maxSufficient = jumps[i];
            sumSufficient += jumps[i];
            countSufficient++;
        }
        else if (jumps[i] >= 120) {
            if (jumps[i] > maxAverage) maxAverage = jumps[i];
            sumAverage += jumps[i];
            countAverage++;
        }
        else {
            if (jumps[i] > maxLow) maxLow = jumps[i];
            sumLow += jumps[i];
            countLow++;
        }
    }

    cout << "\nРезультати по кожному діапазону:\n";

    if (countHigh > 0) {
        cout << "Високий показник:\n";
        cout << "  Найкращий результат: " << maxHigh << " см\n";
        cout << "  Середній результат: " << sumHigh / countHigh << " см\n";
    }
    else {
        cout << "Високий показник: немає результатів.\n";
    }

    if (countSufficient > 0) {
        cout << "Достатній показник:\n";
        cout << "  Найкращий результат: " << maxSufficient << " см\n";
        cout << "  Середній результат: " << sumSufficient / countSufficient << " см\n";
    }
    else {
        cout << "Достатній показник: немає результатів.\n";
    }

    if (countAverage > 0) {
        cout << "Середній показник:\n";
        cout << "  Найкращий результат: " << maxAverage << " см\n";
        cout << "  Середній результат: " << sumAverage / countAverage << " см\n";
    }
    else {
        cout << "Середній показник: немає результатів.\n";
    }

    if (countLow > 0) {
        cout << "Низький показник:\n";
        cout << "  Найкращий результат: " << maxLow << " см\n";
        cout << "  Середній результат: " << sumLow / countLow << " см\n";
    }
    else {
        cout << "Низький показник: немає результатів.\n";
    }

    return 0;
}
