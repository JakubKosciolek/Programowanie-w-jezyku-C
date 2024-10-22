#include <stdio.h>

main()
{
	// + - * / % - mod
	// > < <= >= != ==
	// AND OR NOT && || ! &

	/*int choise; // 1 a b

	switch (choise)
	{
	case 1: //ciag instrukcji
		break;
	case 2: //ciag instrukcji
		break;
	default: //ciag instrukcji
		break;
	}
	*/

	/*
	int a = 32, b = 2;
	printf("Suma %d + %d = %d\n", a, b, (a + b));

	if (a > b) printf("a jest wieksze od b");
	else if(a==b)
	{
		printf("a jest rowne b");
	}
	else {
		printf("b jest wieksze od a");
	}
	*/

	/* zadanie 1
	int nrAlbumu = 12345;
	printf("Nr albumu: %d ", nrAlbumu);
	*/

	/* zadanie 2
	int a;
	printf("podaj liczbe: ");
	scanf_s("%d", &a);

	if (a % 2 == 0) printf("Liczba parzysta");
	else
		printf("Liczba nieparzysta");
	*/

	/* zadanie 3
	float a, b;
	printf("Podaj liczbe: "); scanf("%f", &a);
	printf("Podaj liczbe: "); scanf("%f", &b);

	if (a > b) printf("Liczba %.2f > %.1f", a, b);
	else if (b > a)
	{
		printf("liczba %.1f >%.2f\n", b, a);
	}
	else printf("Liczby sa rowne\n");
	*/

	/* zadanie 4
	float a, b,c,d;
	printf("Podaj liczbe: "); scanf("%f", &a);
	printf("Podaj liczbe: "); scanf("%f", &b);
	printf("Podaj liczbe: "); scanf("%f", &c);
	printf("Podaj liczbe: "); scanf("%f", &d);

	double wynik = (a + b + c + d) / 4;

		printf("srednia arytmetczna =%.3lf", wynik);
	*/

	int kalk;
	kalk = 0;
	int a, b, wynik;
	printf("=========Kalkulator=======\n");
	printf("1.Suma\n");
	printf("2.roznica\n");
	printf("3.iloczyn\n");
	printf("4.iloraz\n");
	printf("5.Wyjscie\n");
	printf("========================\n");

	printf("wybierz opcje: "); scanf_s("%d", &kalk);

	switch (kalk){
	case 1:
		printf("Podaj liczbe: "); scanf_s("%d", &a);
		printf("Podaj liczbe: "); scanf_s("%d", &b);

		wynik = (a + b);

		printf("Suma %d + %d = %d\n", a, b, wynik);
		break;
	case 2:
		printf("Podaj liczbe: "); scanf_s("%d", &a);
		printf("Podaj liczbe: "); scanf_s("%d", &b);

		wynik = (a - b);

		printf("wynik %d - %d = %d\n", a, b, wynik);

		break;
	case 3:
		printf("Podaj liczbe: "); scanf_s("%d", &a);
		printf("Podaj liczbe: "); scanf_s("%d", &b);

		wynik = (a * b);

		printf("wynik %d * %d = %d\n", a, b, wynik);

		break;
	case 4:
		printf("Podaj liczbe: "); scanf_s("%d", &a);
		printf("Podaj liczbe: "); scanf_s("%d", &b);

		wynik = (a / b);

		printf("wynik %d / %d = %d\n", a, b, wynik);

		break;
	case 5:
		return 0;
		break;
	} 
}