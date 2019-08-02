#include <iostream>
#include <iomanip>
#include <string>

// Implementing a stack using an array
//  THe initial size of the array
#define st_len 5

using namespace std;

class Stacks
{
public:
    Stacks();      // Constructor
    int isFull();  //To check if the stack is full i.e. maxed out the allocated space or not
    int isEmpty(); // To check if the stack is empty or not
    void st_push(int element);
    void st_pop();
    void show_stack(); //
    struct stacks
    {
        int s[st_len]; // Initalizing the stack
        int top;       // The topmost element of the array.
    } stack;
};

// Initalizes the stack with temp elements of data
Stacks::Stacks()
{
    stack.top = -1; //index of the top stack
    for (int i; i < st_len; i++)
    {
        stack.s[i] = 0;
    }
}

// Function to check isFull property of the stack
int Stacks::isFull()
{
    if (stack.top >= st_len - 1)
    {
        return 1;
    }
    else
        return 0;
}

// Handles the adding elements into the stack from the top
void Stacks::st_push(int element)
{
    stack.top++;
    stack.s[stack.top] = element;
}

//  Handles removal of an the last element ffrom the stack.
void Stacks::st_pop()
{
    stack.top--;
}

//  Checks whether the stack is empty or not.
int Stacks::isEmpty()
{
    if (stack.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// This show the elements of the stack.
void Stacks::show_stack()
{
    if (isEmpty())
    {
        cout << "The stack is empty. \nPlease initalize one to use the properties." << endl;
    }
    else
    {
        for (const int &val : stack.s)
        {
            cout << val << endl;
        }
    }
}

// Driver Function
int main()
{
    Stacks obj;
    obj.show_stack();
    if (obj.isFull())
    {
        cout << "The stack is full." << endl;
    }
    if (obj.isEmpty())
    {
        cout << "The stack is empty." << endl;
    }
    obj.st_push(6);
    obj.st_push(2);
    obj.st_pop();
    obj.st_push(9);
    obj.st_push(4);
    obj.st_push(3);
    obj.show_stack();
    if (obj.isFull())
    {
        cout << "The stack is full." << endl;
    }
    else
    {
        obj.show_stack();
    }
    if (obj.isEmpty())
    {
        cout << "The stack is empty." << endl;
    }
    else
    {
        obj.show_stack();
    }
}
