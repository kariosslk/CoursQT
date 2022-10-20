#ifndef ROULEAU_H
#define ROULEAU_H
#include <iostream>

using namespace std;

class Rouleau
{
public:
    Rouleau(){};
    Rouleau(const string _reference, const int _diametre);
    void AffecterAlveole(const unsigned int _rangee,const unsigned int _colonne);
    void ObtenirLocalisation( int &_rangee, int &_colonne)const;
    bool operator <(const Rouleau _autreRouleau)const;
    int operator -(const Rouleau _autreRouleau)const;
    void Visualiser() const;
private:
    string reference;
    int diametre;
    int rangee;
    int colonne;
};

#endif // ROULEAU_H
