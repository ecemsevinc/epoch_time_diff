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
