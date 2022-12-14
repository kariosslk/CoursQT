#ifndef MAGASIN_H
#define MAGASIN_H

#include "alveoleslibres.h"
#include "stock.h"
#include "rouleau.h"
#include "chariot.h"

#define NB_RANGEES 2
#define NB_COLONNES 5

class Magasin
{
public:
    Magasin();
    void EntrerRouleau();
    void SortirRouleau();
    void Visualiser();
private :
    AlveolesLibres lesAlveoleslibres;
    Stock leStock;
    Chariot leChariot;

};

#endif // MAGASIN_H
