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
}논리 연산자는 변수의 값이아니라 0,1 참과 거짓만을 출력해낸다 */
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
		if(0&&Func()) /*여기서 0 이아니라 1을 넣으면 Func , main 이 출력된다*/
		/* {
			cout << "main" << endl;
		}
	} *//*   && = AND*/


/*반전 연산자 (~)*/

/*void main()
{
	cout << ~5 << endl; 비트값-6
	cout << !0 << endl; 논리값 1
}*/

	/*비트 곱 합 차 연산자 (& I ^)*/
 /*void main()
{
	int a = 3;
	int b = 7;


	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	cout << a << "" << b << endl;
}*/

/*비트 이동 연산자 << , >>*/

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

/*삼항 연산자*/

/*int NOT(int arg)
{
	return arg ? 0 : 1;

}
void main()
{
	cout << NOT(3) << "" << NOT(0) << endl;
}*/

/*sizeof = (변수 , 데이터 값의크기를 확인할떄 사용*/
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


/*타입변환 연산자*/
/*void main()
{
	cout << fixed;
	cout.precision(0);


	int i = 3.141592;
float  f = 67108870;

	cout << i << "" << f << endl;
}*/

/*명시적 타입 변환*/
/*void main()
{
	cout << 1 / 2 << endl;
	cout << (double)1 / 2 << endl;
}*/


