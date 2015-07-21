#include <iostream>
#include "queue.h"

using namespace std;

queue::queue() {
    root = NULL;
}

void queue::push(int val) {
    node *u = new node(val);
    
    if (root == NULL)
        root = u;
    else {
        u->setNext(root);
        root = u;
    }
}

int queue::pop() {
    if(root == NULL) return -1;
    
    node *p = root;
    int poped = 0;
    
    while((p->getNext())->getNext() != NULL)
        p = p->getNext();
    
    poped = (p->getNext())->getData();
    
    p->setNext(NULL);
    
    return poped;
}

void queue::display() {
    //if (!root) return;
    
    node *p = root;
    
    while ( p ) {
        cout << p->getData() << "\t";
        p = p->getNext();
    }
    
    cout << endl;
}

queue::~queue() {
    if (root) delete root;
}
