/*

Using switch cases instead of if statements

*/

#include <stdio.h>

int main(void) {
    char operator;
    double lval, rval;

    printf("Enter operator (+, -, * or /): ");
    scanf("%c", &operator);

    printf("Enter first float: ");
    scanf("%lf", &lval);

    printf("Enter second float: ");
    scanf("%lf", &rval);
    
    switch(operator) {
        case '+':
            printf("%.2lf\n", lval + rval);
            break;
        case '-':
            printf("%.2lf\n", lval - rval);
            break;
        case '*':
            printf("%.2lf\n", lval * rval);
            break;
        case '/':
            if (rval == 0.0) {
                printf("Cannot divide by 0.\n");
                break;
            }
            else {
                printf("%.2lf\n", lval / rval);
                break;
            }
        default:
            printf("Operator not accepted.\n");
            break; 
    }

    return 0;
}
