### C - Recursion
The function _putchar is a function that writes a single character to the console. It takes a character as an argument and returns an integer value.

### Write a function that prints a string, followed by a new line.
The function _puts_recursion is a recursive function that prints a string followed by a new line. The function takes a pointer to a string as an argument and uses recursion to print each character of the string until it reaches the null character ‘\0’ which indicates the end of the string 1.

### Write a function that prints a string in reverse.
The function _print_rev_recursion is a recursive function that prints a string in reverse. The function takes a pointer to a string as an argument and uses recursion to print each character of the string in reverse order until it reaches the null character ‘\0’ which indicates the end of the string.

### Write a function that returns the factorial of a given number.
The function factorial takes an integer n as an argument and returns the factorial of that number. If n is less than 0, the function returns -1. If n is equal to 1 or 0, the function returns 1. Otherwise, the function returns n multiplied by the factorial of n-1, which is calculated recursively by calling the factorial function again with n-1 as an argument.

### Write a function that returns the value of x raised to the power of y.
The function _pow_recursion takes two integers x and y as arguments and returns the result of x^y. If y is less than 0, the function returns -1. If y is equal to 0, the function returns 1. Otherwise, the function returns x multiplied by the result of _pow_recursion(x, y-1), which is calculated recursively by calling the _pow_recursion function again with x and y-1 as arguments.

### Write a function that returns the natural square root of a number.
The function _sqrt_recursion takes an integer n as an argument and returns the natural square root of n. If n is less than 0, the function returns -1. Otherwise, the function calls the helper function _sqrt_helper with arguments n and 0. The _sqrt_helper function takes two integers n and next as arguments. If next * next is equal to n, the function returns next, which is the square root of n. If next * next is greater than n, the function returns -1, indicating that n does not have a natural square root. Otherwise, the function calls itself recursively with arguments n and next+1, incrementing the value of next by 1 in each recursive call until it finds the square root of n or determines that n does not have a natural square root.

### Write a function that returns 1 if the input integer is a prime number, otherwise return 0.
This is a C program that checks if a given number n is a prime number. The function is_prime_number takes an integer n as an argument and returns 1 if n is prime and 0 otherwise. The function calls the helper function is_prime_number_helper with arguments n and 2. The is_prime_number_helper function takes two integers n and i as arguments. If n is less than or equal to 2, the function checks if n is equal to 2 and returns 1 if it is, indicating that n is prime. Otherwise, the function returns 0, indicating that n is not prime. If n is divisible by i, the function returns 0, indicating that n is not prime. If i * i is greater than n, the function returns 1, indicating that n is prime. Otherwise, the function calls itself recursively with arguments n and i+1, incrementing the value of i by 1 in each recursive call until it determines whether or not n is prime.

##### wildcmp
Here's the implementation of the wildcmp function in C using recursion:

The idea is to compare the current character of s1 with the current character of s2. If they match, we continue recursively comparing the next characters. If they don't match and there's no star in s2 to replace the character, the strings don't match. If we encounter a star, we can either skip it and compare s1 with the rest of s2, or we can skip the first character of s1 and compare the rest of s1 with s2. We return true if we reach the end of both strings simultaneously, meaning they match.

##### palindrome recursion

This code is a C program that checks whether a given string is a palindrome or not using recursion. The main function calls the is_palindrome function with different strings to check if they are palindromes.

The is_palindrome function first calculates the length of the string using the _print_str_len function and then calls the _check_palindrome function with the leftmost and rightmost indices of the string. The _check_palindrome function checks if the string is a palindrome recursively by comparing the characters at the leftmost and rightmost indices of the string and then moving towards the center of the string.

If the characters at the leftmost and rightmost indices are the same, the function calls itself again with the indices moved towards the center of the string. If the characters are not the same, the function returns 0 indicating that the string is not a palindrome.

If the _check_palindrome function has successfully compared all the characters of the string, the function returns 1 indicating that the string is a palindrome.

The program then prints the results of the is_palindrome function for different strings.

