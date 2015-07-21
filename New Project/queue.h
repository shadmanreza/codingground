#include <iostream>
#include "node.h"

using namespace std;

class queue {
    node *root;
    
    public:
        queue();
        void push(int val);
        int pop();
        void display();
        ~queue();
};