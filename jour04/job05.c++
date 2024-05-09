#include <iostream>

struct Point {
    int x;
    int y;
};

int main() {
    Point point;
    Point *ptr = &point;

    ptr->x = 10;
    ptr->y = 20;

    std::cout << "Valeur de x : " << ptr->x << std::endl;
    std::cout << "Valeur de y : " << ptr->y << std::endl;

    return 0;
}
