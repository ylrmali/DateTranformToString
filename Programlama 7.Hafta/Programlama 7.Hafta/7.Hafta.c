#include <stdio.h>

void main() {

//DÖNGÜLER
	
	// 1-FOR

	/*
	for (int i = 0; i < 10; i++) {

		printf("%d\n", i);
	} 

	for (int i = 0; i <= 15; i++)
		printf("%d\n", i); 
	

	for (int i = 10; i > 3; i++) //sonsuz döngüye girer.Hatalý durum.
	{
		printf("%d ", i);
	}
	

	for (int i = 10; i > 3; i--)
	{
		printf("%d ", i);
	}
	

	int toplam = 0;

	for (int i = 1; i <= 10; i++)
	{
		toplam += i;         //toplam degerini kesinlikle dýþarýda tanýmla yoksa her seferde toplamý 0'lar.
	
	}
	printf("toplam = %d\n", toplam);

	*/

	/*
	for (int i = 0; i < 100; i = i + 7)
	{
		printf("i = %d\n", i);
	}
	*/

	/*
	for (int i = 100; i >= 1; i -= 9)
	{
		printf("i = %d\n", i);
	}
	*/

	/*
	int sayi, toplam=0;
	printf("n degerini giriniz: ");
	scanf_s("%d", &sayi);

	for (int i = 1; i <= sayi; i++) {
		toplam += sayi;
		
	}
	printf("1'den %d 'a kadar olan sayilarin toplami = %d",sayi, toplam);*/

	/*
	int a, b,toplam=0;
	printf("Ýlk ve ikinci sayiyi giriniz: ");
	scanf_s("%d %d", &a, &b);

	for (int i = a; i <= b; i++);
	{
		toplam = toplam + a + b;               //burdaki hatayý çoz

	}
	printf("sayi1 ile sayi iki arasindaki sayilarin toplami = %d", toplam);
	*/

	/*
	for (int i = 1; i <= 100; i++)
	{
		if (i == 49)
			break;
		else;
			printf("%d ", i);
	}
	*/

	/*
	int toplam = 0;
	int sayi;
	

	for (;;) {  //sonsuz döngüye alýr.
		
		printf("Toplamak istediginiz sayi giriniz(Toplamak icin -1'e basiniz):");
		scanf_s("%d", &sayi);

		if (sayi == -1) {
			break;
		}
		else {
			toplam += sayi;
		}

	}
	printf("%d",toplam);
	*/

	// 2 - WHILE
		
	int i = 10;

	/*
	while (i > 1)
	{
		printf("%d ", i);
		i--; 
	}
	*/

	/*
	int sayi = 9;
	int carpim = 4;
	while (sayi >= 1)
	{
		int sonuc = carpim * sayi;
		printf("%d * %d = %d\n", carpim, sayi,sonuc);
		sayi--;
	}
	*/


	/*
	while (1)
	{

		int sayi;
		printf("Bir sayi giriniz(Cikis yapmak icin 0 a basiniz): ");
		scanf_s("%d", &sayi);
		if (sayi == 0) {
			break;
		}
		else {
			printf("%d'nin karesi = %d\n", sayi,sayi*sayi);
		}
	}
	*/

	int sayi,bolum;
	printf("Bir sayi giriniz: ");
	scanf_s("%d", &sayi);
 
	
	if (sayi % 2 == 0) {
		int toplam = sayi
	}


	// *
	// **
	// ***
	// ****
	// *****
	
	//bir sayi girinis:28 mod 
	//28 mukemmel bir sayidir
	//bir sayi giriniz:15
	//15 mukemmel bir sayi degildir.





	getch();

}