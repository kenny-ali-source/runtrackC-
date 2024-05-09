#include <iostream>

using namespace std;

int main() {
    int nombre, nombre_inverse = 0, reste;

    cout << "Entrez un nombre : ";
    cin >> nombre;

    while (nombre != 0) {
        reste = nombre % 10;
        nombre_inverse = nombre_inverse * 10 + reste;
        nombre /= 10;
    }

    cout << "Le nombre inversé est : " << nombre_inverse << endl;

    return 0;
}
