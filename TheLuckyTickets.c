#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int Sum(int Ticket[6], int Lsum, int Rsum)
{
    Lsum = 0, Rsum = 0;

    for (int i = 0; i < 3; ++i) {
        Lsum = Lsum + Ticket[i];
        Rsum = Rsum + Ticket[i+3];
    }

    if (Lsum == Rsum) {
        printf("Ваш билет оказался счастливым!\n");
    }else{
        printf("Увы, но ваш билет оказался не счастливым :с\n");
    }

    return Ticket;
}

int Search(int Lsum, int Rsum);
{
    
}

int main() {
    char a, y;
    int i = 0, ticket[6], ch, w, lsum = 0, rsum = 0;
    
    printf("Enter a ticket: ");
    while ((a = getchar()) != '\n') {
        if (isdigit(a) != 0) {
            ch = a;
            ticket[i] = (ch - 48);
            i++;
        } else {
            printf("Error!\n");
            exit(1);
        }
    }
    /*for (i = 0;i < 6;i++) {
        printf("%d", ticket[i]);
    }
    printf("\n");*/

    w = Sum(ticket, lsum, rsum);

    printf("Не хотите ли узнать через сколько ваш билет оказался счастливым?\n");
    printf("1. Да\n");
    printf("2. Нет\n");
    while((y = getchar()) != '\n') {
        switch(y){
            case '1':  
                printf("Красава!\n");
                //Search(ticket);
                break;
            case '2':
                printf("Извини, но я всё равно выведу тебе:\n");
                break;
        }
    }
    return 0;
}

