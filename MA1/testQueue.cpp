#include"testQueue.h"
#include"queue.h"


/*
Test ID : queue size check - QSC
Unit : queue::size()
Description : test to determine if queue::size() returns 1 if a queue object has 1 elements
Test steps :
1.Construct an empty queue object
2.insert 1 elemnt into que
2.Invoke queue::size()
3.Conditionally evaluate the valued returned by queue::size()
Test data : size = 10
Precondition : queue object has one elemnt
Postcondition : queue object still has one element
Expected result : queue has 1 element;1 is returned
Actual result : queue has 2 elemnts; 2 isreturnedStatus: FAILED
*/
void testSize()
{
    cout << "testing size() with que of 1;" << endl;
    cout << "Expected result : queue has 1 element;1 is returned" << endl;
    queue q(10);
    q.enqueue(1);
    q.size();
    if (q.size() == 1)
    {
        cout << "size() is working properly, status returned:" << q.size() << endl;
    }
    else
    {
        cout << "size() is NOT working properly, status returned:" << q.size() << endl;
    }
}

/*
Test ID : Empty queue check - EQC
Unit : queue::isEmpty()
Description : test to determine if queue::isEmpty() returns 1 if a queue object is empty
Test steps :
1.Construct an empty queue object
2.Invoke queue::isEmpty()
3.Conditionally evaluate the valued returned by queue::isEmpty()
Test data : size = 0
Precondition : queue object is empty
Postcondition : queue object is still empty
Expected result : queue is empty;1 is returned
Actual result : queue is empty; 0 isreturnedStatus: FAILED
*/
void testIsEmpty()
{
    cout << "testing IsEmpty with empty que;" << endl;
    cout << "Expected result : queue is empty;0 is returned" << endl;
    queue q(10);

    if (q.isEmpty())
    {
        cout << "IsEmpty working properly result:" << q.isEmpty() << endl;
    }
    else
    {
        cout << "IsEmpty NOT working properly result:" << q.isEmpty() << endl;
    }
}

/*
Test ID : Full queue check - FQE
Unit : queue::IsFull()
Description : test to determine if queue::IsFull() returns 1 if a queue object is full
Test steps :
1.Construct a full queue object
2.Invoke queue::IsFull()
3.Conditionally evaluate the valued returned by queue::IsFull()
Test data : size = 0
Precondition : queue object is full
Postcondition : queue object is still full
Expected result : queue is full;1 is returned
Actual result : queue is full; 1 is returnedStatus: FAILED
*/
void testIsFull()
{
    cout << "testing IsFull with full que of 10/10;" << endl;
    cout << "Expected result : queue is full;1 is returned" << endl;
    //0 is false
    //1 is true
    queue q(10);
    bool status;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.enqueue(10);
    status = q.isFull();
    if (q.isFull())
    {
        cout << "IsFull working properly result:" << status << endl;
    }
    else
    {
        cout << "IsFull NOT working properly result:" << status << endl;
    }

}

/*
Test ID : Dequeue Element Removal - DER
Unit : queue::Dequeue()
Description : test to determine if queue::Dequeue() removes and element from the que
Test steps :
1.Construct a que of 1 element
2.Invoke queue::Dequeue()
3.Conditionally evaluate the value returned by queue::IsEmpty()
Test data : size = 0
Precondition : queue object has one element
Postcondition : queue is empty
Expected result : queue is empty;1 is returned
Actual result : queue is not empty; 0 is returnedStatus: FAILED
*/
void testDequeueNotEmpty()
{
    cout << "testing Dequeue element removal with que of 1;" << endl;
    cout << "Expected result : queue is empty;1 is returned / 1 elemnt is removed" << endl;
    queue q(5);
    q.enqueue(1);
    q.dequeue();
    cout << q.isEmpty() << endl;
    if (q.isEmpty())
    {
        cout << "deque working properly IsEmpty() result: 1" << endl;
    }
    else
    {
        cout << "deque NOT working properly IsEmpty() result: 0" << endl;
    }
}

