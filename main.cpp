#include <iostream>
#include "LinkCircled.cpp"
#include "Empleado.h"

using namespace std;

int main() {
    LinkCircled<char> *lc = new LinkCircled<char>();
//    lc->addNodeFirst('0');
//    lc->addNodeFirst('r');
//    lc->addNodeFirst('i');
//    lc->addNodeFirst('a');
//    lc->addNodeFirst('j');
    lc->addNodeLast('J');
    lc->addNodeLast('A');
    lc->addNodeLast('I');
    lc->addNodeLast('R');
    lc->addNodeLast('O');

    for (char c: lc->getLinked()) {
        cout << c << "\t";
    }
    cout << endl;

    delete (lc);

    LinkCircled<Empleado>* list = new LinkCircled<Empleado>();

    list->addNodeLast(Empleado("Juan","Garzon","ab456",45));
    list->addNodeFirst(Empleado("Maria","Gonzales","cd789",40));
    list->addNodeFirst(Empleado("Marcos","Puentes","ld321",25));
    list->addNodeLast(Empleado("Sebastian","Rueda","wl741",55));
    list->addNodeBeforeTo(list->findNode("cd789"),Empleado("Antonia","jertrudiz","po369",85));
    // Marcos-Antonia-maria-juan-sebastian
    cout<<endl;

    string id = "ab456";
    Empleado* empleado1 = list->findInfo(id);
    if (empleado1 != NULL){
        cout<<"El nodo: "<<*empleado1<<" Existe "<<endl;
    } else{
        cout<<"El nodo: "<<*empleado1<<" NO Existe "<<endl;
    }

    for (Empleado empleado:list->getLinked()) {
        cout<<empleado<<endl;
    }
    delete(list);

    return EXIT_SUCCESS;
}
