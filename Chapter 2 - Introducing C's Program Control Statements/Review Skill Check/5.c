// proverb printer

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of proverbs to display (1-10): ");
    scanf("%d", &n);
    if (n >= 1)
        printf("1. A journey of a thousand miles begins with a single step.\n");
    if (n >= 2)
        printf("2. Actions speak louder than words.\n");
    if (n >= 3)
        printf("3. Better late than never.\n");
    if (n >= 4)
        printf("4. Don't count your chickens before they hatch.\n");
    if (n >= 5)
        printf("5. Honesty is the best policy.\n");
    if (n >= 6)
        printf("6. Practice makes perfect.\n");
    if (n >= 7)
        printf("7. The early bird catches the worm.\n");
    if (n >= 8)
        printf("8. Time and tide wait for no one.\n");
    if (n >= 9)
        printf("9. Where there's a will, there's a way.\n");
    if (n >= 10)
        printf("10. You reap what you sow.\n");
    return 0;
}
