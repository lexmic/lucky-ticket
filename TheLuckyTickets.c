#include <stdio.h>
#define SUM(x) (x / 100) + ((x / 10) % 10) + (x % 10)

int ErrorCheck(int a)
{
    if (a >= 0 && a <= 999999) {
        return 1;
    }
    
    return 0;
}

int Luck(int f, int s)
{
    if (f == s) {
        return 1;
    }
    
    return 0;
}

int main()
{
    unsigned int ticket;
    int fnum, snum, sumfnum, sumsnum, err, luck;
    
    printf("Enter a ticket:\n");
    scanf("%d", &ticket);
    
    err = ErrorCheck(ticket);
    if (err == 0) {
        printf("Error!\n");
        return 0;
    }
    
    fnum = ticket / 1000;
    snum = ticket % 1000;
    sumfnum = SUM(fnum);
    sumsnum = SUM(snum);
    
    luck = Luck(sumfnum, sumsnum);
    if (luck == 1) {
        printf("Wow!You have a lucky ticket!\n");
    }
    
    return 0;
}