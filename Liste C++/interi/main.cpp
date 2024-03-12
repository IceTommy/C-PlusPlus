#include <iostream>
#include "ListaInt.h"
#include<list>

using namespace std;
int main() {
    ListaInt lista(10);
    lista.addTesta(20);
    lista.addTesta(30);
    lista.addTesta(40);
    lista.print();
    lista.del(0);
    lista.print();

    return 0;
}
