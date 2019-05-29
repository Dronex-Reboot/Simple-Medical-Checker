#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MA 2
#define MAX 3
#define MAXX 4
#define MAXXX 5
#define MAXXXX 6
#define MIN 1

void arrowhere1(int realposition1,int arrowposition1){
	if(realposition1==arrowposition1){
		printf("\t<=");
	}
	else{
		printf("");
	}
}


void arrowhere(int realposition,int arrowposition){
	if(realposition==arrowposition){
		printf("\t<=");
	}
	else{
		printf("");
	}
}

int ringkasan(float bmi, float bmr, int berat, int tinggi, int umur, char gender){
	int i, bentar;
	int position1=1; 
	int keyPressed1=0, keyPressed=0;
	char nama[100];
	FILE *fptr;  
	fptr = fopen("RingkasanCekKesehatan.txt", "w+");/*  open for writing */  
    if (fptr == NULL)  
    {  
        printf("File does not exists \n");  
        return;  
    }  

	char pagi[5][50]= {"Buah-buahan","Sayuran", "Sereal","Bubur", "Susu"};
	char siang[5][50]= {"Salad","Ikan", "Nasi goreng","Daging ayam","Daging sapi"};
	char malam[5][50]= {"Sayur mayur","Roti","Sup","Seafood","Ikan"};
	char lat[11][50]={"Stretching","Plank","Lari","Jalan Cepat","Squat","Sit Up","Push Up","Jumping Jack","Yoga","Renang","Bersepeda"};

	printf("\n\n\t\t\t\t\t\t\t   Nama\t\t\t: ");
	scanf_s("%s", nama, sizeof(nama));
	while(keyPressed1!=13){
	system("cls");
	printf("\n\n\n\n\t\t\t\t\t   Sebelum lanjut ke ringkasan, Kami perlu data tingkat aktivitas Kamu: ");      
	printf("\n\t\t\t\t\t   Seberapa sering Kamu berolahraga?");
	printf("\n\n\t\t\t\t\t   1. Sangat jarang olahraga\t");arrowhere1(1,position1);
	printf("\n\t\t\t\t\t   2. Jarang olahraga\t\t");arrowhere1(2,position1);
	printf("\n\t\t\t\t\t   3. Normal\t\t\t");arrowhere1(3,position1);
	printf("\n\t\t\t\t\t   4. Sering olahraga\t\t");arrowhere1(4,position1);
	printf("\n\t\t\t\t\t   5. Sangat sering olahraga\t");arrowhere1(5,position1);
	keyPressed1=getch();
	if(keyPressed1 == 80 && position1 !=MAXXX){
		position1++;
	}
	else if(keyPressed1 == 72 && position1 !=MIN){
		position1--;
	}
	else{
		position1=position1;
	}
}	
	system("cls");
	printf("\n\n\t\t\t\t");
	fprintf(fptr,"\n\n\t\t\t\t");
	for(i=0;i<=87;i++){
	printf("+");
	fprintf(fptr,"+");
	Sleep(30);
	};
	printf("\n\n\t\t\t\t\t\t\t\tRINGKASAN CEK KESEHATAN");
	fprintf(fptr,"\n\n\t\t\t\t\t\t\t\tRINGKASAN CEK KESEHATAN");
	printf("\n\n\t\t\t\t");
	fprintf(fptr,"\n\n\t\t\t\t");
	for(i=0;i<=87;i++){
	printf("+");
	Sleep(30); 
	};
	printf("\n\n\t\t\t\t");
	fprintf(fptr,"\n\n\t\t\t\t");
	for(i=0;i<=87;i++){
	printf("+");
	fprintf(fptr,"+");
	Sleep(30);
	};
	printf("\n\t\t\t\tNama\t\t\t: %s", nama);
	printf("\n\t\t\t\tJenis Kelamin\t\t: %c", gender);
	printf("\n\t\t\t\tUmur\t\t\t: %d ",umur);
	printf("\n\t\t\t\tTinggi Badan (cm)\t: %d",tinggi);
	printf("\n\t\t\t\tBerat Badan (kg)\t: %d",berat);
	printf("\n\t\t\t\tBMI KAMU\t\t: %.2f",bmi);
	printf("\n\t\t\t\tBMR KAMU\t\t: %.2f",bmr);
	fprintf(fptr,"\n\t\t\t\tNama\t\t\t: %s", nama);
	fprintf(fptr,"\n\t\t\t\tJenis Kelamin\t\t: %c", gender);
	fprintf(fptr,"\n\t\t\t\tUmur\t\t\t: %d ",umur);
	fprintf(fptr,"\n\t\t\t\tTinggi Badan (cm)\t: %d",tinggi);
	fprintf(fptr,"\n\t\t\t\tBerat Badan (kg)\t: %d",berat);
	fprintf(fptr,"\n\t\t\t\tBMI KAMU\t\t: %.2f",bmi);
	fprintf(fptr,"\n\t\t\t\tBMR KAMU\t\t: %.2f",bmr);

	switch (position1){
		case 1: {
		printf ("\n\t\t\t\tKalori per hari\t\t: %.2f", bmr*1.2);
		printf("\n\n\t\t\t\t");
		fprintf(fptr,"\n\t\t\t\tKalori per hari\t\t: %.2f", bmr*1.2);
		fprintf(fptr,"\n\n\t\t\t\t");
		for(i=0;i<=87;i++){
		printf("+");
		fprintf(fptr,"+");
		Sleep(30);
		};
		printf("\n\n\t\t\t\t");
		fprintf(fptr,"\n\n\t\t\t\t");
		for(i=0;i<=87;i++){
		printf("+");
		fprintf(fptr,"+");
		Sleep(30);
		};
		printf ("\n\n\t\t\t\tPOLA MAKAN\n");
		fprintf(fptr,"\n\n\t\t\t\tPOLA MAKAN\n");		
		printf ("\n\t\t\t\t|Makan Pagi |\t%s\n\t\t\t\t|Makan Siang|\t%s\n\t\t\t\t|Makan Malam|\t%s\n", pagi[0], siang[0], malam[0]);
		fprintf(fptr,"\n\t\t\t\t|Makan Pagi |\t%s\n\t\t\t\t|Makan Siang|\t%s\n\t\t\t\t|Makan Malam|\t%s\n", pagi[0], siang[0], malam[0]);
		printf("\n\n\t\t\t\t");
		fprintf(fptr,"\n\n\t\t\t\t");
		for(i=0;i<=87;i++){
		printf("+");
		fprintf(fptr,"+");
		Sleep(30);
		};
		break;
		}
		case 2: {
		printf ("\n\t\t\t\tKalori perhari\t\t: %.2f", bmr*1.375);
		fprintf(fptr,"\n\t\t\t\tKalori perhari\t\t: %.2f", bmr*1.375);
		printf("\n\n\t\t\t\t");
		fprintf(fptr,"\n\n\t\t\t\t");
		for(i=0;i<=87;i++){
		printf("+");
		fprintf(fptr,"+");
		Sleep(30);
		};
		printf("\n\n\t\t\t\t");
		fprintf(fptr,"\n\n\t\t\t\t");
		for(i=0;i<=87;i++){
		printf("+");
		fprintf(fptr,"+");
		Sleep(30);
		};
		printf ("\n\n\t\t\t\tPOLA MAKAN\n");
		fprintf(fptr,"\n\n\t\t\t\tPOLA MAKAN\n");	
		printf ("\n\t\t\t\t|Makan Pagi |\t%s\n\t\t\t\t|Makan Siang|\t%s\n\t\t\t\t|Makan Malam|\t%s\n", pagi[1], siang[1], malam[1]);
		fprintf(fptr,"\n\t\t\t\t|Makan Pagi |\t%s\n\t\t\t\t|Makan Siang|\t%s\n\t\t\t\t|Makan Malam|\t%s\n", pagi[1], siang[1], malam[1]);
		printf("\n\n\t\t\t\t");
		fprintf(fptr,"\n\n\t\t\t\t");
		for(i=0;i<=87;i++){
		printf("+");
		fprintf(fptr,"+");
		Sleep(30);
		};	
		break;
		}
		case 3: {
		printf ("\n\t\t\t\tKalori perhari\t\t: %.2f", bmr*1.55);
		fprintf(fptr,"\n\t\t\t\tKalori perhari\t\t: %.2f", bmr*1.55);
		printf("\n\n\t\t\t\t");
		fprintf(fptr,"\n\n\t\t\t\t");
		for(i=0;i<=87;i++){
		printf("+");
		fprintf(fptr,"+");
		Sleep(30);
		};
		printf("\n\n\t\t\t\t");
		fprintf(fptr,"\n\n\t\t\t\t");
		for(i=0;i<=87;i++){
		printf("+");
		fprintf(fptr,"+");
		Sleep(30);
		};
		printf ("\n\n\t\t\t\tPOLA MAKAN\n");
		fprintf(fptr,"\n\n\t\t\t\tPOLA MAKAN\n");		
		printf ("\n\t\t\t\t|Makan Pagi |\t%s\n\t\t\t\t|Makan Siang|\t%s\n\t\t\t\t|Makan Malam|\t%s\n", pagi[2], siang[2], malam[2]);
		fprintf(fptr,"\n\t\t\t\t|Makan Pagi |\t%s\n\t\t\t\t|Makan Siang|\t%s\n\t\t\t\t|Makan Malam|\t%s\n", pagi[2], siang[2], malam[2]);
		printf("\n\n\t\t\t\t");
		fprintf(fptr,"\n\n\t\t\t\t");
		for(i=0;i<=87;i++){
		printf("+");
		fprintf(fptr,"+");
		Sleep(30);
		};
		break;
		}
		case 4: {
		printf ("\n\t\t\t\tKalori perhari\t\t: %.2f", bmr*1.725);
		fprintf(fptr,"\n\t\t\t\tKalori perhari\t\t: %.2f", bmr*1.725);
		printf("\n\n\t\t\t\t");
		fprintf(fptr,"\n\n\t\t\t\t");
		for(i=0;i<=87;i++){
		printf("+");
		fprintf(fptr,"+");
		Sleep(30);
		};
		printf("\n\n\t\t\t\t");
		fprintf(fptr,"\n\n\t\t\t\t");
		for(i=0;i<=87;i++){
		printf("+");
		fprintf(fptr,"+");
		Sleep(30);
		};
		printf ("\n\n\t\t\t\tPOLA MAKAN\n");
		fprintf(fptr,"\n\n\t\t\t\tPOLA MAKAN\n");	
		printf ("\n\t\t\t\t|Makan Pagi |\t%s\n\t\t\t\t|Makan Siang|\t%s\n\t\t\t\t|Makan Malam|\t%s\n", pagi[3], siang[3], malam[3]);
		fprintf(fptr,"\n\t\t\t\t|Makan Pagi |\t%s\n\t\t\t\t|Makan Siang|\t%s\n\t\t\t\t|Makan Malam|\t%s\n", pagi[3], siang[3], malam[3]);
		printf("\n\n\t\t\t\t");
		fprintf(fptr,"\n\n\t\t\t\t");
		for(i=0;i<=87;i++){
		printf("+");
		fprintf(fptr,"+");
		Sleep(30);
		};
		break;
		}
		case 5: {
		printf ("\n\t\t\t\tKalori perhari\t\t: %.2f", bmr*1.9);
		fprintf(fptr,"\n\t\t\t\tKalori perhari\t\t: %.2f", bmr*1.9);
		printf("\n\n\t\t\t\t");
		fprintf(fptr,"\n\n\t\t\t\t");
		for(i=0;i<=87;i++){
		printf("+");
		fprintf(fptr,"+");
		Sleep(30);
		};		
		printf("\n\n\t\t\t\t");
		fprintf(fptr,"\n\n\t\t\t\t");
		for(i=0;i<=87;i++){
		printf("+");
		fprintf(fptr,"+");
		Sleep(30);
		};
		printf ("\n\n\t\t\t\tPOLA MAKAN\n");
		fprintf(fptr,"\n\n\t\t\t\tPOLA MAKAN\n");
		printf("\n\n\t\t\t\t");
		fprintf(fptr,"\n\n\t\t\t\t");
		printf ("\n\t\t\t\t|Makan Pagi |\t%s\n\t\t\t\t|Makan Siang|\t%s\n\t\t\t\t|Makan Malam|\t%s\n", pagi[4], siang[4], malam[4]);
		fprintf(fptr,"\n\t\t\t\t|Makan Pagi |\t%s\n\t\t\t\t|Makan Siang|\t%s\n\t\t\t\t|Makan Malam|\t%s\n", pagi[4], siang[4], malam[4]);
		for(i=0;i<=87;i++){
		printf("+");
		fprintf(fptr,"+");
		Sleep(30);
		};
		break;
		}
	};
	//olahraga
	printf("\n\n\t\t\t\t");
	fprintf(fptr,"\n\n\t\t\t\t");
	for(i=0;i<=87;i++){
	printf("+");
	fprintf(fptr,"+");
	Sleep(30);
	};
	printf("\n\n\t\t\t\tPOLA OLAHRAGA");
	fprintf(fptr,"\n\n\t\t\t\tPOLA OLAHRAGA");
	printf("\n\n\t\t\t\t");
	fprintf(fptr,"\n\n\t\t\t\t");
	if (bmi <18.5){
	printf("\n\t\t\t\t|HARIAN\t\t| %s 5 Menit, %s 30 Detik, %s 2 Set, %s 3 Menit",lat[0],lat[1],lat[4],lat[7]);
	fprintf(fptr,"\n\t\t\t\t|HARIAN\t\t| %s 5 Menit, %s 30 Detik, %s 2 Set, %s 3 Menit",lat[0],lat[1],lat[4],lat[7]);
	printf("\n\t\t\t\t|MINGGUAN\t| %s 20-30 Menit",lat[2]);
	fprintf(fptr,"\n\t\t\t\t|MINGGUAN\t| %s 20-30 Menit",lat[2]);
	printf("\n\t\t\t\t|BULANAN\t| %s atau %s 1 Jam",lat [8], lat[9]);
	fprintf(fptr,"\n\t\t\t\t|BULANAN\t| %s atau %s 1 Jam",lat [8], lat[9]);
	};
	if(bmi >=18.5 && bmi <=24.9 ){
	printf("\n\t\t\t\t|HARIAN\t\t| %s 5 Menit, %s 30 Detik, %s 2 Set, %s 2 Set, %s 2 Set",lat[0],lat[1],lat[4],lat[5],lat[6]);
	fprintf(fptr,"\n\t\t\t\t|HARIAN\t\t| %s 5 Menit, %s 30 Detik, %s 2 Set, %s 2 Set, %s 2 Set",lat[0],lat[1],lat[4],lat[5],lat[6]);
	printf("\n\t\t\t\t|MINGGUAN\t| %s 30 Menit, %s 2 Jam",lat[2],lat[10]);
	fprintf(fptr,"\n\t\t\t\t|MINGGUAN\t| %s 30 Menit, %s 2 Jam",lat[2],lat[10]);
	printf("\n\t\t\t\t|BULANAN\t| %s 2 Jam ",lat[9]);
	fprintf(fptr,"\n\t\t\t\t|BULANAN\t| %s 2 Jam ",lat[9]);
	};
	if(bmi >= 25 && bmi <= 29.9 ){
	printf("\n\t\t\t\t|HARIAN\t\t|  %s 5 Menit, %s 20 Menit, %s 2 Set",lat[0],lat[3], lat[4]);
	fprintf(fptr,"\n\t\t\t\t|HARIAN\t\t|  %s 5 Menit, %s 20 Menit, %s 2 Set",lat[0],lat[3], lat[4]);
	printf("\n\t\t\t\t|MINGGUAN\t| %s 30 Menit", lat[2]);
	fprintf(fptr,"\n\t\t\t\t|MINGGUAN\t| %s 30 Menit", lat[2]);
	printf("\n\t\t\t\t|BULANAN\t| %s", lat[8]);
	fprintf(fptr,"\n\t\t\t\t|BULANAN\t| %s", lat[8]);
	};
	if(bmi >= 30){
	printf("\n\t\t\t\t|HARIAN\t\t| %s 5 Menit, %s 15 Menit",lat[0],lat[3]);
	fprintf(fptr,"\n\t\t\t\t|HARIAN\t\t| %s 5 Menit, %s 15 Menit",lat[0],lat[3]);
	printf("\n\t\t\t\t|MINGGUAN\t| %s 30 Menit", lat[10]);
	fprintf(fptr,"\n\t\t\t\t|MINGGUAN\t| %s 30 Menit", lat[10]);
	printf("\n\t\t\t\t|BULANAN\t| %s", lat[8]);
	fprintf(fptr,"\n\t\t\t\t|BULANAN\t| %s", lat[8]);
	};
	printf("\n\n\t\t\t\t");
	fprintf(fptr,"\n\n\t\t\t\t");
	for(i=0;i<=87;i++){
	printf("+");
	fprintf(fptr,"+");
	Sleep(30);
	};
	
	//sakit
	printf("\n\n\t\t\t\t");
	fprintf(fptr,"\n\n\t\t\t\t");
	for(i=0;i<=87;i++){
	printf("+");
	fprintf(fptr,"+");
	Sleep(30);
	};
	printf("\n\n\t\t\t\tKEMUNGKINAN PENYAKIT");
	fprintf(fptr,"\n\n\t\t\t\tKEMUNGKINAN PENYAKIT");
	if (bmi <18.5){
	printf("\n\n\t\t\t\t|Analisis\t\t| Resiko Rendah");
	fprintf(fptr,"\n\n\t\t\t\t|Analisis\t\t| Resiko Rendah");
	printf("\n\t\t\t\t|Penyakit yang beresiko\t| anemia dan lemas pada saat aktivitas karena kekurangan gizi");
	fprintf(fptr,"\n\t\t\t\t|Penyakit yang beresiko\t| anemia dan lemas pada saat aktivitas karena kekurangan gizi");
	printf("\n\t\t\t\t|Saran\t\t\t| Ada baiknya menambah berat badan sehingga mencapai tingkat ideal untuk beraktivitas sehari-hari");
	fprintf(fptr,"\n\t\t\t\t|Saran\t\t\t| Ada baiknya menambah berat badan sehingga mencapai tingkat ideal untuk beraktivitas sehari-hari");
	};
	if(bmi >=18.5 && bmi <=24.9 ){
	printf("\n\n\t\t\t\t|Analisis\t\t| Resiko sangat Rendah");
	fprintf(fptr,"\n\n\t\t\t\t|Analisis\t\t| Resiko sangat Rendah");
	printf("\n\t\t\t\t|Penyakit yang beresiko\t| Anda sehat! Tetap jaga kesehatan");
	fprintf(fptr,"\n\t\t\t\t|Penyakit yang beresiko\t| Anda sehat! Tetap jaga kesehatan");
	printf("\n\t\t\t\t|Saran\t\t\t| Karena anda sudah ideal tetaplah berolahraga dan mempertahankan pola makan yang sehat");
	fprintf(fptr,"\n\t\t\t\t|Saran\t\t\t| Karena anda sudah ideal tetaplah berolahraga dan mempertahankan pola makan yang sehat");
	};
	if(bmi >= 25 && bmi <= 29.9 ){
	printf("\n\n\t\t\t\t|Analisis\t\t| Resiko Sedikit Tinggi");
	fprintf(fptr,"\n\n\t\t\t\t|Analisis\t\t| Resiko Sedikit Tinggi");
	printf("\n\t\t\t\t|Penyakit yang beresiko\t| anemia dan lemas pada saat aktivitas karena kekurangan gizi");
	fprintf(fptr,"\n\t\t\t\t|Penyakit yang beresiko\t| anemia dan lemas pada saat aktivitas karena kekurangan gizi");
	printf("\n\t\t\t\t|Saran\t\t\t| Ada baiknya menambah berat badan sehingga mencapai tingkat ideal untuk beraktivitas sehari-hari");
	fprintf(fptr,"\n\t\t\t\t|Saran\t\t\t| Ada baiknya menambah berat badan sehingga mencapai tingkat ideal untuk beraktivitas sehari-hari");
	};
	if(bmi >= 30){
	printf("\n\n\t\t\t\t|Analisis\t\t| Resiko Tinggi");
	fprintf(fptr,"\n\n\t\t\t\t|Analisis\t\t| Resiko Tinggi");
	printf("\n\t\t\t\t\t\t\t|Penyakit yang beresiko\t| jantung koroner dan kolesterol");
	fprintf(fptr,"\n\t\t\t\t\t\t\t|Penyakit yang beresiko\t| jantung koroner dan kolesterol");
	printf("\n\t\t\t\t\t\t\t|Saran\t\t\t| Ada baiknya mengurangi berat badan dan menerapkan pola hidup sehat");
	fprintf(fptr,"\n\t\t\t\t\t\t\t|Saran\t\t\t| Ada baiknya mengurangi berat badan dan menerapkan pola hidup sehat");
	};
	printf("\n\n\t\t\t\t");
	fprintf(fptr,"\n\n\t\t\t\t");
	for(i=0;i<=87;i++){
	printf("+");
	fprintf(fptr,"+");
	Sleep(30);
	};
	fclose(fptr);
	printf("\n\t\t\t\t*RINGKASAN TELAH DI PRINT DI NOTEPAD (File:RingkasanCekKesehatan.text)*");
	printf("\n\n\t\t\t\tTekan tombol apa saja untuk kembali ke menu");
	bentar=getch();
	menu();
	
}

