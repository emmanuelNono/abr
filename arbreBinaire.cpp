#include "arbreBinaire.h"
//arbreBinaire::arbreBinaire()

using namespace std;

arbreBinaire::arbreBinaire():racine{nullptr}
{}

noeud::noeud(int i):info{i}
{}

void arbreBinaire::insertABR(int k)
{
    if (racine == nullptr)
        racine = new noeud{k};
    else
    {
        if (k < racine->info)
            racine->sag.insertABR(k);
        else
            racine->sad.insertABR(k);
    }
}

bool arbreBinaire::supprimeABR(int k)
{
    if (racine == nullptr)
        racine = false;
    else
        if (k < racine->info)
            racine->sag.supprimeABR(k);
        else
        {
            if (k > racine->info)
               return racine->sad.supprimeABR(k);
            else
            {
                supprimeABR(k);
                return true;
            }
        }


}


void arbreBinaire::affiche()const
{
    if(racine==nullptr)
    {
        cout << racine->info<<" "<<endl;
    }
}

int arbreBinaire::nbNoeud()const
{
    if(racine==nullptr)
        return 0;
    else
        return racine->sag.nbNoeud() + racine->sad.nbNoeud() + 1;
}

int arbreBinaire::nbFeuille()const
{
    if(!racine)
        return 0;
    else
    {
        if ((racine->sag.racine==nullptr) && (racine->sad.racine==nullptr))
            return 1;
        else
            return racine->sag.nbFeuille() + racine->sad.nbFeuille();
    }
}

int arbreBinaire::minimun()const
{
    if(racine==nullptr)
        return INT_MAX;
    else
    {
        int ming = racine->sag.minimun();
        int mind = racine->sad.minimun();
        return min(min(ming, mind), racine->info);
    }
}

int arbreBinaire::hauteur()const
{
    if(racine==nullptr)
        return -1;
    else
    {
        int Hg,Hd;
        Hg = racine->sag.hauteur();
        Hd = racine->sad.hauteur();
        if (Hg > Hd)
            return Hd + 1;
        else
            return Hd + 1;
    }
}

int arbreBinaire::nbProfond(int p) const
{
    if(!racine)
        return 0;
    else
    {
        if(p==0)
            return 1;
        else
            return racine->sad.nbProfond(p-1) + racine->sad.nbProfond(p-1);
    }
}

bool arbreBinaire::operator==(const arbreBinaire& A) const
{
    if (racine==nullptr || A.racine==nullptr)
        return racine==A.racine;
    else
        return racine->info == A.racine->info &&
               racine->sag == A.racine->sag &&
               racine->sad == A.racine->sad;
}

