#include<iostream>
using namespace std;
//
//void main() {
//	unsigned short year;
//
//	cout << "년도를 입력하세요" << endl;
//	cin >> year;
//	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
//		cout << "윤년입니다" << endl;
//
//	else
//		cout << "평년입니다" << endl;
//        
//
//	}
//

//void main() 학점 구하는 식
//{
//	unsigned short s;
//
//	cout << "점수를 입력하세요" << endl;
//	cin >> s;
//	if (s >= 90 && s <= 100)
//		cout << "a학점 입니다" << endl;
//	else if (s >= 80 && s < 90)
//		cout << "b학점입니다" << endl;
//	else if (s >= 70 && s < 80)
//		cout << " c학점 입니다" << endl;
//	else
//		cout << "당신은 벌레입니다" << endl;
//
//	
//}

//int Add(int a, int b)
//{
//	return a + b;
//}
//void main()
//{
//	int a, b;
//
//	switch (Add(1, 2)) /* 여기서의 숫자는 case의 숫자이다 그리고 switch로 지정은햇지만 break를 걸어주지않으면 밑에 값도 출력된다*/
//	{
//
//	case 0:
//	case 1:
//	case 2:
//	case 3:
//		a = 3;
//		b = 7;
//		if (1)
//			cout << Add(a, b) << endl;
//		break;
//
//	case 4:
//		a = 30;
//		b = 70;
//		if (1)
//			cout << Add(a, b) << endl;
//
//	}
//
//}
//



//void main() /*스위치 를 이용한 학점 만들기 기억해서 공부해라 씨발아*/
//{
//	unsigned short s;
//	cout << " 점수를 입력하세요" << endl;
//	cin >> s;
//
//	switch (s / 10) /*10으로 나눈다고 생각해라 씨바라 90을 10으로 나누면 9니까 case 9 지정이다 씨발로마 보면서 공부좀해라*/
//	{
//
//	case 10:
//		cout << "a+학점입니다" << endl;
//		break;/* 브레이크 걸어서 밑에 꺼 출력안되게 잘설정해라 씨바라*/
//	case 9:
//		cout << "a학점입니다" << endl;
//		break;
//	case 8:
//		cout << "b학점입니다" << endl;
//		break;
//	case 7:
//		cout << "c학점입니다" << endl;
//		break;
//	case 6:
//		cout << "d학점 입니다" << endl;
//		break;
//	case 5:case 4: case 3: case 2: case 1:
//		cout << "당신은 벌레입니다" << endl;
//		break;
//	}
//
//}

//void main() /*for문을 사용해서 1 부터 10까지 더하는 방법*/
//{
//	int Sum = 0;
//	for (int i = 0; i <101; i++)
//		Sum += i;
//	cout << Sum << endl;
//	
//}

//void main()
//{
//	int Sum = 0;
//	int i = 0;
//	for (;;)
//	{
//		Sum += i;
//		i++;
//			/*if (i > 10)
//				break;*/
//	}
//	cout << Sum << endl;
//}

//void main()/* while문*/
//{
//	int Sum = 0;
//	int i = 0;
//	while (i < 11)
//	{
//		Sum += i;
//		i++;
//	}
//	cout << Sum << endl;
//}
//void main()              for문으로 곱셈
//{
//
//
//	int Sum = 1;
//
//	int num;
//
//	cout << "정수를 입력하세여" << endl;
//	cin >> num;
//
//		for (int i = 1; i <= num; i++)
//		{
//			Sum = Sum * i;
//			cout << "i=" << i << " , Sum = " << Sum << endl;
//		}
//	
//	cout << "최종값 = " << Sum << endl;
//}
//void main() /*정수를 입력받아 소수인지아닌지 확인하는 프로그램*/
//
//{
//	int Num;
//	int flag = 1;
//	cout << " 양의 정수를 입력하세요" << endl;
//	cin >> Num;
//	for (int i = 2; i < Num; i++)
//	{
//		if (Num % i == 0)
//			flag = 0;
//
//	}
//	if (flag == 1)
//		cout << "입력한 정수는 소수입니다" << endl;
//	else
//	cout << "입력한 정수는 소수가아님" << endl;
//		
//}
//void main()
//{
//	for (int i = 2; i < 10; i++)
//	{
//		for (int j = 1; j < 10; j++)
//			cout << i << "*" << j << "=" << i * j << endl;
//		cout << endl;
//	}
int main() {
    for (int n = 2; n <= 100; n++) {
        bool isPrime = true;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << n << " ";
        }
    }
    cout << endl;
    return 0;

}

		