#include <iostream>
using namespace std;

bool IsDigit(char ch)
{
	return '0' <= ch && ch <= '9';
}

int main()
{
	while (true)
	{
		char ch;
		cout << "������������͂��ĉ����� > " << flush;
		cin >> ch;
		if (ch == 'Q' || ch == 'q')
		{
			break;
		}

		if (IsDigit(ch))
		{
			cout << "�����ł��B" << endl;
		}
		else
		{
			cout << "�����ł͂���܂���B" << endl;
		}
	}

	cout << "�I�����܂��B" << endl;

}

