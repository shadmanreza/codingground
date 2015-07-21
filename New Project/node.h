#include <iostream>

using namespace std;

class node {
    int data;
    node *next;
    
    public:
        node ();
        node(int val);
        int getData();
        node *getNext();
        void setData(int val);
        void setNext(node *pnt);
};