#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main() {
    clsDblLinkedList<int> myList;

    // Insert at beginning
    myList.InsertAtBeginning(10);
    myList.InsertAtBeginning(20);
    myList.InsertAtBeginning(30);

    cout << "List after inserting at beginning: ";
    myList.PrintList();

    // Insert at end
    myList.InsertAtEnd(40);
    myList.InsertAtEnd(50);

    cout << "List after inserting at end: ";
    myList.PrintList();

    // Insert after a node
    clsDblLinkedList<int>::Node* node = myList.Find(20);
    if (node)
        myList.InsertAfter(node, 25);

    cout << "List after inserting 25 after 20: ";
    myList.PrintList();

    // Delete a node
    node = myList.Find(30);
    if (node)
        myList.DeleteNode(node);

    cout << "List after deleting node 30: ";
    myList.PrintList();

    // Reverse the list
    myList.Reverse();
    cout << "List after reversing: ";
    myList.PrintList();

    // Get an item
    cout << "Item at index 2: " << myList.GetItem(2) << endl;

    // Update an item
    myList.UpdateItem(1, 99);
    cout << "List after updating index 1 to 99: ";
    myList.PrintList();

    return 0;
}
