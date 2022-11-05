#include <stdio.h>

void main() {
	int gun, ay, yil, gunonlar, gunbirler, ayonlar, aybirler, yilbinler, yilyuzler, yilonlar, yilbirler;

	printf("Bir tarih giriniz:(11 11 2021 sekinde giriniz) ");
	scanf_s("%d %d %d", &gun, &ay, &yil);





	//sayilarin basamak degerlerini bulma
	gunonlar = gun / 10;
	gunbirler = gun % 10;
	ayonlar = ay / 10;
	aybirler = ay % 10;
	yilbinler = yil / 1000;
	yilyuzler = (yil - (yilbinler * 1000)) / 100;
	yilonlar = (yil - ((yilbinler * 1000) + (yilyuzler * 100))) / 10;
	yilbirler = yil % 10;

	//gunlerin yaziya cevirilmesi

	if (ay > 12)
		printf("");
	else if (gun > 31)
		printf("---Gun degeri 31'den buyuk olamaz----\n");

	else if (gunonlar == 1) {
		printf("On ");
	}
	else if (gunonlar == 2) {
		printf("Yirmi ");
	}
	else if (gunonlar == 3) {
		printf("Otuz ");
	}

	if (ay > 12)
		printf("");
	else if (gun > 31)
		printf("");
	else if (gunbirler == 1)
		printf("Bir ");
	else if (gunbirler == 2)
		printf("Iki ");
	else if (gunbirler == 3)
		printf("Uc ");
	else if (gunbirler == 4)
		printf("Dort ");
	else if (gunbirler == 5)
		printf("Bes ");
	else if (gunbirler == 6)
		printf("Alti ");
	else if (gunbirler == 7)
		printf("Yedi ");
	else if (gunbirler == 8)
		printf("Sekiz ");
	else if (gunbirler == 9)
		printf("Dokuz ");
	else if (gunbirler == 0)
		printf("");
	if (gun > 31)
		printf("");
	else if (ay > 12)
		printf("");
	else
		printf("- ");

	//aylarin yaziya donustulmesi


	if (ay > 12)
		printf("---Ay degeri 12'den buyuk olamaz-----\n");
	else if (gun > 31)
		printf("");
	else if (ayonlar == 1) {
		printf("On ");
	}


	if (ay > 12)
		printf("");
	else if (gun > 31)
		printf("");
	else if (aybirler == 1)
		printf("Bir ");
	else if (aybirler == 2)
		printf("Iki ");
	else if (aybirler == 3)
		printf("Uc ");
	else if (aybirler == 4)
		printf("Dort ");
	else if (aybirler == 5)
		printf("Bes ");
	else if (aybirler == 6)
		printf("Alti ");
	else if (aybirler == 7)
		printf("Yedi ");
	else if (aybirler == 8)
		printf("Sekiz ");
	else if (aybirler == 9)
		printf("Dokuz ");
	else if (aybirler == 0)
		printf("");
	if (ay > 12)
		printf("");
	else if (gun > 31)
		printf("");
	else
		printf("- ");

	//yillarin yaziya donusturulmesi

	if (ay > 12)
		printf("");
	else if (gun > 31)
		printf("");
	else if (yilbinler == 0)
		printf("");
	else if (yilbinler == 1)
		printf("Bin ");
	else if (yilbinler == 2)
		printf("Ikibin ");
	else if (yilbinler == 3)
		printf("Ucbin ");
	else if (yilbinler == 4)
		printf("Dortbin ");
	else if (yilbinler == 5)
		printf("Besbin ");
	else if (yilbinler == 6)
		printf("Altibin ");
	else if (yilbinler == 7)
		printf("Yedibin ");
	else if (yilbinler == 8)
		printf("Sekizbin ");
	else if (yilbinler == 9)
		printf("Dokuzbin ");


	if (yilyuzler == 0)
		printf("");
	else if (yilyuzler == 1)
		printf("Yuz ");
	else if (yilyuzler == 2)
		printf("Ikiyuz ");
	else if (yilyuzler == 3)
		printf("Ucyuz ");
	else if (yilyuzler == 4)
		printf("Dortyuz ");
	else if (yilyuzler == 5)
		printf("Besyuz ");
	else if (yilyuzler == 6)
		printf("Altiyuz ");
	else if (yilyuzler == 7)
		printf("Yediyuz ");
	else if (yilyuzler == 8)
		printf("Sekizyuz ");
	else if (yilyuzler == 9)
		printf("Dokuzyuz ");

	if (yilonlar == 0)
		printf("");
	else if (yilonlar == 1)
		printf("On ");
	else if (yilonlar == 2)
		printf("Yirmi ");
	else if (yilonlar == 3)
		printf("Otuz ");
	else if (yilonlar == 4)
		printf("Kirk ");
	else if (yilonlar == 5)
		printf("Elli ");
	else if (yilonlar == 6)
		printf("Atmis ");
	else if (yilonlar == 7)
		printf("Yetmis ");
	else if (yilonlar == 8)
		printf("Seksen ");
	else if (yilonlar == 9)
		printf("Doksan ");

	if (yilbirler == 0)
		printf("");
	else if (yilbirler == 1)
		printf("Bir");
	else if (yilbirler == 2)
		printf("Iki");
	else if (yilbirler == 3)
		printf("Uc");
	else if (yilbirler == 4)
		printf("Dort");
	else if (yilbirler == 5)
		printf("Bes");
	else if (yilbirler == 6)
		printf("Alti");
	else if (yilbirler == 7)
		printf("Yedi");
	else if (yilbirler == 8)
		printf("Sekiz");
	else if (yilbirler == 9)
		printf("Dokuz");



	getch();
}