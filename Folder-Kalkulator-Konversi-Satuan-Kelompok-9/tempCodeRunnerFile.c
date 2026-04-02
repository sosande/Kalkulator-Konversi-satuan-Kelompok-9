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
return 0; }
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
        
        if (pilihan == 1) {
            float fahrenheit = (nilai * 9/5) + 32;
            printf("%.2f Celsius = %.2f Fahrenheit\n", nilai, fahrenheit);
        } else if (pilihan == 2) {
            float kelvin = nilai + 273.15;
            printf("%.2f Celsius = %.2f Kelvin\n", nilai, kelvin);
        } else if (pilihan == 3) {
            float celsius = (nilai - 32) * 5/9;
            printf("%.2f Fahrenheit = %.2f Celsius\n", nilai, celsius);
        } else if (pilihan == 4) {
            float kelvin = (nilai - 32) * 5/9 + 273.15;
            printf("%.2f Fahrenheit = %.2f Kelvin\n", nilai, kelvin);
        } else if (pilihan == 5) {
            float celsius = nilai - 273.15;
            printf("%.2f Kelvin = %.2f Celsius\n", nilai, celsius);
        } else if (pilihan == 6) {
            float fahrenheit = (nilai - 273.15) * 9/5 + 32;
            printf("%.2f Kelvin = %.2f Fahrenheit\n", nilai, fahrenheit);
        } else {
            printf("Pilihan tidak valid.\n");
        }
    }
    void konversi_panjang(){

    int pilihan;
    float km ;

    printf("\n=== Konversi Panjang ===\n");
    printf("1. Kilometer ke Meter\n");
    printf("2. Kilometer ke Sentimeter\n");
    printf("Pilih (1-2): ");
    scanf("%d", &pilihan);

    printf("Masukkan nilai (km): ");
    scanf("%f", &km);

    if (pilihan == 1) {
        printf("Hasil: %.2f meter\n", km * 1000);
    } else if (pilihan == 2) {
        printf("Hasil: %.2f cm\n", km * 100000);
    } else {
        printf("Pilihan tidak valid!\n");
    }
    }
    void konversi_berat() {
    float kg;

    printf("\n=== Konversi Berat ===\n");
    printf("Masukkan berat (kg): ");
    scanf("%f", &kg);

    printf("Hasil:\n");
    printf("%.2f kg = %.2f gram\n", kg, kg * 1000);
    printf("%.2f kg = %.2f pons\n", kg, kg * 2.20462);
    }
    void konversi_waktu(){
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