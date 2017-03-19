#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int ticket_checker(int Ticket[6])
{
    int Lsum = 0, Rsum = 0;

    for (int i = 0; i < 3; ++i) {
        Lsum += Ticket[i];
        Rsum += Ticket[i + 3];
    }

    if (Lsum == Rsum) {
        return 1;
    } else {
        return 0;
    }
}

int Search(int ticket[6]) 
{   
    int checkRes = 0;
    int peopleCounter = 0;

    while (checkRes != 1) {
        ticket[5] += 1;
        ++peopleCounter;
        if (ticket[5] == 10) {
            ticket[4] += 1;
            ticket[5] = 0;
        } 
        if (ticket[4] == 10) {
            ticket[3] += 1;
            ticket[4] = 0;
        } 
        if (ticket[3] == 10) {
            ticket[2] += 1;
            ticket[3] = 0;
        }
        if (ticket[2] == 10) {
            ticket[1] += 1;
            ticket[2] = 0;
        } 
        if (ticket[1] == 10) {
            ticket[0] += 1;
            ticket[1] = 0;
        }
        checkRes = ticket_checker(ticket);
    }
    return peopleCounter;
}

int main() 
{
    char a, y;
    int i = 0, ticket[6], ch, checkerRes;
    
    printf("Enter a ticket: ");
    while ((a = getchar()) != '\n') {
        if (isdigit(a) != 0) {
            ch = a;
            ticket[i] = (ch - 48);
            i++;
        } else {
            printf("Error!\n");
        }
    }
    checkerRes = ticket_checker(ticket);
    if (checkerRes == 1) {
        //printf("Ваш билет оказался счастливым!\n");
        printf("Your ticket is lucky!\n");
    } else {
        //printf("Увы, но ваш билет оказался не счастливым :с\n");
        printf("Sorry, but your ticket isn't lucky\n");
    }

    /*printf("Не хотите ли узнать следующий счастливый билет (Y/N)\n");
    printf("Ответ: ");*/
    printf("Would you like to know nearest lucky ticket (Y/N)?\n");
    printf("Answer: ");
    while((y = getchar()) != '\n') {
        switch(y){
            case 'Y':  
                {
                    int finalRes = Search(ticket);
                    printf("Nearest lucky ticket after %d people\n", finalRes);
                }
                    break;
            case 'N':
                printf("Finish work\n");
                break;
        }
    }
    return 0;
}