int penyakit(float bmi){
	int i, bentar;
	system("cls");
	printf("\n\n\t\t\t\t\t\t\t");
	for(i=0;i<=36;i++){
	printf("+");
	Sleep(30);
	};
	printf("\n\n\t\t\t\t\t\t\t               :/:-  `-:/.        \n");      
    printf("\t\t\t\t\t\t\t        `od:        `od:           \n"); 
    printf("\t\t\t\t\t\t\t       .mN.           oMo          \n"); 
    printf("\t\t\t\t\t\t\t       hMm    .--.`   :MM:         \n"); 
    printf("\t\t\t\t\t\t\t        MMM//dMNmmmMNy.hMMo        \n");  
    printf("\t\t\t\t\t\t\t    `/yMMMMyo.    `:smMMMd/`       \n"); 
    printf("\t\t\t\t\t\t\t  `sNMMmmNMMMmyo-yhNMMMNmNMMs`     \n"); 
    printf("\t\t\t\t\t\t\t .mm+. `md.:yMy` .Nmo-+do `:ym.    \n"); 
    printf("\t\t\t\t\t\t\t ys     NM:  .o+/o/   dM+    -s    \n"); 
    printf("\t\t\t\t\t\t\t h      :MN/  /MMm  `yMh`     -    \n"); 
    printf("\t\t\t\t\t\t\t +       .hMmo/MMm-yNNo            \n"); 
    printf("\t\t\t\t\t\t\t           ./omMMMso:              \n"); 
    printf("\t\t\t\t\t\t\t   -:.    `:yMMMMMMm+.    `.       \n"); 
    printf("\t\t\t\t\t\t\t     -+oydmmdy+../shmmdyo/-        \n");
	printf("\n\n\t\t\t\t\t\t\t");
	for(i=0;i<=36;i++){
	printf("+");
	Sleep(30);
	}; 
                                                                
	if (bmi <18.5){
	printf("\n\n\t\t\t\t\t\t\t|Analisis\t\t|: Resiko Rendah");
	printf("\n\t\t\t\t\t\t\t|Penyakit yang beresiko\t|: anemia dan lemas pada saat aktivitas karena kekurangan gizi");
	printf("\n\t\t\t\t\t\t\t|Saran\t\t\t|: Ada baiknya menambah berat badan sehingga mencapai tingkat ideal untuk beraktivitas sehari-hari");
	};
	if(bmi >=18.5 && bmi <=24.9 ){
	printf("\n\n\t\t\t\t\t\t\t|Analisis\t\t|: Resiko sangat Rendah");
	printf("\n\t\t\t\t\t\t\t|Penyakit yang beresiko\t|: Anda sehat! Tetap jaga kesehatan");
	printf("\n\t\t\t\t\t\t\t|Saran\t\t\t|: Karena anda sudah ideal tetaplah berolahraga dan mempertahankan pola makan yang sehat");
	};
	if(bmi >= 25 && bmi <= 29.9 ){
	printf("\n\n\t\t\t\t\t\t\t|Analisis\t\t|: Resiko Sedikit Tinggi");
	printf("\n\t\t\t\t\t\t\t|Penyakit yang beresiko\t|: anemia dan lemas pada saat aktivitas karena kekurangan gizi");
	printf("\n\t\t\t\t\t\t\t|Saran\t\t\t|: Ada baiknya menambah berat badan sehingga mencapai tingkat ideal untuk beraktivitas sehari-hari");
	};
	if(bmi >= 30){
	printf("\n\n\t\t\t\t\t\t\t|Analisis\t\t|: Resiko Tinggi");
	printf("\n\t\t\t\t\t\t\t|Penyakit yang beresiko\t|: jantung koroner dan kolesterol");
	printf("\n\t\t\t\t\t\t\t|Saran\t\t\t|: Ada baiknya mengurangi berat badan dan menerapkan pola hidup sehat");
	};
	
	printf("\n\n\t\t\t\t\t\t\t   Tekan tombol apa saja untuk lanjut...");
	bentar=getche();

	int position=1;
	int keyPressed=0;
	while(keyPressed!=13){
	system("cls");
	printf("\n\n\t\t\t\t\t\t\t++++++++++++++++++++++++++++++++++++");
	printf("\n\n\t\t\t\t\t\t\t               :/:-  `-:/.        \n");      
    printf("\t\t\t\t\t\t\t        `od:        `od:           \n"); 
    printf("\t\t\t\t\t\t\t       .mN.           oMo          \n"); 
    printf("\t\t\t\t\t\t\t       hMm    .--.`   :MM:         \n"); 
    printf("\t\t\t\t\t\t\t        MMM//dMNmmmMNy.hMMo        \n");  
    printf("\t\t\t\t\t\t\t    `/yMMMMyo.    `:smMMMd/`       \n"); 
    printf("\t\t\t\t\t\t\t  `sNMMmmNMMMmyo-yhNMMMNmNMMs`     \n"); 
    printf("\t\t\t\t\t\t\t .mm+. `md.:yMy` .Nmo-+do `:ym.    \n"); 
    printf("\t\t\t\t\t\t\t ys     NM:  .o+/o/   dM+    -s    \n"); 
    printf("\t\t\t\t\t\t\t h      :MN/  /MMm  `yMh`     -    \n"); 
    printf("\t\t\t\t\t\t\t +       .hMmo/MMm-yNNo            \n"); 
    printf("\t\t\t\t\t\t\t           ./omMMMso:              \n"); 
    printf("\t\t\t\t\t\t\t   -:.    `:yMMMMMMm+.    `.       \n"); 
    printf("\t\t\t\t\t\t\t     -+oydmmdy+../shmmdyo/-        \n");
	printf("\n\n\t\t\t\t\t\t\t++++++++++++++++++++++++++++++++++++");
	printf("\n\n\t\t\t\t\t\t\t\tAkhir Dari Cek Kesehatan,Apa yang ingin kamu lakukan: ");
	printf("\n\t\t\t\t\t\t\t\t1. Menu\t\t");arrowhere(1,position);
	printf("\n\t\t\t\t\t\t\t\t2. Keluar\t\t");arrowhere(2,position);
	keyPressed=getch();
	if(keyPressed == 80 && position !=MA){
		position++;
	}
	else if(keyPressed == 72 && position!=MIN){
		position--;
	}
	else{
		position=position;
	}
}
	switch(position){
		case 1:{
			system("cls");
			menu();
			break;
		}
		case 2:{
			system("cls");
			return 0;
			break;
		}
	}	              
}

