#include "magasin.h"
#include <iostream>

using namespace std;

Magasin::Magasin():
    lesAlveoleslibres(NB_RANGEES,NB_COLONNES)
{

}

void Magasin::EntrerRouleau()
{
    string reference;
    int diametre;
    int laRangee;
    int laColonne;

    if (lesAlveoleslibres.Reserver(laRangee, laColonne))
    {
        cout << "Indiquez les caractéristiques du rouleau à ajouter " << endl;
        cout << "Référence du rouleau : ";
        cin >> reference;
        cout << "Diamètre du rouleau : ";
        cin >> diametre;
        Rouleau nouveau(reference, diametre);
        nouveau.AffecterAlveole(laRangee, laColonne);
        leStock.AjouterRouleau(nouveau);
        leChariot.DeplacerChariot(VERS_MAGASIN, laRangee, laColonne);
    }
    else
    {
        cout << "Il n'y a plus aucun rouleau dans le magasin" << endl;
    }
}

void Magasin::SortirRouleau()
{
    Stock::iterator posDebut;
    int laRangee;
    int laColonne;
    Rouleau courant;

    int nbRouleau = leStock.RechercherSerie(posDebut);
    if(nbRouleau > 0)
    {
        for (int i = 0; i < nbRouleau; i++)
        {
            courant = *posDebut;
            courant.ObtenirLocalisation(laRangee, laColonne);
            lesAlveoleslibres.Liberer(laRangee, laColonne);
            leStock.SortitRouleau(posDebut);
            leChariot.DeplacerChariot(VERS_ENCEINTE,laRangee, laColonne);
        }
    }
    else
    {
        cout << "Il n'y a plus aucun rouleau dans le magasin" << endl;
    }
}

void Magasin::Visualiser()
{
    cout << "Rouleau dans le magasin : " << endl;
    if(!leStock.empty())
    {
        leStock.Visualiser();
    }
    else
    {
        cout << "Le stock est vide" << endl;
    }

    cout << "Numéros d'alvéoles disponible : " << endl;
    if(!lesAlveoleslibres.empty())
    {
        lesAlveoleslibres.Visualiser();
    }
    else
    {
        cout << "Le magasin est complet" << endl;
    }
}
