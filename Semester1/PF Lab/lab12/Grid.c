#include <iostream>
using namespace std;


void sleep() {
	int x = 0;
	while (x < 999999)
		x++;
}

int main() {
	const int row = 19, column = 19;
	char grid[row][column];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			if (i == 0 || i == row - 1) {
				if (j == 0 || j == column - 1)
					grid[i][j] = '+';
				else
					grid[i][j] = '-';

			}
			else if (j == 0 || j == column - 1) {
				if (i != 0 || i != row - 1)
					grid[i][j] = '|';
			}
			else
				grid[i][j] = ' ';
		}
	}
	grid[row / 2][column / 2] = '+';
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) 
			cout << grid[i][j];
		cout << "\t";
		for (int j = 0; j < column; j++)
			cout << grid[i][j];
		cout << endl;
	}

	int c;
question:
	cout << "\n0: Shot Right";
	cout << "\n1: Shot Left";
	cout << "\n2: Shot Up";
	cout << "\n3: Shot Down";
	cout << "\n4: Shot All Direction";
	cout << "\nEnter your Choice : ";
	cin >> c;
	if (c == 0) {
		int e = (column / 2) + 1;
		int q = (column / 2) - 1;
	repeat:
		char grid1[row][column];
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++)
				grid1[i][j] = grid[i][j];
		}
		grid[row / 2][e] = '-';
		grid[row / 2][e + 1] = '>';
		grid1[row / 2][q] = '-';
		grid1[row / 2][q - 1] = '<';


		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				if (i != row / 2 && j != e || j == 0 || j == column - 2 || j == column / 2)
					cout << grid[i][j];
				else {
					cout << grid[i][j];
					sleep();
				}
			}
			
			cout << "\t";
			for (int j = 0; j < column; j++) {
				if (i != row / 2 && j != q || j == 0 || j == column - 2 || j == column / 2)
					cout << grid1[i][j];
				else {
					cout << grid1[i][j];
					sleep();
				}
			}
			cout << endl;
		}
				
			
			
		
		grid[row / 2][e] = ' ';
		grid[row / 2][e + 1] = ' ';
		e++;
		grid[row / 2][q] = ' ';
		grid[row / 2][q - 1] = ' ';
		q--;
		if (e == column - 2 && q == 1)
			goto question;
		goto repeat;
	}
	else if (c == 1) {
		int f = (column / 2) + 1;
		int m = (column / 2) - 1;
	repeat1:
		char grid1[row][column];
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++)
				grid1[i][j] = grid[i][j];
		}
		grid[row / 2][m] = '-';
		grid[row / 2][m - 1] = '<';
		grid1[row / 2][f] = '-';
		grid1[row / 2][f + 1] = '>';
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				if (i != row / 2 && j != m || j == 0 || j == column - 2 || j == column / 2)
					cout << grid[i][j];
				else {
					cout << grid[i][j];
					sleep();
				}
			}
		

		cout << "\t";
			for (int j = 0; j < column; j++) {
				if (i != row / 2 && j != f || j == 0 || j == column - 2 || j == column / 2)
					cout << grid1[i][j];
				else {
					cout << grid1[i][j];
					sleep();
				}
			}
		cout << endl;
		}
		grid[row / 2][m] = ' ';
		grid[row / 2][m - 1] = ' ';
		m--;
		grid1[row / 2][f] = ' ';
		grid1[row / 2][f + 1] = ' ';
		f++;
		if (m == 1 && f == column - 2)
			goto question;
		goto repeat1;
	}
	else if (c == 2) {
		int m = (row / 2) - 1;
	repeat2:
		grid[m][column / 2] = '|';
		grid[m - 1][column / 2] = '^';
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				if (i != row / 2 && j != m || j == 0 || j == column - 2 || j == column / 2)
					cout << grid[i][j];
				else {
					cout << grid[i][j];
					sleep();
				}
			}


			cout << "\t";
			for (int j = 0; j < column; j++) {
				if (i != row / 2 && j != m || j == 0 || j == column - 2 || j == column / 2)
					cout << grid[i][j];
				else {
					cout << grid[i][j];
					sleep();
				}
			}
			cout << endl;
		}
		grid[m][column / 2] = ' ';
		grid[m - 1][column / 2] = ' ';
		m--;
		if (m == 1)
			goto question;
		goto repeat2;
	}
	else if (c == 3) {
		int m = (row / 2) + 1;
	repeat3:
		grid[m][column / 2] = '|';
		grid[m + 1][column / 2] = 'v';
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				if (i != row / 2 && j != m || j == 0 || j == column - 2 || j == column / 2)
					cout << grid[i][j];
				else {
					cout << grid[i][j];
					sleep();
				}
			}

			cout << "\t";
			for (int j = 0; j < column; j++) {
				if (i != row / 2 && j != m || j == 0 || j == column - 2 || j == column / 2)
					cout << grid[i][j];
				else {
					cout << grid[i][j];
					sleep();
				}
			}
			cout << endl;
		}
		grid[m][column / 2] = ' ';
		grid[m + 1][column / 2] = ' ';
		m++;
		if (m == row - 2)
			goto question;
		goto repeat3;
	}
	else if (c == 4) {
		int m = (column / 2) + 1;
		int o = (column / 2) - 1;
		int u = (row / 2) - 1;
		int h = (row / 2) + 1;
	repeat4:
		if (m != column - 2) {
			grid[row / 2][m] = '-';
			grid[row / 2][m + 1] = '>';
		}
		if (o != 1) {
			grid[row / 2][o] = '-';
			grid[row / 2][o - 1] = '<';
		}
		if (u != 1) {
			grid[u][column / 2] = '|';
			grid[u - 1][column / 2] = '^';
		}
		if (h != row - 2) {
			grid[h][column / 2] = '|';
			grid[h + 1][column / 2] = 'v';
		}
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				if (i != row / 2 && j != m || j == 0 || j == column - 2 || j == column / 2)
					cout << grid[i][j];
				else {
					cout << grid[i][j];
					sleep();
				}
			}


			cout << "\t";
			for (int j = 0; j < column; j++) {
				if (i != row / 2 && j != m || j == 0 || j == column - 2 || j == column / 2)
					cout << grid[i][j];
				else {
					cout << grid[i][j];
					sleep();
				}
			}
			cout << endl;
		}
		if (m != column - 2) {
			grid[row / 2][m] = ' ';
			grid[row / 2][m + 1] = ' ';
			m++;
		}
		if (o != 1) {
			grid[row / 2][o] = ' ';
			grid[row / 2][o - 1] = ' ';
			o--;
		}
		if (u != 1) {
			grid[u][column / 2] = ' ';
			grid[u - 1][column / 2] = ' ';
			u--;
		}
		if (h != row - 2) {
			grid[h][column / 2] = ' ';
			grid[h + 1][column / 2] = ' ';
			h++;
		}
		if (m == column - 2 && o == 1 && u == 1 && h == row - 2)
			goto question;
		goto repeat4;
	}
	else {
		cout << "Wrond Option\n";
		goto question;
	}
	system("pause");
	return 0;
}