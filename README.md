# Tarih ve Saat Epoch Hesaplama Programı
<p>Bu proje,C programlama dili ile yazılmış,struct ve union kullanılarak tarih ve saat farkını epoch üzerinden hesaplama uygulamasıdır.Kullanıcıdan iki farklı tarih ve saat girişi alarak epoch zamanına dönüştürür ve aradaki farkı epoch cinsinden hesaplar.</p>
<p>Struct,her üye için ayrı bellek alanı ayırır ve boyutu tüm üyelerin toplamı kadardır.Union ise tüm üyelerin aynı bellek alanını paylaşmalarını sağlar ve boyutu en büyük üyenin boyutu kadardır.</p>
<p><b>Epoch nedir? </b></p> <p>1 Ocak 1970 00.00.00 UTC tarihinden itibaren geçen toplam saniye sayısıdır.Bilgisayarlar tarih ve saat hesaplamalarını epoch üzerinden yapar.Birkaç örnek verilecek olursa:</p>
<p>1 Ocak 1970 00.00.01 tarihinin epoch değeri 1'dir.</p>
<p>2 Ocak 1970 00.00.00 tarihinin epoch değeri ise 86400'dür.(1 gün=24 saat,1 saat=60 dakika,1 dakika=60 saniye olduğundan dolayı 24*60*60 değerinden sonuca ulaşılır.)</p>
<h1>Kullanılan Bileşenler:</h1>
<h3>Kütüphaneler</h3>
<h5>stdio.h kütüphanesi:</h5>
<p>printf ve scanf gibi giriş çıkış fonksiyonlarını kullanabilmek amacıyla eklenmiştir.</p>
<h5>stdlib.h</h5>
<p>Genel amaçlı yardımcı fonksiyonlar içerir.</p>
<h5>time.h kütüphanesi:</h5>
<p>Zaman ve tarih işlemleri yapabilmek amacıyla eklenmiştir.</p>
<h3>struct tm Yapısı:</h3>
<p>time.h kütüphanesindne gelen zaman bilgisi tutan özel bir yapıdır.</p>
<p>{0}yapısı ile belleğin sıfırılanması sağlanır ve bellekte çöp veri kalması önlenir.</p>
<h6>İçindeki Yapılar:</h6>
<p>tm_year:yılı ifade eder.1900'den itibaren hesaplanır.</p>
<p>tm_mon:ayı gösterir.0 ile 11 arasındadır.Ocak ayı,0.ay olarak kabul edilir.</p>
<p>tm_mday:günü gösterir.0 ile 31 arasındadır.</p>
<p>tm_hour:saati gösterir.0 ile 23 arasındadır.</p>
<p>tm_min:dakikayı gösterir.0 ile 59 arasındadır.</p>
<p>tm_sec:saniyeyi gösterir.0 ile 59 arasındadır.</p>
<h3>mktime() Fonksiyonu:</h3>
<p>struct tm yapısındaki tarih ve saati epoch zamanına (Unix Time)dönüştürür.</p>
<p>mktime(),zaman bilgisini saniye cinsinden döndürür.</p>
<h3>difftime() Fonksiyonu:</h3>
<p>İki tarih bilgisi arasındaki farkı saniye cinsinden hesaplar.</p>
<p>difftime(time_t t2,time_t t1) ifadesi,t2-t1 hesapkaması yapar.</p>
<h3>Kullanıcıdan Tarih Alımı:</h3>
<p>scanf fonksiyonu yardımıyla kullanıcıdan sırasıyla yıl,ay,gün,saat,dakika ve saniye bilgisi alınır.</p>
<p><h5>Düzeltmeler:</h5></p>
<p>zaman.tm_year -=1900; ifadesi ile epoch kavrammında yıl 1900'den itibaren başladığı için düzeltme yapılır.</p>
<p>zaman.tm_mon -=1; ifadesi ile epoch kavframında ay 0'dan başladığı için düzeltme yapılır.</p>
<h3>main() Fonksiyonu:</h3>
<p>main fonksiyonu içinde kullanıcıdan iki tarih alınır ve epoch zamanına çevrilir,iki tarih arasındaki fark hesaplanarak sonuçlar ekrana yazdılır.</p>
<h1>Özellikler</h1>
<p>Kullanıcıdan yıl,ay,gün,saat,dakika,saniye formatında tarih ve saat bilgisi alınır.</p>
<p>Girilen değerler epoch zamanına dönüştürülür.</p>
<p>İki tarih arasındaki farkı saniye cinsinden hesaplar ve ekrana yazdırır.</p>
<h1>Kullanım</h1>
<p>1.Program çalıştırılır.</p>
<p>2.Kullanıcıdan iki farklı tarih ve saat bilgisi alınır.</p>
<p>3.İki farklı tarih ve saat bilgisi epoch zamanına çevrilir ve aradaki fark epoch cinsinden hesaplanır.</p>
<h3>Örnek Kullanım:</h3>
27 Haziran 2000 tarihi 13.15.00 saatinden 8 Şubat 2025 14.30.00 tarih ve saate kadar geçen süreyi epoch cinsinden program yardımıyla hesaplamak istersek:
<p><b>Tarih ve saat giriniz (Yil Ay Gun Saat Dakika Saniye):
2000 06 27 13 15 00<p>
<p>Tarih ve saat giriniz (Yil Ay Gun Saat Dakika Saniye):
2025 02 08 14 30 00<p>
<p>Birinci Tarihin Epoch Zamani:962100900<p>
<p>Ikinci Tarihin Epoch Zamani:1739014200<p>
<p>Iki tarih arasindaki fark:776913300 saniye</b>
</p>


