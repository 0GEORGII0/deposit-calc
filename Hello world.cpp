#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
	int d, x, s;


	cout << "Na skolko dnei vklad" << endl;
	cin >> d;
	while (d > 365) {
		cout << "nelza bokshe" << endl;
		cin >> d;

	}
	
	cout << "Summa" << endl;
	cin >> x;
	while (x < 1000)
	{
		cout << "nelza mensje 1000" << endl;
		cin >> x;
	}

	
	return 0;
}