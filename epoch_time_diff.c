#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Epoch Nedir? 1 Ocak 1970 00.00.00 UTC tarihinden itibaren geçen toplam saniye sayısını gösterir.
//Bilgisayarlar tarih ve saat hesaplamalarını epoch üzerindne yapar.
/*Bu program,kullanıcıdan tarih ve saat alır.
Epoch zamanına çevirir.
Zaman farkını hesaplar ve ekrana yazdırır. */

// Union yapısı ile tarih ve saati hem struct tm olarak hem de epoch olarak saklanır.
union DateTime{
	time_t epoch; //epoch zamanı
	struct tm dateTimeInfo; //tarih ve saat bilgisi
};

//Kullanıcıdan tarih alıp epoch'a çeviren fonksiyon:
time_t getTimeValue(){
	union DateTime dateTime; ////union nesnesi oluşturulur.


	printf("Tarih ve saat giriniz (Yil Ay Gun Saat Dakika Saniye): \n");
	scanf("%d %d %d %d %d %d",&dateTime.dateTimeInfo.tm_year,  &dateTime.dateTimeInfo.tm_mon,  &dateTime.dateTimeInfo.tm_mday,    &dateTime.dateTimeInfo.tm_hour, &dateTime.dateTimeInfo.tm_min,  &dateTime.dateTimeInfo.tm_sec);
	 dateTime.dateTimeInfo.tm_year -=1900; //yıl 1900'den başladığı için düzeltiliyor.
	 dateTime.dateTimeInfo.tm_mon -= 1; //Ay 0'dan başldığı için düzeltiliyor.
	return mktime(&dateTime.dateTimeInfo); //epoch zamanına çevriliyor.
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
