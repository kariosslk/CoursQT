//#include "alveoleslibres.h"
//#include "menu.h"
//#include "rouleau.h"
//#include "stock.h"
//#include <iostream>

//using namespace std;

//enum CHOIX_MENU{
//    AJOUTER = 1,
//    RECHERCHER,
//    VISUALISER,
//    QUITTER
//};

//int main()
//{
//    Stock stock;
//    string reference;
//    Rouleau *nouveauRouleau;
//    int choix;
//    int diametre;
//    char rep;
//    int nbRouleaux = 0;
//    positionstock posDebut;
//    positionstock memoDebut;

//    try{
//        Menu leMenu("../Magasin_De_Rouleau/stock.txt");
//        do
//        {
//            choix = leMenu.Afficher();
//            switch (choix)
//            {
//            case AJOUTER:
//                system("clear");
//                cout << "Indiquer les caractéristiques du rouleau à ajouter " << endl;
//                cout << "Référence: ";
//                cin >> reference;
//                cout << "Diamètre du rouleau: ";
//                cin >> diametre;
//                nouveauRouleau = new Rouleau(reference,diametre);
//                stock.AjouterRouleau(*nouveauRouleau);
//                Menu::AttendreAppuiTouche();
//                break;
//            case RECHERCHER:
//                system("clear");
//                nbRouleaux = stock.RechercherSerie(posDebut);
//                memoDebut = posDebut;
//                cout << "Nombre de rouleaux retenu: " << nbRouleaux << endl;
//                for(int indice = 0; indice< nbRouleaux; indice++){
//                    posDebut->Visualiser();
//                    posDebut++;
//                }
//                if(nbRouleaux >0){
//                    cout << "Voulez-vous sortir la série de rouleaux du stock O(o)/N(n)? " << endl;
//                    cin>> rep;
//                    if(rep == 'O' || rep == 'o'){
//                        for(int indice = 0; indice < nbRouleaux && memoDebut != stock.end(); indice++){
//                            stock.SortitRouleau(memoDebut++);
//                        }
//                    }
//                }
//                Menu::AttendreAppuiTouche();
//                break;
//            case VISUALISER:
//                system("clear");
//                cout << endl << "Affichage des rouleaux" << endl;
//                stock.Visualiser();
//                Menu::AttendreAppuiTouche();
//                break;
//            }

//        } while(choix != QUITTER);
//    }
//    catch(std::runtime_error &e){
//        cout << e.what() << endl;
//        exit(EXIT_FAILURE);
//    }
//    return 0;
//}
