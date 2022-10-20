#ifndef STOCK_H
#define STOCK_H
#include <set>
#include <iostream>
#include "rouleau.h"

typedef std::multiset<Rouleau>::iterator positionstock;

class Stock : public std::multiset<Rouleau>
{
public:
    Stock();
    void AjouterRouleau(const Rouleau &_nouveauRouleau);
    unsigned int RechercherSerie(positionstock &it);
    void Visualiser();
    bool SortitRouleau(const positionstock &it);
};

#endif // STOCK_H
