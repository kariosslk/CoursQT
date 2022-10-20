//#include <iostream>
//#include "rouleau.h"
//#include "alveoleslibres.h"
//#include "menu.h"

//using namespace std;

//enum CHOIX_MENU{
//    RESERVER = 1,
//    LIBERER,
//    VISUALISER,
//    QUITTER
//};

//int main(){
//    unsigned int rangee = 0;
//    unsigned int colonne = 0;
//    Rouleau r1("A-320", 200);
//    Rouleau r2("B-747", 150);
//    r1.AffecterAlveole(4,5);
//    r2.AffecterAlveole(2,3);
//    r1.Visualiser();
//    r2.Visualiser();
//    cout<<endl;
//    r1.ObtenirLocalisation(rangee,colonne);
//    cout <<"r1 est en " << rangee << " - " << colonne <<endl;
//    r2.ObtenirLocalisation(rangee,colonne);
//    cout <<"r2 est en " << rangee << " - " << colonne <<endl;
//    cout << endl;

//}

///*
//int main()
//{
//    AlveolesLibres alveole(2,5);
//    int choix;
//    int val;
//    int val2;
//    try{
//        Menu leMenu("../Magasin_De_Rouleau/Alveoles.txt");
//        do
//        {
//            choix = leMenu.Afficher();
//            switch (choix)
//            {
//            case RESERVER:
//                cout << "Selectionner la valeur de la rangee ";
//                scanf("%d",&val);
//                cout << "Selectionner la valeur de la colonne ";
//                scanf("%d",&val2);
//                alveole.Reserver(val,val2);
//                Menu::AttendreAppuiTouche();

//                break;
//            case LIBERER:
//                cout << "Selectionner la valeur de la rangee: ";
//                scanf("%d",&val);
//                cout << "Selectionner la valeur de la colonne: ";
//                scanf("%d",&val2);
//                alveole.Liberer(val,val2);
//                Menu::AttendreAppuiTouche();
//                break;
//            case VISUALISER:
//                cout << endl << "Affichage des alvéoles" << endl;
//                alveole.Visualiser();
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
//*/
