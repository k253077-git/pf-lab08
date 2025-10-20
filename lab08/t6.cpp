#include <stdio.h>

int main() {
    int a[3][3];
    int i, j, k;
    int minrow, colind;
    int found = 0;

    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++) {
        minrow = a[i][0];
        colind=0;

        for(j = 1; j < 3; j++) {
            if(a[i][j] < minrow) {
                minrow = a[i][j];
                colind = j;
            }
        }

        int isSaddle = 1;
        for(k = 0; k < 3; k++) {
            if(a[k][colind]>minrow) {
                isSaddle = 0;
                break;
            }
        }

        if(isSaddle) {
            printf("\nSaddle point found: %d",minrow);
            found = 1;
        } 
    } printf("no saddle point.");
}

