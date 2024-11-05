#include "sstack.h"

int main(void)
{
    char exp[MAX];

    // getting the expression from the user
    printf("Enter an expression: ");
    fgets(exp, MAX, stdin);

    // evaluating the expression
    if (isBalanced(exp))
        printf("Congalutations. the expression is correct!\n");
    else
        printf("The expression is wrong!\n");

    return (0);
}