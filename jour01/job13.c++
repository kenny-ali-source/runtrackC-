#include <iostream>

using namespace std;

int main() {
    int N;
    int somme = 0;
    cout << "Entrez un entier N : ";
    cin >> N;
    for (int i = 5; i <= N; ++i) {
        somme += i * i * i;
    }
    cout << "La somme des cubes de 5^3 à N^3 est : " << somme << endl;

    return 0;
}
