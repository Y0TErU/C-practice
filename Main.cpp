#include <iostream>
using namespace std;

//��Βl�����߂�
int Abs(int a)
{
	if (a < 0)
	{
		return -a;
	}
	else
	{
		return a;
	}
}

double Abs(double a)
{
	if (a < 0)
	{
		return -a;
	}
	else
	{
		return a;
	}
}

//���͗p�֐�
//bool�^�Ő^�U�𔻒�
bool InPut(int& i, double& d)
{
	cout << "�����l����͂��ĉ����� >" << flush;
	cin >> i;
	if (i == 0)
	{
		return false;
	}

	cout << "�����l����͂��ĉ����� >" << flush;
	cin >> d;
	if (d == 0)
	{
		return false;
	}

	return true;

}

//�\���p�֐�
void ShowAbs(int i, double d)
{
	cout << i << " �̐�Βl�� " << Abs(i) << "�ŁA" << endl
		<< d << " �̐�Βl�� " << Abs(d) << "�ł��B" << endl;
}

int main()
{
	int i;
	double d;
	while (InPut(i, d))		//while���̒��Œ���bool�^�̕ϐ����������ɂ���(true�Ȃ烋�[�v�𑱂��Afalse�Ȃ烋�[�v�I��)
	{
		ShowAbs(i, d);
	}
}

