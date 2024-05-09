#include <iostream>
using namespace std;

int main() {

  int year;
  cout << "Entrer l'année: ";
  cin >> year;

 
  if (year % 400 == 0) {
    cout << year << "Est une année bissextile.";
  }
  else if (year % 100 == 0) {
    cout << year << " N'est pas une année bissextile..";
  }
  else if (year % 4 == 0) {
    cout << year << "Est une année bissextile.";
  }
  else {
    cout << year << " N'est pas une année bissextile.";
  }
}
