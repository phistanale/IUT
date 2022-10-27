#include <iostream>
using namespace std;

unsigned CompterDoublonV0 (string & chaine){
    if(chaine.size()<2)return 0;
    unsigned Compt = 0;
    unsigned i = 1;
    while (i != chaine.size())
    {
        if( chaine[i] == chaine [i-1]){
            Compt = Compt+1;
        }
        i += 1;
    }
    return Compt;
}

unsigned CompterDoublonV1 (string & chaine){
    if(chaine.size()<2)return 0;
    unsigned Compt = 0;
    for (unsigned i = 1; i != chaine.size(); i++)
    {
         if( chaine[i] == chaine [i-1]){
            Compt = Compt +1;
        }
    }
    return Compt;
}
unsigned CompterDoublonV2 (string & chaine){
    if(chaine.size()<2)return 0;
    unsigned Compt = 0;
    unsigned i = 0;
    while (i != chaine.size()-1)
    {
        if( chaine[i] == chaine [i+1]){
            Compt = Compt +1;
        }
        i = i + 1;
    }
    return Compt;
}
unsigned CompterDoublonV3 (string & chaine){
    if(chaine.size()<2)return 0;
    unsigned Compt = 0;
    for (unsigned i = 0; i != chaine.size()-1; i++)
    {
         if( chaine[i] == chaine [i+1]){
            Compt = Compt + 1;
        }
    }
    return Compt;
}

int main(){
    string str = "aa bc dd cc kk";
    unsigned resul = CompterDoublonV0(str);
    cout << resul;
    return 0;

}