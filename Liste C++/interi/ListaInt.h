//
// Created by Tommy on 14/12/2023.
//

#ifndef CLASSI_LISTAINT_H
#define CLASSI_LISTAINT_H

struct nodoINT{
    int valore;
    nodoINT *next;
};
typedef nodoINT *p_lista;

class ListaInt {
public:
    explicit ListaInt(int valore);
    void addTesta(int valore);
    void addCoda(int valore);
    int get(int index);
    bool is_in(int valore);
    void del(int index);
    void print();

private:
    p_lista testa= nullptr;
};


#endif //CLASSI_LISTAINT_H
