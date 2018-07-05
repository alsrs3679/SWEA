#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector <int> v;
	for (int q = 0; q < 10; q++)
	{
		int T, len_qu, len_str, count = 0, ans = 0;;
		string str, qu;

		cin >> T;
		getchar();
		getline(cin, qu, '\n');
		getline(cin, str, '\n');


		len_qu = qu.size();
		len_str = str.size();

		for (int i = 0; i <= len_str - len_qu; i++)
		{
			for (int j = 0; j < len_qu; j++)
			{
				if (str.at(i + j) == qu.at(j))
					count++;
			}
			if (count == len_qu)
				ans++;

			count = 0;
		}

		v.push_back(ans);

		qu.clear();
		str.clear();

	}
	for (int i = 0; i < 10; i++)
	{
		printf("#%d %d\n", i + 1, v[i]);
	}
}