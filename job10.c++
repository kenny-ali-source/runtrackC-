#include <iostream>
using namespace std;

int main() {
    float prixHTCarottes, poidsCarottes, tauxTVA;
    cout << "Entrez le prix HT d'un kilo de carottes : ";
    cin >> prixHTCarottes;

    cout << "Entrez le nombre de kilos de carottes : ";
    cin >> poidsCarottes;

    cout << "Entrez le taux de TVA en pourcentage (ex: 15 pour 15%) : ";
    cin >> tauxTVA;
    float prixTTC = prixHTCarottes * poidsCarottes * (1 + tauxTVA / 100);
    cout << "Le prix TTC pour " << poidsCarottes << " kilos de carottes est de : " << prixTTC << " euros." << endl;

    return 0;
}
