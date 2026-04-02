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
        //isi fungsi konversi panjang
        
    }
    void konversi_berat(){
        //isi fungsi konversi berat
    }
    void konversi_waktu(){
        //isi fungsi konversi waktu
    }

    return 0;
}
