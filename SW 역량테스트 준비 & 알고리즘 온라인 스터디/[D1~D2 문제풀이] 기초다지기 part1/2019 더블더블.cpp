#include<iostream>

using namespace std;

int main()
{
	int n, x = 1;
	cin >> n;
	cout << "1 ";
	for (int i = 0; i < 8; i++)
	{
		x = x * 2;
		cout << x << " ";
	}
}