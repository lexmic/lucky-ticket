#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


int main() {
    char a;
    int i = 0, ticket[6], ch;
    
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
    for (i = 0;i < 6;i++) {
        printf("%d", ticket[i]);
    }
    printf("\n");
    return 0;
}

