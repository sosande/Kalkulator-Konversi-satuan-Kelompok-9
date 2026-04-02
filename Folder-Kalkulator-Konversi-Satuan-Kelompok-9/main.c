#include <stdio.h>

void konversi_suhu();
void konversi_panjang();
void konversi_berat();
void konversi_waktu();

int main() {
    printf("Kalkulator konversi satuan\n");

    int pilihan;

    printf("Pilih jenis konversi:\n");
    printf("1. Konversi suhu\n");
    printf("2. Konversi panjang\n");
    printf("3. Konversi berat\n");
    printf("4. Konversi waktu\n");
    printf("Masukkan pilihan (1-4): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            konversi_suhu();
            break;
        case 2:
            konversi_panjang();
        break;
        case 3:
            konversi_berat();
        break;
        case 4:
            konversi_waktu();
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }

    //tambahkan fungsi konversi suhu, panjang, berat, dan waktu

    void konversi_suhu(){
        //isi fungsi konversi suhu
    }
    void konversi_panjang(){
    int main() {
    int jarak;
    int pilihan;

    printf("=== Program Konversi Jarak ===\n");
    

    printf("Pilih konversi:\n");
    printf("1. Kilometer ke Meter\n");
    printf("2. Kilometer ke Sentimeter\n");
    printf("Masukkan pilihan (1/2): ");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
        printf("Masukkan jarak dalam kilometer (km): ");
        scanf("%d", &jarak);
        int meter = jarak * 1000;
        printf("Hasil:\n %d km = %d meter\n", jarak, meter);
    } else if (pilihan == 2) {
        printf("Masukkan jarak dalam kilometer (km): ");
        scanf("%d", &jarak);
        int cm = jarak * 100000;
        printf("Hasil: \n%d  km= %d sentimeter\n", jarak, cm);
    } else {
        printf("Pilihan tidak valid.\n");
    }

    return 0;
}
    }
    void konversi_berat(){
        //isi fungsi konversi berat
    }
    void konversi_waktu(){
        //isi fungsi konversi waktu
    }

    return 0;
}