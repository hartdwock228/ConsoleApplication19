#include <cmath>
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    float m, F, t;

    cout << "Масса звездолёта: ";
    cin >> m;
    
    cout << "Сила тяги: ";
    cin >> F;
   
    cout << "Время: ";
    cin >> t;

    float a = F / m;
    float result = 0.5 * a * pow(t, 2);

    cout << "Корабль через " << t << " секунд будет на расстоянии " << result << " метров." << endl;

  
}
