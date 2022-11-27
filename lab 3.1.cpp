#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void Checkstep(int step)//провірка кроку
{
	if (step<=0)
	{
		throw "Помилка";
		
	}
}
void checkb(double b,double a)//провірка діапазону
{
	if (b>a)
	{
		throw "Error";
	}
}
double REsult2(double a, double b, int k, double step, double x)//логіка програми
{
	string path = "FILEIPZ.txt";
	ofstream fout;

	fout.open(path, ofstream::app);//відкриваєм файл і якщо буде програма повторюватися дані будуть записуватися і далі

	if (!fout.is_open())//якщо файл не відкрився
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
	fout.close();//закриття
	return x;
}


void main()
{
	double a, b, k = 1;
	setlocale(LC_ALL, "ru");
	cout << "Лабораторна робото номер 3:" << endl;
	cout << "Уведіть межі інтервалу від а до b" << endl;
	cin >> a >> b;
	checkb(a, b);
	cout << "Уведіть крок" << endl;
	int step;
	double x=0;
	cin >> step;
	Checkstep(step);
	REsult2(a, b, k, step, x);
}