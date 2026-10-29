# push_swap

A project from the 42 curriculum. The goal of this project is to sort data on a stack, with a limited set of instructions, using the lowest possible number of actions. To succeed, you have to manipulate various types of algorithms and choose the most appropriate solution for an optimized data sorting.

## About the implementation

Based on the core logic, this implementation features:
* Input parsing and error handling (checking for non-numbers, duplicates, and already sorted arrays).
* An index simplification process to handle negative numbers and large value gaps efficiently.
* A Radix Sort algorithm implementation for larger stacks, ensuring predictable and efficient performance.
* Specific sorting logic for small stacks to minimize the operation count.

## Compilation and Usage

### 1. Compilation

To compile the project, run the `make` command in the root directory of the repository. This will generate the `push_swap` executable.

```text
make
```

### 2. Usage

Run the program with a list of integers passed as arguments.

```text
./push_swap 2 1 3 6 5 8
```

If the arguments are valid, the program will output the list of instructions (such as `sa`, `pb`, `ra`, etc.) required to sort the stack. If there is an error (e.g., duplicates, non-integer inputs), it will output `Error` to the standard error.

## Structure

* `main.c` - Contains the main entry point, argument parsing, error checking, and routing to the appropriate sorting algorithms based on the stack size.
* Additional files typically include stack manipulation instructions (push, swap, rotate, reverse rotate) and utility functions.

## Author

* **joschmun** - *42 Student*