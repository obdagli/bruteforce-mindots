## Min-dist -> Brute-Force Search

### Programın çalışma mantığı

 1. Kullanıcıdan bir “n” değişkeni istenir ve bu değişken oluşturulacak dizinin eleman sayısıdır. Alınan n değişkeni ile dizi oluşturulur ve elemanları kullanıcıdan istenir. Alınan dizi ekrana yazdırıldıktan sonra “bruteforce” yaklaşımı ile en yakın elemanları bulmak için “bf” fonksiyonuna gönderilir.
 2. Burada elemanlar karşılaştırılarak en yakını bulunması amaçlandığından başlangıç olarak minimum uzaklığı belirlemek gerekir. Bunun için “mindist” değişkeni kullanıldı. Gönderilen dizinin ilk iki elemanlarını mutlak değer içerisinde çıkararak default bir “mindist” belirlenir
 3. Daha sonrasında her seçilen eleman sağındaki dizi elemanlarıyla karşılaştırılarak minimum distance bulunmaya çalışılır. Fonkiyon görevini bitirdiğinde ise bulunan diziyi geri döndürür(mindots) ve ekrana yazdırılır.

### Ekran görüntüleri

![image](https://user-images.githubusercontent.com/56681549/110590337-b52b9600-8188-11eb-927c-99f35254f764.png)

