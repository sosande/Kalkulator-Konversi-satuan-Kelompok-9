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
        
        int pilihan;
        float nilai;

        printf("\n=== Konversi Suhu ===\n");
        printf("1. Celsius -> Fahrenheit\n");
        printf("2. Celsius -> Kelvin\n");
        printf("3. Fahrenheit -> Celsius\n");
        printf("4. Fahrenheit -> Kelvin\n");
        printf("5. Kelvin -> Celsius\n");
        printf("6. Kelvin -> Fahrenheit\n");
        printf("Pilih (1-6): ");
        scanf("%d", &pilihan);

        printf("Masukkan nilai suhu: ");
        scanf("%f", &nilai);

        switch(pilihan) {
            case 1:
                printf("Hasil: %.2f F\n", c_to_f(nilai));
                break;
            case 2:
                printf("Hasil: %.2f K\n", c_to_k(nilai));
                break;
            case 3:
                printf("Hasil: %.2f C\n", f_to_c(nilai));
                break;
            case 4:
                printf("Hasil: %.2f K\n", f_to_k(nilai));
                break;
            case 5:
                printf("Hasil: %.2f C\n", k_to_c(nilai));
                break;
            case 6:
                printf("Hasil: %.2f F\n", k_to_f(nilai));
                break;
            default:
                printf("Pilihan tidak valid!\n");
        }
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
        int main() {
        float kg, gram, pons;

        // Meminta input 
        printf("Masukkan berat dalam Kilogram (kg): ");
        scanf("%f", &kg);

        // Melakukan perhitungan konversi
        gram = kg * 1000;
        pons = kg * 2.20462;

        // hasil
        printf("\n--- Hasil Konversi ---\n");
        printf("%.2f kg sama dengan %.2f Gram\n", kg, gram);
        printf("%.2f kg sama dengan %.2f Pons\n", kg, pons);

        return 0;
}
    }
    void konversi_waktu(){
        //isi fungsi konversi waktu
    

    
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


}
    }

    return 0;
}