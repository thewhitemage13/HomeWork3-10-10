#include <iostream>
using namespace std;

void degree(int a)
{
	if (a < 2)
	{
		cout << "no";
	}
	if (a == 2)
	{
		cout << "yes" << "\n";
	}

	int b=0;

	if (a > 2)
	{
		b++;
		degree(a / 2);
	}
}

int main()
{
	int a;
	cin >> a;
	degree(a);
}