#include <iostream>
#include <memory>
#include "SingleLinkedNode.h"
#include "SingleLinkedList.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    SingleLinkedList sll1 = SingleLinkedList(10);
    SingleLinkedList sll2 = sll1;
    cout << "sll1: " << sll1 << " sll2: " << sll2 << endl;
    sll2.reverse();
    cout << "sll1: " << sll1 << " sll2: " << sll2 << endl;
    sll2.clear();
    cout << "sll1: " << sll1 << " sll2: " << sll2 << endl;

    cout << "end of single linked list" << endl;
    return 0;
}
