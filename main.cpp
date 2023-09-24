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
    Queue<int> integerQueue; // create a queue object for integers
    Queue<string> stringQueue; // create a queue object for strings
    Queue<Song> songQueue; // create a queue object for type Song
    Stack<Song> songStack; // create a stack object for type Song


    // Create a vector to store the Song objects
    vector<Song> songs;

    // Read data from the CSV into the vector
    getDataFromFile(songs);


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

    // make a loop to print and enqueue the first ten songs from project 1 vector (onto the queue)
    int j = 0;
    for (j = 0; j <= 10 && j < songs.size(); j++){
        cout << "--- ENQUEUED SONG ---\n" << songs[j] << endl;
        songQueue.enqueue(songs[j]);
    }

    // dequeue from the queue and push onto the stack
    int songQueueSize = 10;
    while (songQueueSize != 0){
        Song song = songQueue.dequeue();
        songStack.push(song);
        songQueueSize--;
    }

    // loop to pop and print 10 objects
    int k = 0;
    while (k < 10){
        Song popped = songStack.pop();
        cout << "--- POPPED SONG ---\n" << popped << endl;
        k++;
    }
    // print stack afterwords to show it's empty
    songStack.print();

    return 0;
}
