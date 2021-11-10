// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "t_Node.h"
#include "t_Node.cpp"
#include "t_LinkedList.h"
#include "t_SinglyLinkedList.cpp"

int main()
{
    Node<char> n = {'a'};
    LinkedList<int> linkedList {};

    std::cout << "Size: " << linkedList.size << std::endl;

    linkedList.pushBack(0);
    linkedList.pushBack(1);
    linkedList.pushBack(2);
    linkedList.pushBack(3);
    linkedList.pushBack(4);
    linkedList.pushBack(5);
    linkedList.pushBack(6);
    linkedList.pushBack(7);
    linkedList.pushBack(8);
    linkedList.pushBack(9);
    linkedList.pushBack(10);
    

    linkedList.pushFront(-1);

    auto test{ linkedList.popBack() };
    auto popFrontTest{ linkedList.popFront() };

    std::cout << "Size: " << linkedList.size << std::endl;

    linkedList.insert(0, 100);

    for (int i = 0; i < linkedList.size; ++i) {
        std::cout << "Element at " << i << ": " << linkedList.valueAt(i) << std::endl;
    }

    linkedList.reverse();
    std::cout << "---REVERSE---" << std::endl;

    for (int i = 0; i < linkedList.size; ++i) {
        std::cout << "Element at " << i << ": " << linkedList.valueAt(i) << std::endl;
    }

    std::cout << "---ERASE ELEMENT 0---" << std::endl;

    linkedList.erase(0);

    for (int i = 0; i < linkedList.size; ++i) {
        std::cout << "Element at " << i << ": " << linkedList.valueAt(i) << std::endl;
    }

    std::cout << "---ERASE ELEMENT 5---" << std::endl;

    linkedList.erase(5);

    for (int i = 0; i < linkedList.size; ++i) {
        std::cout << "Element at " << i << ": " << linkedList.valueAt(i) << std::endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
