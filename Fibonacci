#include <stdio.h>

int main() {
    int n; 
    int t1 = 0, t2 = 1, sonraki;


    printf("Fibonacci serisini kac sayiya kadar gormek istiyorsunuz? ");
    scanf("%d", &n);

    printf("Fibonacci Serisi: %d, %d", t1, t2);

    for (int i = 3; i <= n; ++i) {
        sonraki = t1 + t2; 
        printf(", %d", sonraki); 
        t1 = t2; 
        t2 = sonraki;
    }

    printf("\n");

    return 0;
}
