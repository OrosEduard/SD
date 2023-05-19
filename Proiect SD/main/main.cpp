//SECTIUNEA B,PROBLEMA 10

#include <iostream>

using namespace std;

int main()
{
	int n,x, s=0,nr=0,i, inv=0;

	cout << "Da-ti numarul:";
	cin >> n;
	x = n;
	while (x)
	{
		s = s + x % 10;
		x = x / 10;
		nr++;
	}
	
	for (i = 1; i <= nr; i++)
	{
		while (n) {
			inv = inv*10 + n % 10;
			n = n / 10;
		}
	}

	cout << "a)Suma cifrelor numarului este:"<<s << endl;
	cout << "b)Inversul numarului este:" << inv<<endl;
	
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
