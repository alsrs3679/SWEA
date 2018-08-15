#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int T;
	int N, A, B;
	int R, C;
	long long min;
	long long weight;
	long long first, second;
	int check = 0;
	int a, r, c;

	cin >> T;

	for (int testcase = 1; testcase <= T; testcase++)
	{
		first = 214748364700000;
		cin >> N >> A >> B;

		for (int i = sqrt(N); i > 0; i--)
		{
			weight = 214748364700000;
			R = i;
			a = N / R;
			C = a - 1;

			while(N >= R * (C + 1))
				C++;

			min = A * abs(R - C) + B * (N - R * C);
			if (min < 0)
				continue;
			C--;
			weight = A * abs(R - C) + B * (N - R * C);
			if (weight < 0)
				continue;
			if (min > weight)
				min = weight;
			/*do
			{
				C--;
				weight = A * abs(R - C) + B * (N - R * C);
				if (weight < 0)
					continue;
				if (min > weight)
				{
					check = 1;
					min = weight;
				}
				else
					check = 0;
			} while (check);*/

			second = min;

			if (first > second)
				first = second;
		}

		printf("#%d %ld\n", testcase, first);



	}
}