int olahraga(float bmi){
	system("cls");
	int i, bentar;
	char lat[11][50]={"Stretching","Plank","Lari","Jalan Cepat","Squat","Sit Up","Push Up","Jumping Jack","Yoga","Renang","Bersepeda"};
	printf("\t\t\t\t\t\t\t\t");
	for(i=0;i<=35;i++){
	printf("+");
	Sleep(30);
	};
	printf("\n\n\t\t\t\t\t\t\t\t                    +hdh+\n");              
    printf("\t\t\t\t\t\t\t\t                  :mmmmm-\n");             
    printf("\t\t\t\t\t\t\t\t          /+oooo+o+shdh+\n");            
    printf("\t\t\t\t\t\t\t\t        :dmmddmmmmmms-    odm+\n");        
    printf("\t\t\t\t\t\t\t\t      -ymmy..smmmmmmmms-ommmo.\n");        
    printf("\t\t\t\t\t\t\t\t     smmh-`+mmmmmmd//dmmmmo.\n");          
    printf("\t\t\t\t\t\t\t\t     +s/`:dmmmmmm+    /s+.\n");            
    printf("\t\t\t\t\t\t\t\t       -ymmmmmmm:`\n");                    
    printf("\t\t\t\t\t\t\t\t `    .smmmmmmmmmms-\n");                   
printf("\t\t\t\t\t\t\t\t.+sooooosmmmmm+`-ymmmmmy\n");                  
printf("\t\t\t\t\t\t\t\tommmmmmmmmmmo`    -smmmd\n");                  
printf("\t\t\t\t\t\t\t\t                   :Nmm+\n");                  
    printf("\t\t\t\t\t\t\t\t               ymmm\n");                  
    printf("\t\t\t\t\t\t\t\t              -mmmo\n");                   
    printf("\t\t\t\t\t\t\t\t              smmm.\n");                   
    printf("\t\t\t\t\t\t\t\t              /hd+\n");
    printf("\n\t\t\t\t\t\t\t\t\t Pola Olahraga\n\n");
	printf("\t\t\t\t\t\t\t\t");
	for(i=0;i<=35;i++){
	printf("+");
	Sleep(30);
	};
	
	if (bmi <18.5){
	printf("\n\n\t\t\t\t\t|HARIAN\t\t|: %s 5 Menit, %s 30 Detik, %s 2 Set, %s 3 Menit",lat[0],lat[1],lat[4],lat[7]);
	printf("\n\t\t\t\t\t\t\t|MINGGUAN\t|: %s 20-30 Menit",lat[2]);
	printf("\n\t\t\t\t\t\t\t|BULANAN\t|: %s atau %s 1 Jam",lat [8], lat[9]);
	};
	if(bmi >=18.5 && bmi <=24.9 ){
	printf("\n\t\t\t\t\t\t\t|HARIAN\t\t|: %s 5 Menit, %s 30 Detik, %s 2 Set, %s 2 Set, %s 2 Set",lat[0],lat[1],lat[4],lat[5],lat[6]);
	printf("\n\t\t\t\t\t\t\t|MINGGUAN\t|: %s 30 Menit, %s 2 Jam",lat[2],lat[10]);
	printf("\n\t\t\t\t\t\t\t|BULANAN\t|: %s 2 Jam ",lat[9]);
	};
	if(bmi >= 25 && bmi <= 29.9 ){
	printf("\n\t\t\t\t\t\t\t|HARIAN\t\t|:  %s 5 Menit, %s 20 Menit, %s 2 Set",lat[0],lat[3], lat[4]);
	printf("\n\t\t\t\t\t\t\t|MINGGUAN\t|: %s 30 Menit", lat[2]);
	printf("\n\t\t\t\t\t\t\t|BULANAN\t|: %s", lat[8]);
	};
	if(bmi >= 30){
	printf("\n\t\t\t\t\t\t\t|HARIAN\t\t|: %s 5 Menit, %s 15 Menit",lat[0],lat[3]);
	printf("\n\t\t\t\t\t\t\t|MINGGUAN\t|: %s 30 Menit", lat[10]);
	printf("\n\t\t\t\t\t\t\t|BULANAN\t|: %s", lat[8]);
	};
	
	printf("\n\n\n\n\t\t\t\t\t\t\tTekan tombol apa saja untuk lanjut..");
	bentar=getche();
	
	int position=1;
	int keyPressed=0;
	while(keyPressed!=13){
	system("cls");
	printf("\t\t\t\t\t\t\t\t+++++++++++++++++++++++++++++++++++++");
	printf("\n\n\t\t\t\t\t\t\t\t                    +hdh+\n");              
    printf("\t\t\t\t\t\t\t\t                  :mmmmm-\n");             
    printf("\t\t\t\t\t\t\t\t          /+oooo+o+shdh+\n");            
    printf("\t\t\t\t\t\t\t\t        :dmmddmmmmmms-    odm+\n");        
    printf("\t\t\t\t\t\t\t\t      -ymmy..smmmmmmmms-ommmo.\n");        
    printf("\t\t\t\t\t\t\t\t     smmh-`+mmmmmmd//dmmmmo.\n");          
    printf("\t\t\t\t\t\t\t\t     +s/`:dmmmmmm+    /s+.\n");            
    printf("\t\t\t\t\t\t\t\t       -ymmmmmmm:`\n");                    
    printf("\t\t\t\t\t\t\t\t `    .smmmmmmmmmms-\n");                   
printf("\t\t\t\t\t\t\t\t.+sooooosmmmmm+`-ymmmmmy\n");                  
printf("\t\t\t\t\t\t\t\tommmmmmmmmmmo`    -smmmd\n");                  
printf("\t\t\t\t\t\t\t\t                   :Nmm+\n");                  
    printf("\t\t\t\t\t\t\t\t               ymmm\n");                  
    printf("\t\t\t\t\t\t\t\t              -mmmo\n");                   
    printf("\t\t\t\t\t\t\t\t              smmm.\n");                   
    printf("\t\t\t\t\t\t\t\t              /hd+\n");
    printf("\n\t\t\t\t\t\t\t\t\t Pola Olahraga\n\n");
    printf("\t\t\t\t\t\t\t\t++++++++++++++++++++++++++++++++++++");
	printf("\n\n\t\t\t\t\t\tBerdasarkan Pola Olahraga Kamu, Kami telah membuat beberapa rekomendasi: ");
	printf("\n\n\t\t\t\t\t\t1. Kemungkinan Penyakit\t");arrowhere(1,position);
	printf("\n\t\t\t\t\t\t2. Menu\t\t\t");arrowhere(2,position);
	printf("\n\t\t\t\t\t\t3. Keluar\t\t");arrowhere(3,position);
	keyPressed=getch();
	if(keyPressed == 80 && position !=MAX){
		position++;
	}
	else if(keyPressed == 72 && position!=MIN){
		position--;
	}
	else{
		position=position;
	}
}
	switch(position){
		case 1:{
			system("cls");
			return penyakit(bmi);
			break;
		}
		case 2:{
			system("cls");
			menu();
			break;
		}
		case 3:{
			system("cls");
			return 0;
			break;
		}
	}	                  
}

