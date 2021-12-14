//
// Created by Binmex on 25/11/2021.
//

#ifndef LISTCIRCLED_NODE_H
#define LISTCIRCLED_NODE_H
#include <stdlib.h>

template <class T> class LinkCircled; ///para pode declararlas amigas
template <class T>
class Node {
    friend class LinkCircled<T>;
public:
    Node() {}

    Node(T info) : info(info) {
        next = NULL;
    }

private:
    T info;
Node<T>* next;

};


#endif //LISTCIRCLED_NODE_H
