#include <stdio.h>

int main() {
    int sayi, toplam = 0;

    // Kullanıcıdan 5 adet sayı girmesini isteyelim
    printf("Lutfen 5 adet sayi giriniz:\n");

    // Kullanıcıdan 5 adet sayı alalım ve toplama ekleyelim
    for (int i = 0; i < n; i++) {
        printf("Sayi %d: ", i+1);
        scanf("%d", &sayi);

        // Toplama ekleme
        toplam += sayi;
    }

    // Toplamı ekrana yazdıralım
    printf("Girdiginiz sayilarin toplami: %d\n", toplam);

    return 0;
}
