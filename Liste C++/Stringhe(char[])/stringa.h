#ifndef LIST_H_
#define LIST_H_




struct nodoStringa{
    char stringa[61];

    nodoStringa *next;
};
typedef nodoStringa *p_lista;

class Lista {
public:
    explicit Lista();




    void addTesta(char stringa[]);
    void addCoda(char stringa[]);
    bool get(int index,char stringa[]);
    bool  modifica(int index,char stringaNuova[]);


    void del(int index);
    void print();
    int length();



private:
    bool iniziallzato;
    p_lista testa= nullptr;
};
#endif