#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void Checkstep(int step)//������� �����
{
	if (step<=0)
	{
		throw "�������";
		
	}
}
void checkb(double b,double a)//������� ��������
{
	if (b>a)
	{
		throw "Error";
	}
}
double REsult2(double a, double b, int k, double step, double x)//����� ��������
{
	string path = "FILEIPZ.txt";
	ofstream fout;

	fout.open(path, ofstream::app);//�������� ���� � ���� ���� �������� ������������� ��� ������ ������������ � ���

	if (!fout.is_open())//���� ���� �� ��������
	{
		cout << "error" << endl;
	}
	for (int i = 1; i < b; )
	{
		if (a + step * k > b)
		{
			break;
		}
		x = a + step * k;

		i = i + step;
		cout << "x" << k << " = " << x << endl;
		k++;
		fout << x << endl;
	}
	fout.close();//��������
	return x;
}


void main()
{
	double a, b, k = 1;
	setlocale(LC_ALL, "ru");
	cout << "����������� ������ ����� 3:" << endl;
	cout << "������ ��� ��������� �� � �� b" << endl;
	cin >> a >> b;
	checkb(a, b);
	cout << "������ ����" << endl;
	int step;
	double x=0;
	cin >> step;
	Checkstep(step);
	REsult2(a, b, k, step, x);
}