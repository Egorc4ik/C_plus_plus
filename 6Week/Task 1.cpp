#include <iostream>

using namespace std;

int main(void) {
	int number;
	int tagnum = 0;
	int cnumber = 1;
	int a = 10;
	int count = 1;
	
	cin >> number;
	
	cout << "�����\t" << "̳���" << endl;

	cout << number % a;

	cout << '\t' << cnumber;

	cout << '\n';

	while (cnumber != 0)
	{
	    int cache = number / a % 10;
	    
		cout << cache;

		count++;

		cout << '\t' << count;

		a *= 10;

		cout << '\n';

		if (cache != 9 && cache != 1)
		{
			tagnum += cache;
		}

		cnumber = number / a;
	}

	cout << "���� ����, �� �� ��������� 9 � 1 : " << tagnum;

	return 0;
}