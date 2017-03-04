#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


int main() {
    char a[80], q;
    int i, ticket[6], w = 0;
    
    printf("Enter a ticket: ");
    while ((q = getchar()) != '\n') {
        if (isdigit(q) != 0) {
            a[w] = q;
            ++w; 
        } else {
            printf("Error!");
            exit(1);
        }
        
    }
    for (i = 0;i < 6;i++) {
        ticket[i] = (a[i] - 48); // !
    }
    for (i = 0;i < 6;i++) {
        printf("%d", ticket[i]);
    }
    return 0;
}

