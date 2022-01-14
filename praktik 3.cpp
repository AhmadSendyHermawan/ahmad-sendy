#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){

    char nikah;
    char nama[10];
    int golongan;
    printf("\nMasukkan Nama Pegawai : ");(nama);
    printf("Golongan Pegawai (1/2/3) : ");("%d",&golongan);
    
    printf("................................\n");
    printf("Nama    : %s",nama);
    printf("\nGolongan : %d",golongan);
    
    int tGolongan = (golongan == 1 ? 2000000 : (golongan == 2 ? 2750000 : 3500000));
    printf("\nGajipokok  : Rp%d",golongan);
    int bonus = (golongan == 1 ? 150000 : (golongan == 2 ? 17500 : 200000));
    printf("\nBonus   : Rp%d",bonus);
    printf("\nTotal Gaji  : Rp%d",tGolongan+bonus);
    
    return 0;
}