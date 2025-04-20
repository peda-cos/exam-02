# 42 School Exam Rank 02 - Exercise Collection

This repository contains a comprehensive collection of **C programming exercises** from the 42 School's Exam Rank 02. These exercises test fundamental to advanced programming concepts through gradually increasing difficulty levels.

## Repository Organization

The exercises are structured in four progressive difficulty tiers:

```
.
├── Level_01/  # Basic string and character manipulation
├── Level_02/  # Intermediate functions and bit operations
├── Level_03/  # Advanced string processing and mathematics
└── Level_04/  # Complex algorithms and data structures
```

## Exercise Breakdown

### Level 01: Fundamentals
Tests **basic string manipulation** and **elementary I/O operations**:

* `first_word.c`: Implements **whitespace parsing** to extract and display the first word from an input string, requiring proper handling of delimiter characters.
* `fizzbuzz.c`: Employs **conditional logic** to output numbers from 1 to 100 with substitutions for multiples of 3 and 5, demonstrating modular arithmetic.
* `ft_putstr.c`: Implements **sequential character output** using system calls, demonstrating string traversal with null termination detection.
* `ft_strcpy.c`: Creates a **buffer copy function** that replicates source string content to a destination array with proper null termination.
* `ft_strlen.c`: Calculates string length through **linear traversal** until null terminator detection, demonstrating basic loop control.
* `ft_swap.c`: Exchanges integer values using **pointer dereferencing** and a temporary variable, demonstrating memory address manipulation.
* `repeat_alpha.c`: Implements **character repetition** based on alphabetical position, requiring character-to-integer conversion and loop control.
* `rev_print.c`: Outputs characters in **reverse order** by calculating string length first and implementing backward traversal.
* `rot_13.c`: Implements a **substitution cipher** by shifting alphabetical characters 13 positions while preserving case and non-alphabetic characters.
* `rotone.c`: Shifts each letter in a string by **one position** in the alphabet with proper handling of wraparound from 'z' to 'a'.
* `search_and_replace.c`: Performs **character substitution** within a string, requiring validation of single-character arguments.
* `ulstr.c`: Implements **case inversion** by transforming each lowercase letter to uppercase and vice versa through ASCII manipulation.

### Level 02: Intermediate Concepts
Focuses on **memory management**, **bit manipulation**, and **string comparison**:

* `alpha_mirror.c`: Creates an **alphabetical reflection** by replacing each letter with its counterpart from the opposite end of the alphabet.
* `camel_to_snake.c`: Converts **identifier naming conventions** by transforming camelCase to snake_case through uppercase detection and character insertion.
* `do_op.c`: Processes **command-line arithmetic** by parsing two integers and an operator to perform basic mathematical operations.
* `ft_atoi.c`: Converts **string representations** to integers with proper handling of whitespace, signs, and numerical characters.
* `ft_strcmp.c`: Implements **lexicographical comparison** between strings using unsigned character comparison for correct sorting behavior.
* `ft_strcspn.c`: Measures the **initial segment length** of a string excluding characters from a specified set, demonstrating character set operations.
* `ft_strdup.c`: Creates a **dynamic string copy** using memory allocation, requiring proper size calculation and error handling.
* `inter.c`: Implements **string intersection** by identifying and displaying characters present in both input strings without duplicates.
* `is_power_of_2.c`: Uses **bitwise operations** to efficiently determine if an integer is a power of two, leveraging binary representation properties.
* `last_word.c`: Extracts the **final word** from a string through backward traversal and delimiter detection.
* `max.c`: Identifies the **maximum value** in an integer array through sequential comparison tracking.
* `print_bits.c`: Displays the **binary representation** of a byte through bitwise shifting and masking operations.
* `reverse_bits.c`: Implements **bit order inversion** within a byte using bitwise operations and position tracking.
* `swap_bits.c`: Exchanges the **upper and lower nibbles** of a byte using right and left shift operations.
* `union.c`: Performs **string union** by displaying all unique characters from both input strings without duplicates.
* `wdmatch.c`: Determines if characters from a second string can form the first string in sequence, implementing **subsequence verification**.

