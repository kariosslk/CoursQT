#include "alveoleslibres.h"
#include <iostream>
#include <algorithm>

using namespace std;


AlveolesLibres::AlveolesLibres(const int _nbRangees, const int _nbColonne):
    nbRangees(_nbRangees),
    nbColonnes(_nbColonne)
{
    int taille = _nbRangees * _nbColonne;
    reserve(taille);
    for (int numAlveole = 1; numAlveole <= taille; numAlveole++)
        push_back(numAlveole);
}

bool AlveolesLibres::Reserver(int &_rangee, int &_colonne)
{
    bool retour = false;
        if(!empty())
        {
            int alveole = back();
            pop_back();
            _rangee = ((alveole - 1) / nbColonnes )+ 1;
            _colonne = ((alveole - 1) % nbColonnes )+ 1 ;
            retour = true;
        }

        return retour;
}

bool AlveolesLibres::Liberer(const int _rangee, const int _colonne)
{
    bool retour = false;
    int alveole =  nbColonnes * (_rangee -1) + _colonne;
    if(find(begin(),end(),alveole) == end())
    {
        push_back(alveole);
        retour = true;
    }
    return retour;
}

void AlveolesLibres::Visualiser()
{
    vector<int> :: iterator it;
        /* for(it = begin();it != end();it++)
            cout <<  *it << " ";
        cout << endl;
        */
}
