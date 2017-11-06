#include <iostream>

class Macierz{
public:
    int **tab;
    int n;
    Macierz();
    Macierz(const Macierz& macierz); // konstruktor kopiujacy
    Macierz( Macierz && ); // konstruktor przenoszacy
    Macierz dodaj(Macierz macierz);

    ~Macierz();
};

Macierz::Macierz() {
    n = 10;
    tab = new int*[n];
    for(int i = 0; i < n; i++) {
        tab[i] = new int[n];
        for (int j = 0; j < n; j++) {
            tab[i][j] = rand() % 100 + 100;
        }
    }
}

Macierz::Macierz(const Macierz& macierz){
    n = macierz.n;
    tab = new int*[n];
    for(int i = 0; i < n; i++){
        tab[i] = new int[n];
        for(int j = 0; j < n; j++){
            tab[i][j] = macierz.tab[i][j];
        }
    }
}

Macierz Macierz::dodaj(Macierz macierz) {
    Macierz nowyMatrix;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            nowyMatrix.tab[i][j] = macierz.tab[i][j] + tab[i][j];
        }
    }
    return nowyMatrix;
}

Macierz::~Macierz(){
    for(int i = 0; i < n; i++){
        delete[] tab[i];
    }
    delete[] tab;

}

int main(){

    Macierz m1, m2;
    Macierz m3(m1.dodaj(m2));

    for(int i = 0; i < m3.n; i++){
        for(int j = 0; j < m3.n; j++){
            std::cout << m3.tab[i][j] << " ";
        }
        std::cout << std::endl;
    }


}