int polamakan(float bmr,float bmi){
	system("cls");
	int position1=1, position=1,i,bentar;
	int keyPressed1=0, keyPressed=0;
	while(keyPressed1!=13){
	system("cls");
	printf("\n\t\t\t\t\t\t\t   ------------------------------------");
	printf("\n\n\n\t\t\t\t\t\t\t                    -`\n");                
    printf("\t\t\t\t\t\t\t      `                  .ymy`\n");               
    printf("\t\t\t\t\t\t\t                         :dm+`   `\n");            
    printf("\t\t\t\t\t\t\t                       `omd-  `:ym:\n");          
    printf("\t\t\t\t\t\t\t                      .hmy. `+dms-\n");            
    printf("\t\t\t\t\t\t\t                     /mm+`.smmo.\n");              
    printf("\t\t\t\t\t\t\t                    `::- `:::.\n");                
    printf("\t\t\t\t\t\t\t      `oooooooooooooooooooooooooooo.\n");         
    printf("\t\t\t\t\t\t\t      `dmhssssssossssssssossssssymm`\n");          
    printf("\t\t\t\t\t\t\t       :md.                    `hmo\n");           
    printf("\t\t\t\t\t\t\t        +mh.                  .hmo`\n");           
    printf("\t\t\t\t\t\t\t         -hm+`              `+dh:\n");            
    printf("\t\t\t\t\t\t\t          `/hms+//////////+sdy:`\n");              
    printf("\t\t\t\t\t\t\t             ./yhyhhhhhhyhy:`\n\n");
    printf("\n\t\t\t\t\t\t\t               POLA MAKAN");
	printf("\n\t\t\t\t\t\t\t   ------------------------------------");
	printf("\n\n\t\t\t\t\t\t\t   Pola Makan Disesuaikan Dengan Aktivitas Dan Kebutuhan Kalori/hari");      
	printf("\n\t\t\t\t\t\t\t   Seberapa sering anda berolahraga?");
	printf("\n\n\t\t\t\t\t\t\t   1. Sangat jarang olahraga\t");arrowhere1(1,position1);
	printf("\n\t\t\t\t\t\t\t   2. Jarang olahraga\t\t");arrowhere1(2,position1);
	printf("\n\t\t\t\t\t\t\t   3. Normal\t\t\t");arrowhere1(3,position1);
	printf("\n\t\t\t\t\t\t\t   4. Sering olahraga\t\t");arrowhere1(4,position1);
	printf("\n\t\t\t\t\t\t\t   5. Sangat sering olahraga\t");arrowhere1(5,position1);
	keyPressed1=getch();
	if(keyPressed1 == 80 && position1 !=MAXXX){
		position1++;
	}
	else if(keyPressed1 == 72 && position1 !=MIN){
		position1--;
	}
	else{
		position1=position1;
	}
}	
	char pagi[5][50]= {"Buah-buahan","Sayuran", "Sereal","Bubur", "Susu"};
	char siang[5][50]= {"Salad","Ikan", "Nasi goreng","Daging ayam","Daging sapi"};
	char malam[5][50]= {"Sayur mayur","Roti","Sup","Seafood","Ikan"};
	
	switch (position1){
		case 1: {
		system("cls");
		printf ("\n\n\n\n\n\t\t\t\t\t\t\t Tunggu sebentar selagi mengkalkulasi");
		for(i=0;i<=5;i++){
		printf(".");
	 	Sleep(300);
	 	};
	 	system("cls");
		printf ("\n\n\n\n\n\t\t\t\t\t\t\t Kalori yang dibutuhkan perhari adalah: %.2f\n\n\n\t\t\t\t\t\t\t Makanan yang direkomendasikan:\n\t\t\t\t\t\t\t |Makan Pagi |\t%s\n\t\t\t\t\t\t\t |Makan Siang|\t%s\n\t\t\t\t\t\t\t |Makan Malam|\t%s\n", bmr*1.2, pagi[0], siang[0], malam[0]);
		printf("\n\n\t\t\t\t\t\t\tTekan tombol apa saja untuk lanjut...");
		bentar=getche();
		break;
		}
		case 2: {
		system("cls");
		printf ("\n\n\n\n\n\t\t\t\t\t\t\t Tunggu sebentar selagi mengkalkulasi");
		for(i=0;i<=5;i++){
		printf(".");
	 	Sleep(300);
	 	};
	 	system("cls");
		printf ("\n\n\n\n\n\t\t\t\t\t\t\t Kalori yang dibutuhkan perhari adalah: %.2f\n\n\n\t\t\t\t\t\t\t Makanan yang direkomendasikan:\n\t\t\t\t\t\t\t |Makan Pagi |\t%s\n\t\t\t\t\t\t\t |Makan Siang|\t%s\n\t\t\t\t\t\t\t |Makan Malam|\t%s\n", bmr*1.375, pagi[1], siang[1], malam[1]);
		printf("\n\n\t\t\t\t\t\t\tTekan tombol apa saja untuk lanjut...");
		bentar=getche();
		break;
		}
		case 3: {
		system("cls");
		printf ("\n\n\n\n\n\t\t\t\t\t\t\t Tunggu sebentar selagi mengkalkulasi");
		for(i=0;i<=5;i++){
		printf(".");
	 	Sleep(300);
	 	};
	 	system("cls");
		printf ("\n\n\t\t\t\t\t\t\t  Kalori yang dibutuhkan perhari adalah: %.2f\n\n\n\t\t\t\t\t\t\t Makanan yang direkomendasikan:\n\t\t\t\t\t\t\t |Makan Pagi |\t%s\n\t\t\t\t\t\t\t |Makan Siang|\t%s\n\t\t\t\t\t\t\t |Makan Malam|\t%s\n", bmr*1.55, pagi[2], siang[2], malam[2]);
		printf("\n\n\t\t\t\t\t\t\tTekan tombol apa saja untuk lanjut...");
		bentar=getche();
		break;
		}
		case 4: {
		system("cls");
		printf ("\n\n\n\n\n\t\t\t\t\t\t\t Tunggu sebentar selagi mengkalkulasi");
		for(i=0;i<=5;i++){
		printf(".");
	 	Sleep(300);
	 	};
		system("cls");
		printf ("\n\n\n\n\n\t\t\t\t\t\t\t Kalori yang dibutuhkan perhari adalah: %.2f\n\n\n\t\t\t\t\t\t\t Makanan yang direkomendasikan:\n\t\t\t\t\t\t\t |Makan Pagi |\t%s\n\t\t\t\t\t\t\t |Makan Siang|\t%s\n\t\t\t\t\t\t\t |Makan Malam|\t%s\n", bmr*1.725, pagi[3], siang[3], malam[3]);
		printf("\n\n\t\t\t\t\t\t\tTekan tombol apa saja untuk lanjut...");
		bentar=getche();
		break;
		}
		case 5: {
		system("cls");
		printf ("\n\n\n\n\n\t\t\t\t\t\t\t Tunggu sebentar selagi mengkalkulasi");
		for(i=0;i<=5;i++){
		printf(".");
	 	Sleep(300);
	 	};
	 	system("cls");
		printf ("\n\n\n\n\n\t\t\t\t\t\t\t Kalori yang dibutuhkan perhari adalah: %.2f\n\n\n\t\t\t\t\t\t\t Makanan yang direkomendasikan:\n\t\t\t\t\t\t\t |Makan Pagi |\t%s\n\t\t\t\t\t\t\t |Makan Siang|\t%s\n\t\t\t\t\t\t\t |Makan Malam|\t%s\n", bmr*1.9, pagi[4], siang[4], malam[4]);
		printf("\n\n\t\t\t\t\t\t\tTekan tombol apa saja untuk lanjut...");
		bentar=getche();
		break;
		}
	};
	while(keyPressed!=13){
	system("cls");
	printf("\n\t\t\t\t\t\t\t   ------------------------------------");
	printf("\n\n\n\t\t\t\t\t\t\t                    -`\n");                
    printf("\t\t\t\t\t\t\t      `                  .ymy`\n");               
    printf("\t\t\t\t\t\t\t                         :dm+`   `\n");            
    printf("\t\t\t\t\t\t\t                       `omd-  `:ym:\n");          
    printf("\t\t\t\t\t\t\t                      .hmy. `+dms-\n");            
    printf("\t\t\t\t\t\t\t                     /mm+`.smmo.\n");              
    printf("\t\t\t\t\t\t\t                    `::- `:::.\n");                
    printf("\t\t\t\t\t\t\t      `oooooooooooooooooooooooooooo.\n");         
    printf("\t\t\t\t\t\t\t      `dmhssssssossssssssossssssymm`\n");          
    printf("\t\t\t\t\t\t\t       :md.                    `hmo\n");           
    printf("\t\t\t\t\t\t\t        +mh.                  .hmo`\n");           
    printf("\t\t\t\t\t\t\t         -hm+`              `+dh:\n");            
    printf("\t\t\t\t\t\t\t          `/hms+//////////+sdy:`\n");              
    printf("\t\t\t\t\t\t\t             ./yhyhhhhhhyhy:`\n\n");
    printf("\n\t\t\t\t\t\t\t               POLA MAKAN");
	printf("\n\t\t\t\t\t\t\t   ------------------------------------"); 
	printf("\n\n\t\t\t\t\t\t\t   Berdasarkan Pola Makan Kamu, Kami telah membuat beberapa rekomendasi: ");
	printf("\n\t\t\t\t\t\t\t   1. Pola Olahraga\t\t");arrowhere(1,position);
	printf("\n\t\t\t\t\t\t\t   2. Kemungkinan Penyakit\t");arrowhere(2,position);
	printf("\n\t\t\t\t\t\t\t   3. Menu\t\t\t");arrowhere(3,position);
	printf("\n\t\t\t\t\t\t\t   4. Keluar\t\t\t");arrowhere(4,position);
	keyPressed=getch();
	if(keyPressed == 80 && position !=MAXX){
		position++;
	}
	else if(keyPressed == 72 && position!=MIN){
		position--;
	}
	else{
		position=position;
	}
}
	switch(position){
		case 1:{
			system("cls");
			return olahraga(bmi);
			break;
		}
		case 2:{
			system("cls");
			return penyakit(bmi);
			break;
		}
		case 3:{
			system("cls");
			menu();
			break;
		}
		case 4:{
			system("cls");
			return 0;
			break;
		}
	}	                  
}

