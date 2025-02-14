# C++ Module 01 - Memory Allocation and More

This repository contains my solutions for the C++ Module 01 exercises, focusing on memory allocation, pointers to members, references, and the switch statement.

## Exercise 00: BraiiiiiiinnnzzzZ

*   **Implementation:**
    *   Created a `Zombie` class with a private `name` attribute and the `announce()` member function.
    *   Implemented `newZombie()` to allocate zombies on the heap.
    *   Implemented `randomChump()` to create temporary zombies on the stack.
    *   Added a destructor to `Zombie` for debugging purposes.

## Exercise 01: Moar brainz!

*   **Implementation:**
    *   Implemented `zombieHorde()` to allocate an array of `Zombie` objects on the heap.
    *   Initialized each zombie with the provided name.
    *   Included tests to demonstrate the functionality and ensure proper memory cleanup.

## Exercise 02: HI THIS IS BRAIN

*   **Implementation:**
    *   Demonstrated the concepts of pointers and references using a string variable.
    *   Printed memory addresses and values to illustrate the relationships.

## Exercise 03: Unnecessary violence

*   **Implementation:**
    *   Created a `Weapon` class with `type` attribute, and `getType()` and `setType()` member functions.
    *   Implemented `HumanA` and `HumanB` classes, showcasing different ways to associate a `Weapon`.
    *   `HumanA` takes a `Weapon` in its constructor, always having a weapon. [cite: 68]
    *   `HumanB` may or may not have a `Weapon`. [cite: 69]
    *   Explored the use of pointers and references for `Weapon` association.

## Exercise 04: Sed is for losers

*   **Implementation:**
    *   Developed a program to replace occurrences of a string in a file with another string.
    *   Utilized `std::string` member functions (excluding `replace`) for string manipulation.
    *   Included error handling and tests.

## Exercise 05: Harl 2.0

*   **Implementation:**
    *   Created a `Harl` class with member functions for different complaint levels (`debug()`, `info()`, `warning()`, `error()`).
    *   Used pointers to member functions to call the appropriate complaint function based on the provided level.
    *   Added tests to demonstrate Harl's complaining behavior.

## Exercise 06: Harl filter

*   **Implementation:**
    *   Implemented a filtering mechanism to display Harl's complaints based on a specified log level.
    *   Utilized the `switch` statement for level selection.
    *   Included tests to verify the filtering functionality.

## Additional Notes

*   This module helped solidify my understanding of memory allocation, pointers, references, and the `switch` statement in C++.
*   I focused on writing clean and readable code, with appropriate comments.
*   The exercises provided valuable insights into object-oriented programming concepts.

