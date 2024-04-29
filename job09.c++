#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cout << "Entrez le premier entier : ";
    cin >> a;
    cout << "Entrez le deuxième entier : ";
    cin >> b;
    cout << "Entrez le troisième entier : ";
    cin >> c;
    
    if (a >= b && a >= c) {
        cout << "Le plus grand entier est : " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "Le plus grand entier est : " << b << endl;
    } else {
        cout << "Le plus grand entier est : " << c << endl;
    }
    
    return 0;
}
