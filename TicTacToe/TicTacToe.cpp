#include <iostream>
#include <string>

using namespace std;

int main()
{
	char a = '1';
	char b = '2';
	char c = '3';
	char d = '4';
	char e = '5';
	char f = '6';
	char g = '7';
	char h = '8';
	char i = '9';
	char O = 'O';
	char X = 'X';
	char turn;
	int move;

	for (int j = 0; j < 9; j++) {

		if (a == O && b == O && c == O || d == O && e == O && f == O || g == O && h == O && i == O || a == O && d == O && g == O || b == O && e == O && h == O || c == O && f == O && i == O || a == O && e == O && i == O || c == O && e == O && g == O || a == X && b == X && c == X || d == X && e == X && f == X || g == X && h == X && i == X || a == X && d == X && g == X || b == X && e == X && h == X || c == X && f == X && i == X || a == X && e == X && i == X || c == X && e == X && g == X) {
		cout << a << " | " << b << " | " << c << endl;
		cout << "---------" << endl;
		cout << d << " | " << e << " | " << f << endl;
		cout << "---------" << endl;
		cout << g << " | " << h << " | " << i << endl;

		if (j % 2 == 0)
			cout << "GAME OVER. Y WINS!" << endl;
		else
			cout << "GAME OVER. X WINS!" << endl;

		break;
	}

	else {

		cout << a << " | " << b << " | " << c << endl;
		cout << "---------" << endl;
		cout << d << " | " << e << " | " << f << endl;
		cout << "---------" << endl;
		cout << g << " | " << h << " | " << i << endl;

		cout << "Your move:" << endl;
		cin >> move;

		
			if (j % 2 == 0)
				turn = 'O';
			else
				turn = 'X';

		switch (move)
		{
		case 1:
			a = turn;
			break;
		case 2:
			b = turn;
			break;
		case 3:
			c = turn;
			break;
		case 4:
			d = turn;
			break;
		case 5:
			e = turn;
			break;
		case 6:
			f = turn;
			break;
		case 7:
			g = turn;
			break;
		case 8:
			h = turn;
			break;
		case 9:
			i = turn;
			break;

		default:
			cout << "Not an option. Try again!" << endl;
			}
		}
	} 
}