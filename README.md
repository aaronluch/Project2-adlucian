# CS2240 Project 2 - Aaron Luciano
**Stack and Queue**<br />
*9/24/2023*

* **Information about your data set**<br />
  * The data was all accumulated from my own personal playlists on spotify. They were not all one large playlist, 
but rather I had to convert the multiple CSV files into one general CSV file called "merged-playlists.csv" 
through the use of windows' built in terminal. To acquire all the CSV files, I used https://exportify.net, 
more information on the website.<br />
<br />

* **Time Complexities of Stack Class**<br />
  * Constructor
    * O(1), constant time
  * Destructor
    * O(n), linear time
  * Push method 
    * O(1), constant time
  * Pop method
    * O(1), constant time
  * Search method 
    * O(n), linear time
  * Print method
    * O(n), linear time<br>
<br />

* **Time Complexities of Queue Class**<br />
  * Constructor
    * O(1), constant time
  * Destructor
    * O(n), linear time
  * Enqueue method
    * O(1), constant time
  * Dequeue method
    * O(1), constant time
  * Search method
    * O(n), linear time
  * Print method
    * O(n), linear time<br>
<br />

* **Use of Pointers in Queue Class**<br />
  * The use of pointers in this class are essential to allow the Enqueue and Dequeue methods 
  to function properly, allowing the Queue to properly add items and point the correct location.
    * Enqueue: To add a new item to the back of the queue, the enqueue method creates a new **"Node"**
    object in heap memory and store the item. If the queue is not empty by verifying through the
    **"back"** and **"nullptr"**, the **"next"** pointer of the current **"back"** pointer is updated and points
    to the newly created **"Node"**, making it the new back of the queue. 
    If the front is also empty, the **"front"** pointer needs to also be updated to the **"Node"**.
    This results in a constant time operation O(1).
      * This ensures that the use of pointers properly enqueue and item and do so with an efficient time complexity.
    * Dequeue: To remove an item from the queue, the dequeue method simply 
    checks if there's an object in the front, creates a copy of the front value to be returned,
    then updates the **"front"** pointer to point to the item "behind" itself, (next node in the queue),
    and deletes the front-most node from memory.
      * All of these operations are of time complexity O(1) constant time because they involve
      direct pointer manipulation.

* **When and why the 10 objects in the main function changed their order**<br />
  * The order of the objects change because the **"Queue"** follows a First-In-First-Out order,
  where the first item that was enqueued will be the first item that's dequeued. 
  **"Stack"** follows a Last-In-First-Out, where the last item pushed onto the stack
  will be the first to be popped (get removed).<br />
    * Step-by-Step
      1. The Queue initializes and contains ten items in some order (eg. 1,2,3,...,10)
      2. The dequeue and push process starts. The first item dequeued from the Queue, (1), is
      then pushed onto the Stack. Now Queue has (2,3,4,...,10) and the Stack contains (1).
      3. The next item is dequeued (2) and pushed onto the stack, resulting in the Queue being
      (3,4,5,...,10) and the Stack being (2,1) and so on.
      4. This continues until all ten items are dequeued from Queue and pushed onto the Stack, which
      now has all the items from the Queue but in reverse (10,9,8,...,1).
<br />

* **Additional Sources**<br />
  * Copy assignment operator used to assign the values of one object to another of the same type: 
  https://www.geeksforgeeks.org/copy-constructor-vs-assignment-operator-in-c/#
  * Overload operation documentation: https://en.cppreference.com/w/cpp/language/operators
