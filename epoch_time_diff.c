#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Epoch Nedir? 1 Ocak 1970 00.00.00 UTC tarihinden itibaren ge�en toplam saniye say�s�n� g�sterir.
//Bilgisayarlar tarih ve saat hesaplamalar�n� epoch �zerindne yapar.
/*Bu program,kullan�c�dan tarih ve saat al�r.
Epoch zaman�na �evirir.
Zaman fark�n� hesaplar ve ekrana yazd�r�r. */

// Union yap�s� ile tarih ve saati hem struct tm olarak hem de epoch olarak saklan�r.
union DateTime{
	time_t epoch; //epoch zaman�
	struct tm dateTimeInfo; //tarih ve saat bilgisi
};

//Kullan�c�dan tarih al�p epoch'a �eviren fonksiyon:
time_t getTimeValue(){
	union DateTime dateTime; //zaman yap�s�n� s�f�rlar.��p bellek de�erinden ka��n�p temiz ba�lang�� yapmak amac�yla.

	printf("Tarih ve saat giriniz (Yil Ay Gun Saat Dakika Saniye): \n");
	scanf("%d %d %d %d %d %d",&dateTime.dateTimeInfo.tm_year,  &dateTime.dateTimeInfo.tm_mon,  &dateTime.dateTimeInfo.tm_mday,    &dateTime.dateTimeInfo.tm_hour, &dateTime.dateTimeInfo.tm_min,  &dateTime.dateTimeInfo.tm_sec);
	 dateTime.dateTimeInfo.tm_year -=1900; //y�l 1900'den ba�lad��� i�in d�zeltiliyor.
	 dateTime.dateTimeInfo.tm_mon -= 1; //Ay 0'dan ba�ld��� i�in d�zeltiliyor.
	return mktime(&dateTime.dateTimeInfo); //epoch zaman�na �evriliyor.
}


int main() {
	time_t epoch1=getTimeValue(); //ilk tarih bilgisi
	time_t epoch2=getTimeValue(); //ikinci tarih bilgisi 
	printf("Birinci Tarihin Epoch Zamani:%ld \n",epoch1);
	printf("Ikinci Tarihin Epoch Zamani:%ld \n",epoch2);
	
	double fark=difftime(epoch2, epoch1);
	printf("Iki tarih arasindaki fark:%.0f saniye \n",fark);
	return 0;
}
