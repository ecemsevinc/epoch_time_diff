# Tarih ve Saat Epoch Hesaplama Programı
struct ve union kullanarak kullanıcının girdiği iki farklı tarih ve saat arasındaki zaman farkını hesaplayan bir c programı.Bu program:
Kullanıcıdan iki farklı tarih ve saat bilgisi alır.
Bu bilgileri epoch zamanına (Unix Time) çevirir.
İki tarih bilgisi arasındaki farkı saniye cinsinden hesaplar.
Struct,her üye için ayrı bellek alanı ayırır ve boyutu tüm üyelerin toplamı kadardır.Union ise tüm üyelerin aynı bellek alanını paylaşmalarını sağlar ve boyutu en büyük üyenin boyutu kadardır.
Epoch nedir? 1 Ocak 1970 00.00.00 UTC tarihinden itibaren geçen toplam saniye sayısıdır.Bilgisayarlar tarih ve saat hesaplamalarını epoch üzerinden yapar.Birkaç örnek verilecek olursa:
1 Ocak 1970 00.00.01 tarihinin epoch değeri 1'dir.
2 Ocak 1970 00.00.00 tarihinin epoch değeri ise 86400'dür.(1 gün=24 saat,1 saat=60 dakika,1 dakika=60 saniye olduğundan dolayı 24*60*60 değerinden sonuca ulaşılır.)
