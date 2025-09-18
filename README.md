# HW0 Simple Data Structure

Simple program implementing a stack of integers using an array size of 100. The Stack class supports push and pop operations, including error handling for stack overflow and underflow. The program pushes and pops values to the stack, printing the results to the console.

## Compilation and Execution

To compile the program (using g++), run:

```
g++ main.cpp -o main
```

To execute the program after compiling, run:

```
./main
```

## Expected output:

```
Pushed: 43
Pushed: 6543
Pushed: 2134
Popped: 2134
Popped: 6543
Popped: 43
Pushed: 123
Popped: 123
```
## Libraries used:

- `<iostream>`: For printing to console.
- `<stdexcept>`: For overflow/underflow exception handling.
