#include <iostream>
#include <string>



/*  --------------------------------------------------------------------------------
   --DİZİLERDE VERİ GÜVENLİĞİ VE DO-WHILE PROTOKOLÜ--
--------------------------------------------------------------------------------
* Giriş Validasyonu (Input Validation) -> Kullanıcıdan indeks alırken "if(index < 0 ||
  index > 4)" gibi sınır kontrolleri yapmak ŞARTTIR. Yapılmazsa bellek taşması
  (Buffer Overflow) siber açığı doğar.

* do-while Döngüsü -> Şart ne olursa olsun, döngü içerisindeki kodların EN AZ BİR KERE
  çalıştırılması gereken durumlarda (Kullanıcı menüleri, oyun arayüzleri vb.) kullanılır.
  Kontrol mekanizması (şart) en sonda çalışır.

* switch-case Entegrasyonu -> Kullanıcının yaptığı seçime göre (Yazma:1, Okuma:2)
  farklı iş kollarına (case) dallanmayı sağlayan en temiz kontrol yapısıdır.
================================================================================ */
// dizilerde dışarıdan değer yazıp okumak
int main()
{
    double myValue,myNumbers[5]={0,0,0,0,0};// yani index numarası en fazla 4 olabilir 0 dan başladığı için mantığı kavra birde burada 0 ları yazmamızın sebebi başta 0 a eşitleyip oranın boş olduğunu söylüyoruz yoksa ram den saçma değerler getirebilir
    int index,choice;
    do
    {
        cout<<" Make a choice (exit:-1)\n";
        cout<<"\t1. write to array\n";
        cout<<"\t2. read to array\n";
        cin>>choice;
        if(choice==-1)break;
        if(choice!=1 && choice!=2)
        {
            cout<<"are you kidding us!\n";
            continue;
        }
        cout<<"Enter array index:";
        cin>>index;
        if(index<0 || index>4)
        {
            cout<<"index must be in the range of 0-4\n";
            continue;
        }
        switch(choice)
        {
        case 1:
       cout << "Enter the value:"; 
        cin >> myValue;              // Kullanıcının klavyeden girdiği sayıyı myValue içine kaydeder (Örn: 45.5)
        myNumbers[index] = myValue;  //  myNumbers dizisinin daha önce seçilen 'index' numaralı kutusuna bu değeri atar!
         cout << "write operation is successful\n\n"; // 4. "Yazma başarılı" mesajı basar
    break;                       
         case 2:
    // Dizi kutusunda ne saklanıyorsa onu ekrana yazdırır!
    cout << "myNumbers[" << index << "] = " << myNumbers[index] << "\n";
    break;

        }
    }
    while(choice!=-1);



    return 0;
}













