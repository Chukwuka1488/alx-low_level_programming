### Bit Manipulation
##### Question #0

What is 0x89 in base2?

    0b01101001

    0b10001000

    0b10001001

    0b10101001
To convert the hexadecimal number 0x89 to binary, you can follow these steps:

    Write down the binary representation of each hexadecimal digit. In this case, the digit '8' corresponds to 0b1000, and the digit '9' corresponds to 0b1001.

    Concatenate the binary representations of each digit to get the final binary representation.

    0x89 = 0b1000 + 0b1001 = 0b10001001

Therefore, the binary representation of 0x89 is 0b10001001.

##### Question #0
What is 0b001010010 in base10?

    83

    84

    82

    81
To convert the binary number 0b001010010 to decimal, you can follow these steps:

    Start from the rightmost bit (the least significant bit) and assign powers of 2 to each bit from right to left. The rightmost bit is in the 0th position, the next bit is in the 1st position, and so on.

    Multiply each bit by its corresponding power of 2 and sum up the results.

    0b001010010 = (0 * 2^0) + (1 * 2^1) + (0 * 2^2) + (0 * 2^3) + (1 * 2^4) + (0 * 2^5) + (1 * 2^6) + (0 * 2^7) + (0 * 2^8)
    = 0 + 2 + 0 + 0 + 16 + 0 + 64 + 0 + 0
    = 82

Therefore, the binary number 0b001010010 is equivalent to the decimal value 82.

##### Question #2

0x01 | 0x00 = ?

    0x02

    0x01

    0x00
The expression 0x01 | 0x00 represents a bitwise OR operation between the hexadecimal values 0x01 and 0x00.

To perform the bitwise OR operation, we compare each bit of the binary representations of the two numbers. If at least one of the corresponding bits is 1, the result bit will be set to 1; otherwise, it will be 0.

Let's break it down:

0x01 = 0b00000001
0x00 = 0b00000000

Performing the bitwise OR operation:

```
    00000001
  | 00000000
    ---------
    00000001
```
The result is 0b00000001, which corresponds to the hexadecimal value 0x01.

Therefore, the correct answer is 0x01.
