#include <iostream>
#include <cstring>

#include "stringa.h"
using namespace std;

Lista::Lista(){
    iniziallzato= false;

}


void Lista::addTesta(char stringa[]){
    p_lista temp;
    temp=new nodoStringa;

    strcpy(temp->stringa,stringa);


    temp->next=testa;

    testa=temp;
}
void Lista::addCoda(char stringa[]){
    if(!iniziallzato){
        addTesta(stringa);
        iniziallzato= true;
    } else{
        p_lista temp;
        temp=new nodoStringa;

        strcpy(temp->stringa,stringa);



        temp->next= nullptr;
        p_lista aux=testa;
        while (aux->next != nullptr){
            aux=aux->next;
        }
        aux->next=temp;
    }




}

bool  Lista::get(int index,char stringa[]){
    if(iniziallzato){
        p_lista aux=testa;

        int i=0;
        while (aux!= nullptr && i <= index){
            if(i==index){


                strcpy(stringa, aux->stringa);


            } else{
                aux=aux->next;
            }
            i++;

        }
        if(aux== nullptr){
            cout << "index out of bound!";
            return false;
        } else{
            return true;
        }
    }


}
bool  Lista::modifica(int index,char stringaNuova[]){
    p_lista aux=testa;

    int i=0;
    while (aux!= nullptr && i <= index){
        if(i==index){


            strcpy(aux->stringa, stringaNuova);


        } else{
            aux=aux->next;
        }
        i++;

    }
    if(aux== nullptr){
        cout << "index out of bounddf!";
        return false;
    } else{
        return true;
    }

}

void Lista::del(int index){//elimina il nodo
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
void Lista::print(){//stampa la classifica
    p_lista aux=testa;
    while (aux != nullptr){
        cout << aux->stringa<<endl;
        aux=aux->next;
    }
    cout << endl;
}
int Lista::length(){//stampa la classifica
    int length=0;
    p_lista aux=testa;
    while (aux != nullptr){
        length++;
        aux=aux->next;
    }
    return length;
}




