//
// Created by Binmex on 25/11/2021.
//

#ifndef LISTCIRCLED_LINKCIRCLED_H
#define LISTCIRCLED_LINKCIRCLED_H

#include "Node.h"
#include <vector>
#include <string>

template<class T>
class LinkCircled {
public:
    LinkCircled();

    bool isEmpy();

    void addNodeFirst(T);

    void addNodeLast(T);

    void addNodeBeforeTo(Node<T> *, T);

    void addNodeAfterTo(Node<T> *, T);

    void addNodeSorted(T);

    std::vector<T> getLinked();

    std::vector<T> roamLinked(Node<T> *);

    Node<T> *findNode(std::string);

    T *findInfo(std::string);

    virtual ~LinkCircled();

private:
    Node<T> *head;

};

#endif //LISTCIRCLED_LINKCIRCLED_H
