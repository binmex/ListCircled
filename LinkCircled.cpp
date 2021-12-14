//
// Created by Binmex on 25/11/2021.
//

#include "LinkCircled.h"

template<class T>
LinkCircled<T>::LinkCircled() {
    head = NULL;
}

template<class T>
bool LinkCircled<T>::isEmpy() {
    return head == NULL;
}

template<class T>
void LinkCircled<T>::addNodeFirst(T info) {
    Node<T> *nodeNew = new Node<T>(info);
    if (isEmpy()) {
        head = nodeNew;
        head->next = head;
    } else {
        nodeNew->next = head->next;
        head->next = nodeNew;
    }
}

template<class T>
void LinkCircled<T>::addNodeLast(T info) {
    Node<T> *nodeNew = new Node<T>(info);
    if (isEmpy()) {
        head = nodeNew;
        head->next = head;
    } else {
        nodeNew->next = head->next;
        head->next = nodeNew;
        head = nodeNew;
    }
}

template<class T>
void LinkCircled<T>::addNodeBeforeTo(Node<T> *before, T info) {
    Node<T>* newNode = new Node<T>(info);
    Node<T>* aux = head;
    while (aux->next != before){
        aux = aux->next;
    }
    newNode->next = aux->next;
    aux->next= newNode;
}

template<class T>
void LinkCircled<T>::addNodeAfterTo(Node<T> *, T) {

}

template<class T>
void LinkCircled<T>::addNodeSorted(T) {

}

template<class T>
std::vector<T> LinkCircled<T>::getLinked() {
    std::vector<T> out;
    Node<T> *aux = head;
    do {
        out.push_back(aux->next->info);
        aux = aux->next;
    } while (aux != head);

    return out;
}

template<class T>
std::vector<T> LinkCircled<T>::roamLinked(Node<T> *) {
    return std::vector<T>();
}

template<class T>
Node<T> *LinkCircled<T>::findNode(std::string id) {
    Node<T> *aux = head;
    do {
        if (id.compare(aux->next->info.getId())==0){
            return aux->next;
        }
        aux = aux->next;
    } while (aux != head);
    return NULL;
}

template<class T>
T *LinkCircled<T>::findInfo(std::string id) {
    Node<T> *aux = head;
    do {
        if (id.compare(aux->next->info.getId())==0){
            return &aux->next->info;
        }
        aux = aux->next;
    } while (aux != head);
    return NULL;
}

template<class T>
LinkCircled<T>::~LinkCircled() {
    Node<T> *aux = NULL;
    do {
        aux = head->next;
        head = head->next;
        delete (aux);
    } while (aux != head);
}




