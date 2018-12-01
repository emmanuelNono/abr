#include "arbreBinaire.h"

using namespace std;
/*
// Insertion
void ArbreABR::Inserer(int dat)
{
   Noeud *pere = NULL;
   actuel = racine;
   // Chercher la donnee, en metant un pointeur au pere
   while(!Vide(actuel) && dat != actuel->donnee)
   {
      pere = actuel;
           if (dat > actuel->donnee) actuel = actuel->droite;
      else if (dat < actuel->donnee) actuel = actuel->gauche;
   }
   // Si la donnee existe, returner sans l'inserer
   if(!Vide(actuel)) return;
   // Si pere == NULL l'arbre est vide, le noeud sera la racine
   if(Vide(pere)) racine = new Noeud(dat);
   // Si donnee < noeud pere, insertion a gauche
   else if(dat < pere->donnee) pere->gauche = new Noeud(dat);
   // Si donnee < noeud pere, insertion a droite
   else if(dat > pere->donnee) pere->droite = new Noeud(dat);
}
*/
int main()
{
    arbreBinaire B{};
    int minAbr;
    B.insertABR(10);
    B.insertABR(11);
    B.insertABR(5);
    B.insertABR(15);
    B.insertABR(14);
    B.insertABR(2);
    B.affiche();

    minAbr = B.supprimeMinimunABR();
    cout << "suppresion reussite de " << minAbr;
    B.affiche();

     //B.supprimeABR(6);
    return 0;
}