/*
Test ID : Dequeue from empty - DFE
Unit : queue::Dequeue()
Description : test to determine if queue::Dequeue() crashes with empty
Test steps :
1.Construct a que of 0 element
2.Invoke queue::Dequeue()
3.Conditionally evaluate the value returned by queue::Dequeue()
Test data : size = 0
Precondition : queue object has no element
Postcondition : queue object has no element
Expected result : queue is empty; dequeue returns with error
Actual result : queue is not empty; 0 is returnedStatus: FAILED
*/
void testDequeueEmpty()
{
    cout << "testing Dequeue with empty que;" << endl;
    cout << "Expected result : underflow, program terminated" << endl;
    queue q(5);
    cout << "dequeue starting..." << endl;
    q.dequeue();
}

/*
Test ID : enqueue element adding - EEA
Unit : queue::enqueue(int item)
Description : test to determine if queue::enqueue(int item) adds and element to the back of que
Test steps :
1.Construct a empty que
2.Invoke queue::enqueue(int item)
3.Conditionally evaluate the value returned by queue::IsEmpty()
Test data : size = 0
Precondition : queue is empty
Postcondition : queue has one elemnt
Expected result : queue is empty;1 is returned
Actual result : queue is not empty; 0 is returnedStatus: FAILED
*/
void testEnqueueEmpty()
{
    cout << "testing enqueue element adding with que of 0;" << endl;
    cout << "Expected result : queue is not empty;1 is returned / 1 elemnt is added" << endl;
    queue q(10);
    q.enqueue(1);
    if (q.isEmpty())
    {
        cout << "enqueue NOT working properly IsEmpty() result: 1" << endl;
    }
    else
    {
        cout << "enqueue working properly IsEmpty() result: 0" << endl;
    }
}

/*
Test ID : enqueue element FULL - EEF
Unit : queue::enqueue(int item)
Description : test to determine if queue::enqueue(int item) adds and element to a full que
Test steps :
1.Construct a full que
2.Invoke queue::enqueue(int item)
3.Conditionally evaluate the value returned by queue::enqueue
Test data : size = 0
Precondition : queue is full
Postcondition : queue is full
Expected result : queue is full;1 is returned
Actual result : queue is not empty; 0 is returnedStatus: FAILED
*/
void testEnqueueFull()
{
    cout << "testing enqueue adding with full que of 5;" << endl;
    cout << "Expected result : overflow, program terminated" << endl;
    queue q(5);
    q.enqueue(0);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(2);
    q.enqueue(2);
    q.enqueue(2);

}

/*
Test ID : Peek Empty - PE
Unit : queue::peek()
Description : test to determine if queue::peek() crashes with empty que
Test steps :
1.Construct a empty que
2.Invoke queue::peek()
3.Conditionally evaluate the value returned by queue::peek()
Test data : size = 0
Precondition : queue is empty
Postcondition : queue is empty
Expected result : peek() to return with error
Actual result : queue is not empty; 0 is returnedStatus: FAILED
*/
void testPeekEmpty()
{
    cout << "testing peek() with empty que;" << endl;
    cout << "Expected result : underflow, program terminated" << endl;
    queue q(10);
    cout << "testing peek() now..." << endl;
    q.peek();
}

/*
Test ID : peek NOT Empty - PNE
Unit : queue::peek()
Description : test to determine if queue::peek() reads the rear element
Test steps :
1.Construct a Full que
2.Invoke queue::peek()
3.Conditionally evaluate the value returned by queue::peek()
Test data : size = 0
Precondition : queue is full
Postcondition : queue is full
Expected result : first element
Actual result : size(): FAILED
*/
void testPeekNotEmpty()
{
    cout << "testing peek() with full que;" << endl;
    cout << "Expected result : read first elemnt in (first in first out)" << endl;
    queue q(10);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.enqueue(10);

    if (q.peek() == 1)
    {
        cout << "peek() working properly result: 1" << endl;
    }
    else
    {
        cout << "peek() NOT working properly result: " << q.peek() << endl;
    }

}