int bmibmr(){
	char gender;
	int umur, berat,i,bentar;
	float tinggi, tinggi2, bmi, bmr;
	printf("\n\t\t\t\t\t\t\t  ");
	for(i=0;i<=35;i++){
	printf("-");
	Sleep(35);
	};
	printf("\n\n\n\t\t\t\t\t\t\t  ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶¶¶¶¶¶¶¶___________________¶¶¶¶¶¶¶¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶¶¶¶¶_________________________¶¶¶¶¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶¶¶¶¶__________¶¶¶¶¶¶_________¶¶¶¶¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶¶_____________¶¶¶¶¶¶____________¶¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_______¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_______¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_______¶¶");	
	printf("\n\t\t\t\t\t\t\t  ¶¶¶_____________¶¶¶¶¶¶____________¶¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶¶¶____________¶¶¶¶¶¶___________¶¶¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶¶¶¶¶_________________________¶¶¶¶¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶¶¶¶¶¶¶_____________________¶¶¶¶¶¶¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n");
                                  
	printf("\n\n\t\t\t\t\t\t\t   ISI DATA DIBAWAH INI DENGAN BENAR YA\n\n");
	printf("\n\t\t\t\t\t\t\t  ");
	for(i=0;i<=35;i++){
	printf("-");
	Sleep(35);
	};
	printf("\n\t\t\t\t\t\t\t   Jenis Kelamin (L/P)\t: ");
	scanf("%s", &gender);
	printf("\n\t\t\t\t\t\t\t   Umur\t\t\t: ");
	scanf("%d", &umur);
	printf("\n\t\t\t\t\t\t\t   Tinggi Badan (cm)\t: ");
	scanf("%f",&tinggi);
	printf("\n\t\t\t\t\t\t\t   Berat Badan (kg)\t: ");
	scanf("%d",&berat);
	tinggi2=tinggi/100;
	bmi = berat/pow(tinggi2,2);
	printf("\n\t\t\t\t\t\t\t   Tekan tombol apa saja untuk hasil...");
	bentar=getche();
	int position=1;
	int keyPressed=0;
	while(keyPressed!=13){
	system("cls");
	printf("\n\n\n\t\t\t\t\t\t\t  ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶¶¶¶¶¶¶¶___________________¶¶¶¶¶¶¶¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶¶¶¶¶_________________________¶¶¶¶¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶¶¶¶¶__________¶¶¶¶¶¶_________¶¶¶¶¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶¶_____________¶¶¶¶¶¶____________¶¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_______¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_______¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_______¶¶");	
	printf("\n\t\t\t\t\t\t\t  ¶¶¶_____________¶¶¶¶¶¶____________¶¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶¶¶____________¶¶¶¶¶¶___________¶¶¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶¶¶¶¶_________________________¶¶¶¶¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶¶¶¶¶¶¶_____________________¶¶¶¶¶¶¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶");
	printf("\n\t\t\t\t\t\t\t  ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n");
	
	printf("\n\n\t\t\t\t\t\t\tBMI Kamu\t\t: %.2f", bmi);
	if (bmi <18.5){
	printf (" Kurus (Gizi Kurang)");};
	if(bmi >=18.5 && bmi <=24.9 ){
	printf (" Normal (Gizi Cukup)");};
	if(bmi >= 25 && bmi <= 29.9 ){
	printf (" Gemuk (Gizi lebih)");};
	if(bmi >= 30){
	printf (" Obesitas (Gizi berlebih)");};
	
	if(gender == 'L'||gender =='l'){
		bmr = 66+(13.7*berat)+(5*tinggi)-(6.8*umur);
		printf("\n\n\t\t\t\t\t\t\tBMR Kamu\t\t: %.2f", bmr);
	};
	if(gender == 'P'||gender =='p'){
		bmr = 655+(9.6*berat)+(1.8*tinggi)-(4.7*umur);
		printf("\n\n\t\t\t\t\t\t\tBMR Kamu\t\t: %.2f", bmr);
	};
	
	
	printf("\n\n\t\t\t\t\t\t\tBerdasarkan BMI & BMR Kamu, Kami telah membuat beberapa rekomendasi: ");
	printf("\n\t\t\t\t\t\t\t1. Pola Makan Sehat\t");arrowhere(1,position);
	printf("\n\t\t\t\t\t\t\t2. Pola Olahraga\t");arrowhere(2,position);
	printf("\n\t\t\t\t\t\t\t3. Kemungkinan Penyakit\t");arrowhere(3,position);
	printf("\n\t\t\t\t\t\t\t4. Ringkasan\t\t");arrowhere(4,position);
	printf("\n\t\t\t\t\t\t\t5. Menu\t\t\t");arrowhere(5,position);
	printf("\n\t\t\t\t\t\t\t6. Keluar\t\t");arrowhere(6,position);
		keyPressed=getch();
	
	if(keyPressed == 80 && position !=MAXXXX){
		position++;
	}
	else if(keyPressed == 72 && position!=MIN){
		position--;
	}
	else{
		position=position;
	}
}	
	switch(position){
		case 1:{
			system("cls");
			return 	polamakan(bmr,bmi);
			break;
		}
		case 2:{
			system("cls");
			return olahraga(bmi);
			break;
		}
		case 3:{
			system("cls");
			return penyakit(bmi);
			break;
		}
		case 4:{
			system("cls");
			return ringkasan(bmi,bmr,berat,tinggi,umur,gender);
			break;
		}
		case 5:{
			system("cls");
			menu();
			break;
		}
		case 6:{
			return 0;
			break;
		}
	}
}
void bantuan(){
	int i,input;
	printf("\n\n\t\t\t\t\t\t\t");
	for(i=0;i<=27;i++){
	printf("-");
	Sleep(30);
	};
	printf("\n\t\t\t\t\t\t\t       /sdmNMMNmho:`\n");           
    printf("\t\t\t\t\t\t\t    -hMMMMMMMMMMMMMNs.\n");                
    printf("\t\t\t\t\t\t\t   sMMMMMMMMMMMMMMMMMN:\n");               
    printf("\t\t\t\t\t\t\t  .sNMMMMm+-.-/yMMMMMMN.\n");              
    printf("\t\t\t\t\t\t\t    `/hd+       mMMMMMM-\n");              
    printf("\t\t\t\t\t\t\t             -omMMMMMMd`\n");              
    printf("\t\t\t\t\t\t\t          .sNMMMMMMMNs`\n");               
    printf("\t\t\t\t\t\t\t         /NMMMMMMNy/`\n");                 
    printf("\t\t\t\t\t\t\t         mMMMMMMy`\n");                    
    printf("\t\t\t\t\t\t\t         +yyyyys`\n");                     
    printf("\t\t\t\t\t\t\t         oyyyyyy.\n");                     
    printf("\t\t\t\t\t\t\t         mMMMMMM:\n");                     
    printf("\t\t\t\t\t\t\t         mMMMMMM:\n");                     
    printf("\t\t\t\t\t\t\t         sdddddd.\n\n");
	printf("\t\t\t\t\t\t\t    -----  BANTUAN -----");
	printf("\n\n\t\t\t\t\t\t\t");
	for(i=0;i<=27;i++){
	printf("-");
	Sleep(30);
	};
	printf("\n\n\t\t\t #Program ini hanya akan berjalan jika user memasukkan input yang sesuai");
	printf("\n\t\t\t  -Menu Ringkasan berisi seluruh rekomendasi dari kami");
	printf("\n\t\t\t  -Jika user memasukkan input yang salah, maka program akan meminta input kembali");
	printf("\n\t\t\t  -Program yang disajikan pada sub-menu berurutan dan jika diacak tidak dapat langsung");
	printf("\n\t\t\t   Contoh: Jika user pilih sub-menu Pola Olahraga, maka user tidak dapat langsung ke"); 
	printf("\n\t\t\t           sub-menu Pola Makan, karena sesuai dengan urutan pada sub-menu, Pola Makan");
	printf("\n\t\t\t           diatas sub-menu Pola Olahraga");							
	printf("\n\n\t\t\t #Program ini meminta data fisik pribadi user yang dapat dipertanggungjawabkan");
	printf("\n\t\t\t  -Satuan data fisik tertera pada info input");
	printf("\n\t\t\t  -Ketidaksesuaian input yang diberikan user akan memengaruhi hasil dari BMI/BMR user");
	printf("\n\n\t\t\t #Untuk pemeriksaan lebih lanjut hubungi dokter");
	printf("\n\t\t\t  -Karena rekomendasi yang disajikan dapat berubah tergantung kondisi fisik user");
	printf("\n\n\t\t\t Tekan tombol apa saja untuk kembali...");
	input=getche();
	main();
         
}

