#include<iostream>

using namespace std;

int main()
{
	int A, B;

	cin >> A >> B;

	int ans = A * 3 - B;

	if (ans == 0 || ans == 5 || ans == 7)
		cout << "A";
	else
		cout << "B";
}