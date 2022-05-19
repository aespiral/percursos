#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAM 16

int main() {
    int n;
    scanf("%d", &n);

    int m[TAM][TAM];

    int i,j;
    for (i=0; i<n; i=i+1) {
        for(j=0; j<n; j=j+1) {
            scanf("%d", &m[i][j]);
        }
    }

    for (i=0; i<n; i=i+1) {
        for(j=0; j<n; j=j+1) {
            printf("%4d ", m[i][j]);
        }
        putchar('\n');
    }
}