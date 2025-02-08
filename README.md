# Tarih ve Saat Epoch Hesaplama Programı
Bu proje,C programlama dili ile yazılmış,struct ve union kullanılarak tarih ve saat farkını epoch üzerinden hesaplama uygulamasıdır.Kullanıcıdan iki farklı tarih ve saat girişi alarak epoch zamanına dönüştürür ve aradaki farkı epoch cinsinden hesaplar.
Struct,her üye için ayrı bellek alanı ayırır ve boyutu tüm üyelerin toplamı kadardır.Union ise tüm üyelerin aynı bellek alanını paylaşmalarını sağlar ve boyutu en büyük üyenin boyutu kadardır.
Epoch nedir? 1 Ocak 1970 00.00.00 UTC tarihinden itibaren geçen toplam saniye sayısıdır.Bilgisayarlar tarih ve saat hesaplamalarını epoch üzerinden yapar.Birkaç örnek verilecek olursa:
1 Ocak 1970 00.00.01 tarihinin epoch değeri 1'dir.
2 Ocak 1970 00.00.00 tarihinin epoch değeri ise 86400'dür.(1 gün=24 saat,1 saat=60 dakika,1 dakika=60 saniye olduğundan dolayı 24*60*60 değerinden sonuca ulaşılır.)
# Özellikler
Kullanıcıdan yıl,ay,gün,saat,dakika,saniye formatında tarih ve saat bilgisi alınır.
Girilen değerler epoch zamanına dönüştürülür.
İki tarih arasındaki farkı saniye cinsinden hesaplar ve ekrana yazdırır.
# Kullanım
1.Program çalıştırılır.
2.Kullanıcıdan iki farklı tarih ve saat bilgisi alınır.
3.İki farklı tarih ve saat bilgisi epoch zamanına çevrilir ve aradaki fark epoch cinsinden hesaplanır.
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

