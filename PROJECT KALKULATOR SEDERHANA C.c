#include <stdio.h>

int main(){
	
	printf("Kalkulator Sederhana by Paulus Calep Sandria Saputra\n");
	
	int bil1;
	int bil2;
	
	printf("Masukan Angka Pertama: ");
	scanf("%d", &bil1);
	
	printf("Masukan Angka kedua: ");
	scanf("%d", &bil2);
	
	int perintah;
	int plus;
	int min;
	int devide;
	int time;
	
	printf("1 adalah tanda penjumlahan(+)\n2 adalah tanda pengurangan(-)\n3 adalah tanda pembagian(/)\n4 adalah tanda perkalian(x)\n");
	printf("Masukan Perintah: ");
	scanf("%d", &perintah);
	
	if(perintah==1){
	
	plus=bil1+bil2;
	printf("Hasil Penjumlahan Bilangan Anda %d + %d = %d \n",bil1, bil2, plus);
}else if(perintah==2){

	min= bil1-bil2;
	printf("Hasil Pengurangan Bilangan Anda %d - %d = %d \n",bil1, bil2, min);
}else if(perintah==3){

	devide=bil1/bil2;
	printf("Hasil Pembagian Bilangan Anda %d / %d = %d \n",bil1, bil2, devide);
}else if(perintah==4){

	time=bil1*bil2;
	printf("Hasil Perkalian Bilangan Anda %d x %d = %d \n",bil1, bil2,time);
}
return 0;
}