//ist and describe 5 attributes demonstrated by the code that you would consider poor. 
/*
1. insertion of data would be O(1) if a linked list were used compared to the insertion of an array O(n)
2. 
3. 
4. 
5. 

//group 2 James Brittain and Josh Farr






*/
#include"testQueue.h"
int main()
{
    // call your test functions here!
    testSize();//flase
    cout << "____________________________________" << endl << endl;
    testIsEmpty();//false
    cout << "____________________________________" << endl << endl;
    testIsFull();
    cout << "____________________________________" << endl << endl;
    testDequeueNotEmpty();
    cout << "____________________________________" << endl << endl;
    testDequeueEmpty();
    cout << "____________________________________" << endl << endl;
    testEnqueueEmpty();
    cout << "____________________________________" << endl << endl;
    testEnqueueFull();
    cout << "____________________________________" << endl << endl;
    testPeekEmpty();
    cout << "____________________________________" << endl << endl;
    testPeekNotEmpty();
    cout << "____________________________________" << endl << endl;
    return 0;
}