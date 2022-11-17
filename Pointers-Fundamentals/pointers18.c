#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
int cash = 100;
char* a[3] = { "Jack","Quene","King"};
void play(int bet)
{
	srand(time(0));
	int guass;
	printf("Shufling");
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	puts("");
	for (int i = 0; i < 5; i++)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		int hold = a[x];
		a[x] = a[y];
		a[y] = hold;
	}
	do {

	printf("E");Sleep(50);
	printf("n");Sleep(50);
	printf("t"); Sleep(50);
	printf("e"); Sleep(50);
	printf("r ");Sleep(50);
	printf("T"); Sleep(50);
	printf("h"); Sleep(50);
	printf("e "); Sleep(50);
	printf("P"); Sleep(50);
	printf("l"); Sleep(50);
	printf("a"); Sleep(50);
	printf("c"); Sleep(50);
	printf("e "); Sleep(50);
	printf("O"); Sleep(50);
	printf("f "); Sleep(50);
	printf("Q"); Sleep(50);
	printf("u"); Sleep(50);
	printf("e"); Sleep(50);
	printf("n"); Sleep(50);
	printf("e >"); Sleep(50);
	scanf("%d", &guass);
	if (!(guass >= 1 && guass <= 3))
	{
		printf("Entre Correct locations\n");
	}
	} while (!(guass >= 1 && guass <= 3));
	if (a[guass - 1] =="Quene" )
	{
		printf("Good Guassed\n");
		cash = cash + 3 * bet;
		printf("Postions Of Cards:\n1.%s\n2.%s\n3.%s \n", a[0], a[1], a[2]);
	}
	else
	{
		printf("Wrong Guassed\n");
		cash = cash - bet;
		printf("Postions Of Cards:\n1.%s\n2.%s\n3.%s \n", a[0], a[1], a[2]);

	}
}
int main()
{
	puts("Rules:");
	puts("In This Game You have to Guass the Postion of Quene In Cards");
	puts("1.You have to Enter betting Amount");
	puts("2.If You Guassed Corectly You will receive Triple Amount ");
	puts("3.If You Guassed Wrong Your will loss entered Amount");
	puts("4.If You do not want to Further play bet by by amount $0");
	puts("5.Do not enter larger amount you have");

	while (cash > 0)
	{
		puts("*************Simple Virtual Cash Betting Game***********\n\n");
		printf("your amount left:$%d\n", cash);
		int bet;
		printf("Postions Of Cards:\n1.%s\n2.%s\n3.%s \n", a[0], a[1], a[2]);
		printf("Enter betting Amount :$");
		scanf("%d", &bet);
		if (bet == 0)
		{
			break;
		}
		if (bet > cash)
		{
			printf("you have only $%d \nPlease Enter within this Range \n\n",cash);
			Sleep(2000);
			system("cls");
			continue;
		}

		play(bet);
		Sleep(5000);
		system("cls");
	}
	printf("Game Ended \n");
	printf("Your Money :$%d \n",cash);




	return 0;
}
