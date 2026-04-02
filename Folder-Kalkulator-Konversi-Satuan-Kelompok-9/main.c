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
    int panjang;
    int pilihan;

    printf("=== Program Konversi Jarak ===\n");
    

    printf("Pilih konversi:\n");
    printf("1. Kilometer ke Meter\n");
    printf("2. Kilometer ke Sentimeter\n");
    printf("Masukkan pilihan (1/2): ");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
        printf("Masukkan jarak dalam kilometer (km): ");
        scanf("%d", &panjang);
        int meter = panjang * 1000;
        printf("Hasil:\n %d km = %d meter\n", panjang, meter);
    } else if (pilihan == 2) {
        printf("Masukkan jarak dalam kilometer (km): ");
        scanf("%d", &panjang);
        int cm = panjang * 100000;
        printf("Hasil: \n%d  km= %d sentimeter\n", panjang, cm);
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
        #include <stdio.h>

int main() {
    float jam;
    float menit, detik;

    // Meminta input dari pengguna
    printf("Masukkan jumlah waktu (dalam jam): ");
    scanf("%f", &jam);

    // Rumus Konversi
    // 1 jam = 60 menit
    // 1 jam = 3600 detik
    menit = jam * 60;
    detik = jam * 3600;

    // Menampilkan hasil
    // %.2f digunakan untuk membatasi 2 angka di belakang koma
    printf("\n--- Hasil Konversi ---\n");
    printf("%.2f jam sama dengan:\n", jam);
    printf("> %.2f Menit\n", menit);
    printf("> %.2f Detik\n", detik);

    return 0;
}
    }

    return 0;
}