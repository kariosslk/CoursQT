#include "stock.h"

Stock::Stock()
{

}

void Stock::AjouterRouleau(const Rouleau &_nouveauRouleau)
{
    insert(_nouveauRouleau);
}

unsigned int Stock::RechercherSerie(positionstock &it)
{
    int nbRouleau = (int) size();
    Stock::iterator positionPremier = begin();
    it = positionPremier;
    if (nbRouleau > 6)
    {
        nbRouleau = 6;
        Stock::iterator positionDernier = begin();

        for (int i = 1; i < 6; i++)
        positionDernier++;

         int valeurRetenue = *positionDernier - *positionPremier;
         while (positionDernier != end())
         {
             if(valeurRetenue > (*positionDernier - *positionPremier))
             {
                 it = positionPremier;
                 valeurRetenue = *positionDernier - *positionPremier;
             }
             positionDernier++;
             positionPremier++;
         }

    }
    return nbRouleau;
}

void Stock::Visualiser()
{
    positionstock it;
    int nb {0};
    for (it = begin(); it != end(); it++){
        //(*it).Visualiser();
        it -> Visualiser();
        nb++;
    }
    if (nb == 0)
        cout << "Le magasin est vide" << endl;
}

bool Stock::SortitRouleau(const positionstock &it)
{
    bool rouleauSuppr = false;
    if (it != end()){
        rouleauSuppr = true;
        erase(it);
    }
    return rouleauSuppr;
}
