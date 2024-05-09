#include <iostream>
using namespace std;
int main() {

    int n;

    cout << "Enter a positive integer: ";
    cin >> n;
if (n%2==0)
{
    std::cout << "n est pair: n = " << n << std::endl;
}
else
{
    std::cout << "n est impair: n = " << n << std::endl;
}
}