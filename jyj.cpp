//#include <iostream>
//using namespace std;

//void main()
//{
//	int a = 3;
	//int* pa = &a;

	//cout << pa << endl << *pa << endl;
//}




//#include <iostream>
//using namespace std;

//void main()
//{
	//int a = 3;
	//int* pa = &a;

	//cout << pa << endl << *pa << endl;
	//cout << &a << endl << a << endl;
//}

/*#include<iostream>
using namespace std;

class Cperson
{
public:

	const char* m_name;
	int m_age;

	void print()
	{
		cout << "name:" << m_name << endl;
		cout << "age:" << m_age << endl;
	}
};

 void main()
{
	Cperson p[2];

	p[0].m_name = "jang eun june";
	p[0].m_age = 24;
	p[0].print();

	p[1].m_name = "kim na In";
	p[1].m_age = 27;
	p[1].print();


}*/

/*#include <iostream>
using namespace std;

int g_Arr[2][3];

int(*func(int arg)) [2][3]
{
	for(int i = 0; i <2;i++)
	{
		for (int j = 0; j < 3; j++)
		{
			g_Arr[i][j] = arg;

		}
	}
return&g_Arr;
}

void main()
{
	cout << (*func(7))[0][0] << endl;
	cout << (*func(7))[1][2] << endl;

}*/


/*#include<iostream>
using namespace std;

int ga;//0 초기화
int gb = 1;//1 초기화

void main()
{
	int a;//미정의 값 초기화
	int b = 2;//2초기화


	cout << ga << endl;
	cout << gb << endl;
	cout << a << endl;
	cout << b << endl;
	}*/
/*#include<iostream>
using namespace std;

void main()
{
	auto a = 1;
	cout<< a <<endl;

}*/

#include<iostream>
using namespace std;

/*double Divide(int a, int b)
{
	return(double)a / b;
}
void main()
{
	auto r = Divide(1, 2);// auto->double
	cout << r << endl;
}*/
const int Add(int a, int b)
{
	return a + b;
}

int& GetRef(int& arg)
{
	return arg;

}

void main()
{
	auto s = Add(1, 2);
	s = 7;
	cout << s << endl;

	int a = 1;

	auto r1 = Getref(a);
	r1++;
	cout << a << endl;
}




























