int menu(){
	int i;
	int position=1;
	int keyPressed=0;
	system("COLOR 0E");
	while(keyPressed!=13){
	system("cls"); 
	printf("\t\t\t\t");
	for(i=0;i<=87;i++){
	printf("-");
	};
	printf("\n\n \t\t\t\t\t\t\t\tSIMPLE MEDICAL CHECKER");
	printf("\n\n\t\t\t\t");
	for(i=0;i<=87;i++){
	printf("-");
	};        
    printf("\n\t\t\t\t\t                                  .-                             \n");                      
    printf("\t\t\t\t\t                         `....`   `.   `....`                    \n");                      
    printf("\t\t\t\t\t                     `:+osssssso/:``-/oooooooo/:`                \n");                     
    printf("\t\t\t\t\t                   `+sssssssssssssoossooooooooooo/`              \n");                      
    printf("\t\t\t\t\t                 -sssssssssssssssssssssooooooooooo.  `\n");                     
    printf("\t\t\t\t\t                `ssssssssssss:-osssssssssoooooooooo` `\n");                                
    printf("\t\t\t\t\t                 /ssssssssssso`./ssssssssssooooooooo: `\n");                                
    printf("\t\t\t\t\t                 /sssssssssss./+.ssssssssssssooooooo: `\n");                                
    printf("\t\t\t\t\t                 .sssss---ss/.ss`+sss--/sssssssooooo. `\n");                                
    printf("\t\t\t\t\t                  .::::+s/.o`+ss:-ss/.o-:+::///////-.\n");                                
    printf("\t\t\t\t\t                   -osssss/-:ssso`oo`oss/:+sssooo+.\n");                                     
    printf("\t\t\t\t\t                    `:ossssssssss-/-:sssssssssso-`\n");                                      
    printf("\t\t\t\t\t                      `:ossssssss+``ssssssssso:`\n");                                        
    printf("\t\t\t\t\t                        `:osssssss+ossssssso:`\n" );                                         
    printf("\t\t\t\t\t                          `:osssssssssssso:`\n");                                            
    printf("\t\t\t\t\t                            `:ssssssssso:`\n");                                              
    printf("\t\t\t\t\t                              `/ssssso:`\n");                                               
    printf("\t\t\t\t\t                               `/ss/`\n");                                  
    printf("\t\t\t\t\t                                 ``\n\n\n");
	
	printf(" \t\t\t\t\t\t\t1. Cek Kesehatan");arrowhere(1,position);
	printf(" \n\t\t\t\t\t\t\t2. Bantuan\t");arrowhere(2,position);
	printf(" \n\t\t\t\t\t\t\t3. Keluar\t");arrowhere(3,position);
	
	keyPressed=getch();
	
	if(keyPressed == 80 && position !=MAX){
		position++;
	}
	else if(keyPressed == 72 && position!=MIN){
		position--;
	}
	else{
		position=position;
	}
}	
	switch(position){
		case 1:{
			system("cls");
			bmibmr();
			break;
		}
		case 2:{
			system("cls");
			bantuan();
			break;
		}
		case 3:{
			system("cls");
			return 0;
			break;
		}
	}
	
}

int main(){
	menu();
}

