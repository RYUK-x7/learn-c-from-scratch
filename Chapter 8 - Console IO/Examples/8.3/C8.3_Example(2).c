#include <stdio.h>
#include <conio.h>
int main(void)
{
    double amount;
    amount = 0.20;
    cprintf("Printing 5-percent tax table\n\r");
    cprintf("Press a key to stop.\n\n\r");
    do
    {
        cprintf("amount: %f, tax: %f\n\r", amount, amount * 0.05);
        if (kbhit())
            break;
        amount += 0.20;
    } while (amount < 100.00);
    return 0;
}