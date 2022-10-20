#ifndef MENU_H
#define MENU_H
#include <string>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class Menu
{
public:
    Menu(const std::string &_nom);
    ~Menu();
    int Afficher();
    static void AttendreAppuiTouche();

private:
    /// nom du fichier à ouvrir pour créer le menu
    string nom;
    /// La plus grande longueur d'un item
    int longueurMax;
    /// Nombre d'items du menu
    int nbOptions;
    /// Pointeur sur tableau des items
    string *options;
};

#endif // MENU_H
