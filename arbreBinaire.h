#ifndef ARBREBINAIRE_H_INCLUDED
#define ARBREBINAIRE_H_INCLUDED
#include <iostream>

class noeud;

class arbreBinaire
{
public:
    arbreBinaire();
    void affiche() const;
    int nbNoeud()const;
    int nbFeuille()const;
    int minimun()const;
    int hauteur()const;
    int nbProfond(int p)const;
    bool operator==(const arbreBinaire& A) const;
    void insertABR(int k);
    bool supprimeABR(int k);
private:
    noeud *racine;
};

class noeud
{
public:
    friend class arbreBinaire;
private:
    int info;
    arbreBinaire sag, sad;
    noeud(int i);
};
#endif // ARBREBINAIRE_H_INCLUDED
