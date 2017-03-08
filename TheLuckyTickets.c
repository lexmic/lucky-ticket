#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void Sum(int Ticket[6])
{
    int i, Lsum = 0, Rsum = 0, substract;

    for (int i = 0; i < 3; ++i) {
        Lsum = Lsum + Ticket[i];
        Rsum = Rsum + Ticket[i+3];
    }

    if (Lsum == Rsum) {
        printf("Ваш билет оказался счастливым!\n");
    }
}

int Search();
{

}

int main() {
    char a, y;
    int i = 0, ticket[6], ch, w;
    
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

    Sum(ticket);

    switch(y){
        case 'Да':
        {
            Search(ticket);
        }
        case 'Нет':
        {
            printf("Извини, но я всё равно выведу тебе: %d\n", );
            return 0;
        }
    }

    return 0;
}

