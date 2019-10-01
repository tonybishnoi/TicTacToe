#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
char a[4][4] = { "   ", "   ", "   " };
void display();
char checkwin();
int playturn(char);
int main()
{
	int i;
	char turn = 'X', wn;
	for (i = 0; i < 9; i++)
	{
		display();
		cout << "\nPlayer " << turn << " turn: ";
		if (playturn(turn) != 0)
		{
			turn == 'X' ? turn = 'O' : turn = 'X';
			system("CLS");
			wn = checkwin();
			if (wn != ' ')
				break;
			wn = 'N';
		}
		else
		{
			cout << "\nIllegal move. Try again!\n";
			--i;
		}
	}

	system("cls");
	if (wn == 'N')
		cout << "It's a tie. Nobody won!\n\n";
	else
		cout << "PLAYER " << wn << " WON !!!\n\n";
	display();
	return 0;
}
void display()
{
	int i;
	for (i = 0; i < 3; i++)
	{
		cout << a[i][0] << "|" << a[i][1] << "|" << a[i][2] << "\n";
	}
}
char checkwin()
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		if (a[i][0] == a[i][1] && a[i][1] == a[i][2])
			return a[i][0];
		else if (a[0][i] == a[1][i] && a[1][i] == a[2][i])
			return a[0][i];
	}
	if (a[0][0] == a[1][1] && a[1][1] == a[2][2])
		return a[0][0];
	else if (a[0][2] == a[1][1] && a[1][1] == a[2][0])
		return a[0][2];
	return ' ';
}
int playturn(char ch)
{
	int inp, legal = 1;
	cin >> inp;
	switch (inp)
	{
	case 1:
		a[0][0] == ' ' ? a[0][0] = ch : legal = 0;
		break;
	case 2:
		a[0][1] == ' ' ? a[0][1] = ch : legal = 0;
		break;
	case 3:
		a[0][2] == ' ' ? a[0][2] = ch : legal = 0;
		break;
	case 4:
		a[1][0] == ' ' ? a[1][0] = ch : legal = 0;
		break;
	case 5:
		a[1][1] == ' ' ? a[1][1] = ch : legal = 0;
		break;
	case 6:
		a[1][2] == ' ' ? a[1][2] = ch : legal = 0;
		break;
	case 7:
		a[2][0] == ' ' ? a[2][0] = ch : legal = 0;
		break;
	case 8:
		a[2][1] == ' ' ? a[2][1] = ch : legal = 0;
		break;
	case 9:
		a[2][2] == ' ' ? a[2][2] = ch : legal = 0;
		break;
	default:
		legal = 0;
	}
	return legal;
}
