#include <iostream>
#include "potegowanie_funkcja.h"

int main(){
    unsigned int a, b;

    std::cout << "Podaj liczbe x: ";
    std::cin >> a;

    std::cout << "Podaj liczbe y: ";
    std::cin >> b;

    std::cout << "X do potegi Y wynosi: " << Potegowanie_szybkie(a, b) << std::endl;

    return 0;
}



