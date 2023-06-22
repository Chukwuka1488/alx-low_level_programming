#include "function_pointers.h"
#include "3-op_functions.c"

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
    op_t op[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    /* Find the operator in the ops array */
    while (op[i].op != NULL && *op[i].op != *s)
        i++;

    /* Return the matching function */
    return (op[i].f);
}
