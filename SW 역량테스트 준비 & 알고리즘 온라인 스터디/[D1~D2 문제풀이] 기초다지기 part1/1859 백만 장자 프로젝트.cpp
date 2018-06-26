#include<iostream>
#include<vector>
#pragma warning (disable : 4996)

using namespace std;

int main()
{
	long x, testcase, N, temp, maxindex_before = 0, maxindex_after = 0, max = 0;
	long resource, count = 0;;

	vector <int> v;

	cin >> testcase;

	for (x = 0; x < testcase; x++)
	{
		max = 0;
		count = 0;
		v.clear();
		resource = 0;
		maxindex_before = 0;
		maxindex_after = 0;
		scanf("%d", &N);
		getchar();
		for (int i = 0; i < N; i++)
		{
			scanf("%d", &temp);
			getchar();
			v.push_back(temp);
			if (max < temp)
			{
				max = temp;
				maxindex_after = i;
			}
		}

		for (int i = maxindex_before; i < maxindex_after; i++)
		{
			resource = resource - v[i];
			count++;
		}
		if(count != 0)
			resource = resource + (max * count);

		while (maxindex_after < N - 1)
		{
			count = 0;
			max = 0;
			maxindex_before = maxindex_after + 1;
			{
				for (int k = maxindex_before; k < N; k++)
				{
					if (max < v[k])
					{
						max = v[k];
						maxindex_after = k;
					}
				}

				for (int i = maxindex_before; i < maxindex_after; i++)
				{
					resource = resource - v[i];
					count++;
				}
				if (count != 0)
					resource = resource + (max * count);

			}
		}
		cout << "#" << x + 1 << " " << resource << endl;

	}
}