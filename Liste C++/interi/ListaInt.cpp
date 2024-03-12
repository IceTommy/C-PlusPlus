//
// Created by Tommy on 14/12/2023.
//

#include "ListaInt.h"
#include <iostream>

using namespace std;
ListaInt::ListaInt(int valore){
    testa=new nodoINT;
    testa->valore=valore;
    testa->next= nullptr;
}
void ListaInt::addTesta(int valore){
    p_lista temp;
    temp=new nodoINT;

    temp->valore=valore;
    temp->next=testa;

    testa=temp;
}
void ListaInt::addCoda(int valore){
    p_lista temp;
    temp=new nodoINT;

    temp->valore=valore;
    temp->next= nullptr;
    p_lista aux=testa;
    while (aux->next != nullptr){
        aux=aux->next;
    }
    aux->next=temp;
}
int  ListaInt::get(int index){
    p_lista aux=testa;
    int risultato=0;
    int i=0;
    while (aux!= nullptr && i <= index){
        if(i==index){
            risultato=aux->valore;
        } else{
            aux=aux->next;
        }
        i++;

    }
    if(aux== nullptr){
        cout << "index out of bound!";
    }
    return risultato;
}
bool ListaInt::is_in(int valore){
    p_lista aux=testa;
    bool is_in= false;
    while (aux != nullptr){
        if(aux->valore==valore){
            is_in= true;
        }
        aux=aux->next;
    }
    return is_in;

}
void ListaInt::del(int index){
    p_lista aux=testa;
    p_lista temp;
    p_lista prec= nullptr;
    bool flag= false;
    int i=0;
    while (aux!= nullptr && !flag){
        if(i==index){
            flag= true;
            temp=aux;
            //deve controllare se prec ha un valore
            if(prec == nullptr){//se è la testa

                testa=testa->next;


            } else{
                prec->next=aux->next;

            }
            aux=aux->next;
            delete(temp);
            temp= nullptr;
        } else{
            i++;
            prec=aux;
            aux=aux->next;

        }
    }
}
void ListaInt::print(){
    p_lista aux=testa;
    while (aux != nullptr){
        cout << aux->valore << " ";
        aux=aux->next;
    }
    cout << endl;
}
