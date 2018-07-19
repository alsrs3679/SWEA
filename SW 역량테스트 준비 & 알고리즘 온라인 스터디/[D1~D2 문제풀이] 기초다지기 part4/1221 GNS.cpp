//#include<iostream>
//#include<vector>
//#include<string>
//
//#pragma warning (disable:4996)
//
//using namespace std;
//
//int main()
//{
//	int T;
//	cin >> T;
//	for (int test = 1; test <= 10; test++)
//	{
//		int N;
//		char qwe[2], word[4];
//		char wds[10][4] = { "ZRO", "ONE", "TWO", "THR", "FOR", "FIV", "SIX", "SEV", "EGT", "NIN" };
//		vector <int> v;
//		
//		v.assign(10, 0);
//
//		cin >> qwe;
//		cin >> N;
//
//		for (int i = 0; i < N; i++)
//		{
//			scanf("%s", word);
//			if (word[0] == 'Z' && word[1] == 'R' && word[2] == 'O')
//				v[0]++;
//			else if (word[0] == 'O' && word[1] == 'N' && word[2] == 'E')
//				v[1]++;
//			else if (word[0] == 'T' && word[1] == 'W' && word[2] == 'O')
//				v[2]++;
//			else if (word[0] == 'T' && word[1] == 'H' && word[2] == 'R')
//				v[3]++;
//			else if (word[0] == 'F' && word[1] == 'O' && word[2] == 'R')
//				v[4]++;
//			else if (word[0] == 'F' && word[1] == 'I' && word[2] == 'V')
//				v[5]++;
//			else if (word[0] == 'S' && word[1] == 'I' && word[2] == 'X')
//				v[6]++;
//			else if (word[0] == 'S' && word[1] == 'V' && word[2] == 'N')
//				v[7]++;
//			else if (word[0] == 'E' && word[1] == 'G' && word[2] == 'T')
//				v[8]++;
//			else if (word[0] == 'N' && word[1] == 'I' && word[2] == 'N')
//				v[9]++;
//		}
//
//		printf("#%d\n", test);
//
//		for (int i = 0; i < 10; i++)
//		{
//			for (int j = 0; j < v[i]; j++)
//				printf("%s ", wds[i]);
//		}
//
//		printf("\n");
//
//	}
//}



#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int N, test;
	string temp;
	string testcase;
	vector<int> result;

	cin >> test;
	for (int t = 1; t <= test; t++)
	{
		cin >> testcase;

		cin >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> temp;
			if (temp == "ZRO")
				result.push_back(0);
			else if (temp == "ONE")
				result.push_back(1);
			else if (temp == "TWO")
				result.push_back(2);
			else if (temp == "THR")
				result.push_back(3);
			else if (temp == "FOR")
				result.push_back(4);
			else if (temp == "FIV")
				result.push_back(5);
			else if (temp == "SIX")
				result.push_back(6);
			else if (temp == "SVN")
				result.push_back(7);
			else if (temp == "EGT")
				result.push_back(8);
			else if (temp == "NIN")
				result.push_back(9);
		}

		sort(result.begin(), result.end());

		cout << testcase << endl;

		for (int i = 0; i < N; i++)
		{
			switch (result[i])
			{
			case 0:
				printf("ZRO ");
				break;
			case 1:
				printf("ONE ");
				break;
			case 2:
				printf("TWO ");
				break;
			case 3:
				printf("THR ");
				break;
			case 4:
				printf("FOR ");
				break;
			case 5:
				printf("FIV ");
				break;
			case 6:
				printf("SIX ");
				break;
			case 7:
				printf("SVN ");
				break;
			case 8:
				printf("EGT ");
				break;
			case 9:
				printf("NIN ");
				break;
			default:
				break;
			}
		}
		result.clear();
		cout << endl;
	}

}