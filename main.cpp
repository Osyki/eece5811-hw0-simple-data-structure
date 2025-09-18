#include <iostream>
#include <stdexcept>

class Stack // Simple stack class
{
public:
    Stack() // Constructor
    {
        data = new int[100]; // Allocate memory for 100 integers
        top = -1;            // Initialize top of stack
    };
    ~Stack() // Destructor
    {
        delete[] data; // Free allocated memory
    };

    void push(int value)
    {
        if (top == 99) // Check if at maximum capacity
        {
            // Throw stack overflow
            throw std::overflow_error("Stack is full");
        }
        data[++top] = value; // Increment top and add value
    };

    int pop()
    {
        if (top == -1) // Check if stack is empty
        {
            // Throw stack underflow
            throw std::underflow_error("Stack is empty");
        }
        return data[top--]; // Return top value and decrement top
    };

private:
    int *data; // Pointer to stack data
    int top;   // Index of the top element in the stack
};

int main(int argc, char *argv[])
{
    Stack stack;

    // Catch exceptions if underflow or overflow occurs
    try
    {
        // Push some values onto the stack
        stack.push(43);
        std::cout << "Pushed: 43" << std::endl; // Print confirmation
        stack.push(6543);
        std::cout << "Pushed: 6543" << std::endl;
        stack.push(2134);
        std::cout << "Pushed: 2134" << std::endl;
        std::cout << "Popped: " << stack.pop() << std::endl; // Pop and print values
        std::cout << "Popped: " << stack.pop() << std::endl;
        std::cout << "Popped: " << stack.pop() << std::endl;
        stack.push(123);
        std::cout << "Pushed: 123" << std::endl;
        std::cout << "Popped: " << stack.pop() << std::endl;
    }
    catch (const std::underflow_error &e) // Catch underflow_error exceptions
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    catch (const std::overflow_error &e) // Catch overflow_error exceptions
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}