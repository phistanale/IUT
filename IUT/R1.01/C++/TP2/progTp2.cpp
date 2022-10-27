#include <iostream>
#include <vector>
using namespace std;
#include "EasyAssert.h"

//exo1
unsigned TrouveCarDansStr (char Caract, string chaine,unsigned Debut)
{
    unsigned i = Debut;
    while (i != chaine.size() and Caract != chaine[i])
    {
        i = i + 1;
    }
    return i;
}

void asserTrouvCarDansStr(){
    string Str = "Salut ça va?";
    EASY_ASSERT(TrouveCarDansStr('a', Str, 0)==1);
    EASY_ASSERT(TrouveCarDansStr('a', Str, 3)==7);
    EASY_ASSERT(TrouveCarDansStr('a', Str, 6)==7);
    EASY_ASSERT(TrouveCarDansStr('b', Str, 6)==Str.size());
}
//exo2
unsigned ComptCarac(char & Caract, string & chaine){
    unsigned cpt = 0;
    for(unsigned i = 0, i < chaine.size()-1, i++){
        if(Caract== chaine[i])
        cpt = cpt + 1
    }
    return cpt;
}void asserComptCarac(){
    string Str = "Salut ça va?";
    EASY_ASSERT(ComptCarac('a', Str)==3);
    EASY_ASSERT(ComptCarac('a', Str)==0);
}

//exo3
unsigned ComptCaracV2(char & Caract, string & chaine){
    unsigned cpt = 0;
    unsigned Pos = 0:
    while(true){
        Pos = TrouveCarDansStr(Caract,chaine,Pos);
        if(Pos == chaine.size())break;
        cpt +=1
        Pos +=1
    }
    return cpt;
}void asserComptCaracV2(){
    string Str = "Salut ça va?";
    EASY_ASSERT(ComptCarac('a', Str)==3);
    EASY_ASSERT(ComptCarac('a', Str)==0);
}

//exo4

vector<unsigned> ComptEnsembleDansChaine (const string & ChaineACompter, const string & ChaineDeComptage){
    vector<unsigned> sortie (ChaineDeComptage.size());
    for (unsigned i = 0; i < ChaineDeComptage.size(); i++)
    {
        sortie[i] = ComptCaracV2(ChaineDeComptage[i],ChaineACompter);
    }
    return sortie;
}void AssertComptEnsembleDansChaine(){
    string str = "salut ça va?";
    vector<unsigned> rep = {3,1,0};
    EASY_ASSERT(ComptEnsembleDansChaine(Str,"a,t,c")==rep)
}
int main() {

    return 0;
}