#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int testcase, T, N, temp;
	vector <int> v;
	cin >> testcase;

	for (int T = 1; T <= testcase; T++)
	{
		v.clear();
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> temp;
			v.push_back(temp);
		}
		
		for (int i = 0; i < N - 1; i++)
		{
			for (int j = i + 1; j < N; j++)
			{
				if (v[i] > v[j])
				{
					temp = v[i];
					v[i] = v[j];
					v[j] = temp;
				}
			}
		}
		cout << "#" << T << " ";
		for (int i = 0; i < N; i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
	}
}