/**
 * Aaron Luciano
 * CS2240
 * Section A
 * 9-20-2023
 * Project 2
 */

#include "Song.h"
#include "Queue.h"
#include "Stack.h"
#include "Node.h"

using namespace std;

int main(){
    // creating queue objects to demonstrate methods work correctly
    Queue<int> integerQueue;
    Queue<string> stringQueue;

    // Testing integerQueue object
    integerQueue.enqueue(1); // add item with value 1 to the queue
    integerQueue.enqueue(2); // add item with value 2 to the queue
    integerQueue.enqueue(3); // add item with value 3 to the queue
    integerQueue.dequeue(); // dequeue front value

    // using search function to show it works properly (0 = false, 1 = true)
    int intSearch = 1;
    bool intFound = integerQueue.search(intSearch);
    cout << "Item with value '" << intSearch << "' found: " << intFound << endl;
    intSearch = 2;
    bool intFound2 = integerQueue.search(intSearch);
    cout << "Item with value '" << intSearch << "' found: " << intFound2 << endl;

    integerQueue.print(); // print the values
    cout << endl;

    // Testing stringQueue object
    stringQueue.enqueue("first"); //
    stringQueue.enqueue("aaron"); //
    stringQueue.enqueue("luciano"); //
    stringQueue.dequeue(); // dequeue front value
    stringQueue.dequeue(); // dequeue front value

    // using search function to show it works properly (0 = false, 1 = true)
    string stringSearch = "aaron";
    bool stringFound = stringQueue.search(stringSearch);
    cout << "Item with value '" << stringSearch << "' found: " << stringFound << endl;
    stringSearch = "luciano";
    bool stringFound2 = stringQueue.search(stringSearch);
    cout << "Item with value '" << stringSearch << "' found: " << stringFound2 << endl;

    stringQueue.print(); // print the values

    return 0;
}
