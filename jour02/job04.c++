#include <iostream>

using namespace std;

int main() {
    char operation;
    float nombre1, nombre2;

    cout << "Entrez un opérateur (+, -, *, /) : ";
    cin >> operation;

    cout << "Entrez deux nombres : ";
    cin >> nombre1 >> nombre2;

    switch(operation) {
        case '+':
            cout << "Le résultat de l'addition est : " << nombre1 + nombre2;
            break;
        case '-':
            cout << "Le résultat de la soustraction est : " << nombre1 - nombre2;
            break;
        case '*':
            cout << "Le résultat de la multiplication est : " << nombre1 * nombre2;
            break;
        case '/':
            if(nombre2 != 0)
                cout << "Le résultat de la division est : " << nombre1 / nombre2;
            else
                cout << "Erreur : division par zéro";
            break;
        default:
            cout << "Opérateur non valide";
            break;
    }

    return 0;
}
