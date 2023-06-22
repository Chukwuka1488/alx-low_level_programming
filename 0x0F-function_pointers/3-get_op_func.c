#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform
 *               the operation asked by the user
 * @s: operator passed as argument to the program
 * 
 * Return: pointer to the function that corresponds to the operator
 *         given as a parameter, or NULL if no match found
 */
int (*get_op_func(char *s))(int, int) {
    /* Define an array of op_t structs */
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    /* Find the operator in the ops array */
    while (ops[i].op != NULL && *ops[i].op != *s)
        i++;

    /* Return the matching function */
    return (ops[i].f);
}
