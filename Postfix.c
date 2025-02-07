#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
float eval();
char postfix[20];
int main() {
    float result;
    printf("\nEnter the postfix expression terminated by #: ");
    scanf("%s", postfix);
    result = eval();
    printf("\nResult of postfix evaluation is: %.2f\n", result);
    return 0;
}
float eval() {
    int i = 0, top = -1;
    float S[20], op1, op2;
    char ch;
    while ((ch = postfix[i++]) != '#') {
        if (isdigit(ch)) {
            S[++top] = ch - '0';
        } else {
            op1 = S[top--];
            op2 = S[top--];
            switch (ch) {
                case '+': S[++top] = op2 + op1; break;
                case '-': S[++top] = op2 - op1; break;
                case '*': S[++top] = op2 * op1; break;
                case '/': S[++top] = op2 / op1; break;
                case '^': S[++top] = pow(op2, op1); break;
                default:
                    printf("\nInvalid operator: %c\n", ch);
                    exit(1);
            }
        }
    }
    return S[top];
}