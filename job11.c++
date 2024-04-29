#include <iostream>

using namespace std;

int main() {
    int n, m;

    cout << "Entrez la valeur de n : ";
    cin >> n;
    cout << "Entrez la valeur de m : ";
    cin >> m;

    cout << "Avant l'echange : " << endl;
    cout << "n = " << n << endl;
    cout << "m = " << m << endl;

    int temp = n;
    n = m;
    m = temp;

  
    cout << "Après l'echange : " << endl;
    cout << "n = " << n << endl;
    cout << "m = " << m << endl;

    return 0;
}
