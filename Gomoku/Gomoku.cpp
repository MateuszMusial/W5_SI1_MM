
#include <iostream>
#include <vector>

using namespace std;

void printVector2D(vector<vector<char>> v, int n, int m) {

	cout << "   ";
	for (int i = 0; i < m; i++) { 
		cout << (char)('A' + i) << " ";
	}
	cout << endl;
	for (int i = 0; i < v.size(); i++)
	{
		if (i < 10)
			cout << i << "  ";
		else
			cout << i << " ";

		for (int j = 0; j < v[i].size(); j++) {
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}

vector<vector<char>> createVector2D(int m, int n) {

	vector<vector<char>>board;
	for (int j = 0; j < m; j++) {
		vector<char> row;
		for (int i = 0; i < n; i++)
			row.push_back('.');
		board.push_back(row);
	}
	return board;

}


int main() {
	int m;
	int n;
	cout << "Enter number of columns: ";
	cin >> n;
	cout << "Enter number of rows: ";
	cin >> m;


	vector<vector<char>>board = createVector2D(m, n);
	printVector2D(board, m, n);


}




