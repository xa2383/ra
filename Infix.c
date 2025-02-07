#include <stdio.h>
#include <ctype.h>
#define MAX 30
void convert();
int priority(char);
char infix[MAX], postfix[MAX];
int main() {
    printf("\nEnter the infix expression terminated by #: ");
    scanf("%s", infix);
    convert();
    printf("\nInfix Expression: %s", infix);
    printf("\nPostfix Expression: %s\n", postfix);
    return 0;
}
void convert() {
    char stack[MAX];
    int top = -1, i = 0, j = 0;
    char ch;
    stack[++top] = '#';
    while ((ch = infix[i++]) != '#') {
        if (isalnum(ch)) {
            postfix[j++] = ch;
        }
        else if (ch == '(') {
            stack[++top] = ch;
        }
        else if (ch == ')') {
            while (stack[top] != '(') {
                postfix[j++] = stack[top--];
            }
            top--;
        }
        else {
            while (priority(stack[top]) >= priority(ch)) {
                postfix[j++] = stack[top--];
            }
            stack[++top] = ch;
        }
    }
    while (stack[top] != '#') {
        postfix[j++] = stack[top--];
    }
    postfix[j] = '\0';
}
int priority(char ch) {
    switch (ch) {
        case '#': return 0;
        case '(': return 1;
        case '+':
        case '-': return 2;
        case '*':
        case '/': return 3;
        default: return -1;
    }
}