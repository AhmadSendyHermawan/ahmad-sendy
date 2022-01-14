#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
int main()
{
	int TanggalLahir, BulanLahir, TahunLahir;
	char nama [50];
	printf("Masukkan Nama Anda =");
	scanf("%S",&nama);
	printf("Ayo Masukkan Tanggal Lahir =");
	scanf("%d",&TanggalLahir);
	printf("Ayo Masukkan Bulan Lahir Juga =");
	scanf("%d",&BulanLahir);
	printf("Ayo Masukkan Tahun Lahir Juga Dong =");
	scanf("%d",&TahunLahir);
	printf("Woy Gan %s =)\n",nama); 
	printf("Usia Anda Saat Ini = %d Tahun \ ",2021-TanggalLahir);
	printf("%d Bulan \n", 9-BulanLahir);
	printf("%d Hari \n", 24-TanggalLahir);
	return 0;	
}
