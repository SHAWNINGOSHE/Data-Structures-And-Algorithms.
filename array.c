/*Author:Shawn Douglas
Reg No:BSE-05-0199/2024
Group:Group 3
*/

#include <stdio.h>

int main() {
    int LA[3] = {0}, i;

    printf("Array Before Insertion:\n");
    for(i = 0; i < 3; i++) {
        printf("LA[%d] = %d\n", i, LA[i]);
    }

    printf("Inserting Elements...\n");
    for(i = 0; i < 3; i++) {
        LA[i] = i + 2;
    }

    printf("The array elements after insertion:\n");
    for(i = 0; i < 3; i++) {
        printf("LA[%d] = %d\n", i, LA[i]);
    }

    return 0;
}
