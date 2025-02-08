#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Epoch Nedir? 1 Ocak 1970 00.00.00 UTC tarihinden itibaren geçen toplam saniye sayýsýný gösterir.
//Bilgisayarlar tarih ve saat hesaplamalarýný epoch üzerindne yapar.
/*Bu program,kullanýcýdan tarih ve saat alýr.
Epoch zamanýna çevirir.
Zaman farkýný hesaplar ve ekrana yazdýrýr. */

// Union yapýsý ile tarih ve saati hem struct tm olarak hem de epoch olarak saklanýr.
union DateTime{
	time_t epoch; //epoch zamaný
	struct tm dateTimeInfo; //tarih ve saat bilgisi
};

//Kullanýcýdan tarih alýp epoch'a çeviren fonksiyon:
time_t getTimeValue(){
	union DateTime dateTime; //zaman yapýsýný sýfýrlar.çöp bellek deðerinden kaçýnýp temiz baþlangýç yapmak amacýyla.

	printf("Tarih ve saat giriniz (Yil Ay Gun Saat Dakika Saniye): \n");
	scanf("%d %d %d %d %d %d",&dateTime.dateTimeInfo.tm_year,  &dateTime.dateTimeInfo.tm_mon,  &dateTime.dateTimeInfo.tm_mday,    &dateTime.dateTimeInfo.tm_hour, &dateTime.dateTimeInfo.tm_min,  &dateTime.dateTimeInfo.tm_sec);
	 dateTime.dateTimeInfo.tm_year -=1900; //yýl 1900'den baþladýðý için düzeltiliyor.
	 dateTime.dateTimeInfo.tm_mon -= 1; //Ay 0'dan baþldýðý için düzeltiliyor.
	return mktime(&dateTime.dateTimeInfo); //epoch zamanýna çevriliyor.
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
