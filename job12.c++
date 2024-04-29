#include <iostream>

using namespace std;

int main() {
    int total = 0; 
    int nombre; 

    cout << "Entrez cinq entiers : " << endl;

    for (int i = 0; i < 5; ++i) {
        cout << "Entrez l'entier " << i + 1 << " : ";
        cin >> nombre;
        total += nombre;
    }

    double moyenne = static_cast<double>(total) / 5;
    cout << "La moyenne des cinq entiers est : " << moyenne << endl;

    return 0;
}
