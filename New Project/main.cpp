#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
   queue qu;
   
   qu.push(10);
   qu.push(50);
   qu.push(20);
   qu.push(90);
   qu.push(50);
   qu.push(30);
   
   qu.display();
   
   cout << "First pop :" << qu.pop() << endl;
   qu.display();
   cout << "Second pop :" << qu.pop() << endl;
   qu.display();
   
   return 0;
}

