#include<iostream>

using namespace std;

int main()
{
	int N, count, num;;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		num = i;
		count = 0;
		while (num != 0)
		{
			if ((num % 10) % 3 == 0)
			{
				count++;
				if (num % 10 == 0)
					count--;
			}
			num = num / 10;
		}
		if (count == 0)
			cout << i << " ";
		else
		{
			for (int k = 0; k < count; k++)
				cout << "-";
			cout << " ";
		}
	}
}