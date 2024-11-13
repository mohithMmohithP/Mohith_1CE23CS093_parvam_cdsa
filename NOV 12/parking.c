#include <stdio.h>

int main() {
    int r;
    scanf("%d", &r);
    int c;
    scanf("%d", &c);
    int p[r][c];

      
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &p[i][j]);   
        }
    }

    int max = 0;
    int index = -1;

    
    for (int i = 0; i < r; i++) {
        int co = 0;
        for (int j = 0; j < c; j++) {
            if (p[i][j] == 1) {
                co++;
            }
        }
        if (co > max) {
            max = co;
            index = i;  
        }
    }

    
    printf("%d\n", index + 1); 
    return 0;
} 