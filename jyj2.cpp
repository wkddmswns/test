/*#include<iostream>
using namespace std;

void main()
{
	int a, b;

	a = 1;
	cout << ++a << endl;

	a = 1;
	b = ++a;
	cout << b << endl;

	a = 1;
	cout << a++ << endl;
	

	a = 1;
	b = a++;
	cout << b << endl;

	a = 1;
	++a;
	cout << a << endl;
	a = 1;
	a++;
	cout << a << endl;

}*/
#include <iostream>
using namespace std;

/*void main()
{

	int a = 4;
	++a = 1;
	cout << a << endl;
}*/
/*void main()
{
	int a = 0;
	if (a = 1)
	{
		cout << "a==1" << endl;
	}
	else
	{
		cout << "a!= 1" << endl;
	}
}�� �����ڴ� ������ ���̾ƴ϶� 0,1 ���� �������� ����س��� */
/*void main()
{
	int a = 3;
	cout << !!a << endl;
}*/
/*  int Func()
{
	cout << "Func" << endl;
	return 1;
}
	void main()
	{
		if(0&&Func()) /*���⼭ 0 �̾ƴ϶� 1�� ������ Func , main �� ��µȴ�*/
		/* {
			cout << "main" << endl;
		}
	} *//*   && = AND*/


/*���� ������ (~)*/

/*void main()
{
	cout << ~5 << endl; ��Ʈ��-6
	cout << !0 << endl; ���� 1
}*/

	/*��Ʈ �� �� �� ������ (& I ^)*/
 /*void main()
{
	int a = 3;
	int b = 7;


	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	cout << a << "" << b << endl;
}*/

/*��Ʈ �̵� ������ << , >>*/

  /*void main()
{
	char c = 1;

	c =c<< 7;
	cout << +c << endl;

	c = c >> 7;
	cout << +c << endl;
}*/
/*void main()
{
	char c;
	c = 2; /*00000010 = 2*/
/*	c = c >> 1;/*00000001 = 1*/
/*	cout << +c << endl;

	c = -126;/*10000010 = -126*/
/*	c = c >> 1;/*1100001 = -63*/
	/*cout << +c << endl;
}*/

/*���� ������*/

/*int NOT(int arg)
{
	return arg ? 0 : 1;

}
void main()
{
	cout << NOT(3) << "" << NOT(0) << endl;
}*/

/*sizeof = (���� , ������ ����ũ�⸦ Ȯ���ҋ� ���*/
/*void main()
{
	cout << sizeof(char) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(double) << endl;


	char c;
	int i;
	double d;
	int arr[4];

	cout << sizeof(c) << endl;
	cout << sizeof(i) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(arr) << endl;
}*/


/*Ÿ�Ժ�ȯ ������*/
/*void main()
{
	cout << fixed;
	cout.precision(0);


	int i = 3.141592;
float  f = 67108870;

	cout << i << "" << f << endl;
}*/

/*����� Ÿ�� ��ȯ*/
/*void main()
{
	cout << 1 / 2 << endl;
	cout << (double)1 / 2 << endl;
}*/


