#include <stdio.h>
void towers(int n, char from, char to, char aux);
int moves = 0;
int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    towers(n, 'A', 'C', 'B');
    printf("\nTotal number of moves: %d\n", moves);
    return 0;
}
void towers(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        moves++;
        return;
    }
    towers(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    moves++;
    towers(n - 1, aux, to, from);
}