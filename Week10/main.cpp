#include <iostream>
#include "doubly-linked.h"

using namespace std;

int main(void){
    
    List l;
    //int n;
    int n1 = 2;
    int n2 = 3;
    int n3 = 1;
    l.insert(n1);
    l.insert(n2);
    l.insert(n3);
    
    // Print list as read from cin
    l.print();
    
    return 0;
    
}
