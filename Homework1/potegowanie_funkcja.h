#ifndef POWER_POTEGOWANIE_H
#define POWER_POTEGOWANIE_H

bool Parzysta(unsigned int wykladnik){
    return wykladnik % 2 == 0;
}

unsigned int Kwadrat(unsigned x){
    return x * x;
}

unsigned int Potegowanie_szybkie(unsigned int podstawa, unsigned int wykladnik){
    if(wykladnik == 0) return 1;
    else if(Parzysta(wykladnik)) return Kwadrat(Potegowanie_szybkie(podstawa, wykladnik / 2));
    else return podstawa * Kwadrat(Potegowanie_szybkie(podstawa, (wykladnik-1)/2));
}

#endif //POWER_POTEGOWANIE_H
