#include <stdio.h>
#define MAX 3
int S[MAX];
int TOP;
void Push(int);
int Pop();
int Peep();
void Display();
int main() {
    int ch, data;
    TOP = -1;
    while (1) {
        printf("\nStack Implementation using Array\n");
        printf("1: Push\n");
        printf("2: Pop\n");
        printf("3: Peep\n");
        printf("4: Display\n");
        printf("5: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                if (TOP == MAX - 1)
                    printf("Stack Overflow\n");
                else {
                    printf("Enter the data to be inserted: ");
                    scanf("%d", &data);
                    Push(data);
                }
                break;
            case 2:
                if (TOP == -1)
                    printf("Stack Underflow\n");
                else
                    printf("Popped element is: %d\n", Pop());
                break;
            case 3:
                if (TOP == -1)
                    printf("Stack Underflow\n");
                else
                    printf("Peeped element is: %d\n", Peep());
                break;
            case 4:
                Display();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
void Push(int data) {
    S[++TOP] = data;
    printf("Data pushed to stack successfully.\n");
}
int Pop() {
    return S[TOP--];
}
int Peep() {
    return S[TOP];
}
void Display() {
    int i;
    if (TOP == -1)
        printf("Stack is empty\n");
    else {
        printf("Stack contents are:\n");
        for (i = TOP; i >= 0; i--)
            printf("%d\n", S[i]);
    }
}