### Level 03: Advanced Operations
Challenges with **complex string formatting**, **mathematical algorithms**, and **advanced parsing**:

* `add_prime_sum.c`: Computes the **sum of prime numbers** up to the input value, requiring efficient primality testing.
* `epur_str.c`: Normalizes **whitespace distribution** by ensuring exactly one space between words with no leading or trailing spaces.
* `expand_str.c`: Similar to epur_str but replaces single spaces with **triple spaces** between words, testing string formatting precision.
* `ft_atoi_base.c`: Extends atoi functionality to **arbitrary numeric bases** between 2 and 16, requiring digit validation and positional value calculation.
* `ft_list_size.c`: Counts elements in a **linked list** through node traversal, demonstrating structural iteration.
* `ft_range.c`: Creates a **dynamically allocated array** containing all integers within a specified range, handling direction and memory allocation.
* `ft_rrange.c`: Similar to ft_range but generates the sequence in **reverse order**, testing control flow adaptation.
* `hidenp.c`: Determines if the first string exists as a **subsequence** within the second string, implementing efficient pattern matching.
* `lcm.c`: Calculates the **least common multiple** of two integers using the GCD relationship, demonstrating number theory application.
* `paramsum.c`: Counts and displays the **number of arguments** passed to the program, testing argument vector handling.
* `pgcd.c`: Implements the **Euclidean algorithm** to find the greatest common divisor of two positive integers.
* `print_hex.c`: Converts and displays integers in **hexadecimal notation** without using standard library functions.
* `rstr_capitalizer.c`: Applies **context-sensitive case conversion** by capitalizing the last letter of each word.
* `str_capitalizer.c`: Implements **title case conversion** by capitalizing the first letter of each word while lowercasing others.
* `tab_mult.c`: Generates and displays a **multiplication table** for a given integer input, formatting output as equations.

### Level 04: Complex Problem Solving
Tests **algorithmic thinking** with **recursive solutions** and **advanced data structures**:

* `flood_fill.c`: Implements a **recursive region-filling algorithm** for connected components in a two-dimensional grid, testing boundary checking and propagation logic.
* `fprime.c`: Performs **prime factorization** of integers by finding all prime divisors, requiring efficient divisibility testing.
* `ft_itoa.c`: Converts integers to **string representation** with proper sign handling and dynamic memory allocation.
* `ft_list_foreach.c`: Applies a **function pointer** to each element in a linked list, demonstrating callback mechanism implementation.
* `ft_list_remove_if.c`: Selectively **removes nodes** from a linked list based on comparison results, requiring careful pointer manipulation and memory management.
* `ft_split.c`: Implements **string tokenization** by separating input based on whitespace delimiters and creating a dynamically allocated array of substrings.
* `rev_wstr.c`: Reverses the **word order** in a string while maintaining character order within words, requiring memory allocation and complex string manipulation.
* `rostring.c`: Implements **word rotation** by moving the first word to the end of the string, requiring careful delimiter handling.
* `sort_int_tab.c`: Implements a **bubble sort algorithm** to arrange integers in ascending order, demonstrating sorting efficiency and swap operations.
* `sort_list.c`: Sorts linked list elements using a **comparison function pointer**, testing advanced data structure manipulation.

## Exam Context

The Exam Rank 02 evaluates a student's ability to:
* Implement functions with **precise specifications**
* Write **memory-efficient code** without standard library dependencies
* Demonstrate understanding of **pointer manipulation**
* Apply **algorithmic problem-solving** techniques
* Manage **edge cases** and input validation

Each exercise typically presents a function prototype that must be implemented according to specific requirements, testing both correctness and efficiency.

## Technical Specifications

* All solutions are written in **standard C**
* Code adheres to the **42 Norm** coding standards
* Most implementations avoid standard library functions
* Solutions emphasize **algorithmic efficiency** and **memory management**

This repository serves as a comprehensive reference for the types of challenges encountered in the 42 School's Exam Rank 02, providing valuable preparation material for students approaching this examination milestone.
