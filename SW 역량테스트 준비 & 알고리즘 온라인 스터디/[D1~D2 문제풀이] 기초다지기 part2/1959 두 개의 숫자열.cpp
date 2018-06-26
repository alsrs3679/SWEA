#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int x, testcase, temp, sum, a, b, max = 0;
	vector <int> v1, v2;

	cin >> testcase;

	for (x = 1; x <= testcase; x++)
	{
		max = 0;
		v1.clear();
		v2.clear();
		cin >> a >> b;
		for (int i = 0; i < a; i++)
		{
			cin >> temp;
			v1.push_back(temp);
		}
		for (int i = 0; i < b; i++)
		{
			cin >> temp;
			v2.push_back(temp);
		}

		if (a < b)
		{
			for (int i = 0; i < b - a + 1; i++)
			{
				sum = 0;
				for (int k = i; k < a + i; k++)
				{
					sum = sum + v1[k - i] * v2[k];
				}
				if (max < sum)
					max = sum;
			}
		}
		else if (a > b)
		{
			for (int i = 0; i < a - b + 1; i++)
			{
				sum = 0;
				for (int k = i; k < b + i; k++)
				{
					sum = sum + v1[k] * v2[k - i];
				}
				if (max < sum)
					max = sum;
			}
		}
		else
		{
			sum = 0;
			for (int k = 0; k < a; k++)
			{
				sum = sum + v1[k] * v2[k];
			}
			max = sum;
		}

		cout << "#" << x << " " << max << endl;
	}
}