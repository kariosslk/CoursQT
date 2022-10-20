#include "rouleau.h"
#include <iostream>

using namespace std;

Rouleau::Rouleau(const string _reference, const int _diametre):
    reference(_reference),
    diametre(_diametre),
    rangee(0),
    colonne(0)
{

}

void Rouleau::AffecterAlveole(const unsigned int _rangee, const unsigned int _colonne)
{
    rangee = _rangee;
    colonne = _colonne;
}

void Rouleau::ObtenirLocalisation(int &_rangee, int &_colonne) const
{
    _rangee = rangee;
    _colonne = colonne;
}

bool Rouleau::operator <(const Rouleau _autreRouleau) const
{
    bool retour= false;
    if(diametre > _autreRouleau.diametre){
        retour = true;
    }
    return retour;
}

int Rouleau::operator -(const Rouleau _autreRouleau) const
{
    return diametre - _autreRouleau.diametre;
}

void Rouleau::Visualiser() const
{
    cout << "Rouleau référence : " << reference << " Diamètre : " << diametre << endl;
    cout << "Dans magasin en " << rangee << " - " << colonne <<endl;
}
