#include<iostream>
using namespace std;
//
//void main() {
//	unsigned short year;
//
//	cout << "�⵵�� �Է��ϼ���" << endl;
//	cin >> year;
//	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
//		cout << "�����Դϴ�" << endl;
//
//	else
//		cout << "����Դϴ�" << endl;
//        
//
//	}
//

//void main() ���� ���ϴ� ��
//{
//	unsigned short s;
//
//	cout << "������ �Է��ϼ���" << endl;
//	cin >> s;
//	if (s >= 90 && s <= 100)
//		cout << "a���� �Դϴ�" << endl;
//	else if (s >= 80 && s < 90)
//		cout << "b�����Դϴ�" << endl;
//	else if (s >= 70 && s < 80)
//		cout << " c���� �Դϴ�" << endl;
//	else
//		cout << "����� �����Դϴ�" << endl;
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
//	switch (Add(1, 2)) /* ���⼭�� ���ڴ� case�� �����̴� �׸��� switch�� ������������ break�� �ɾ����������� �ؿ� ���� ��µȴ�*/
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



//void main() /*����ġ �� �̿��� ���� ����� ����ؼ� �����ض� ���߾�*/
//{
//	unsigned short s;
//	cout << " ������ �Է��ϼ���" << endl;
//	cin >> s;
//
//	switch (s / 10) /*10���� �����ٰ� �����ض� ���ٶ� 90�� 10���� ������ 9�ϱ� case 9 �����̴� ���߷θ� ���鼭 �������ض�*/
//	{
//
//	case 10:
//		cout << "a+�����Դϴ�" << endl;
//		break;/* �극��ũ �ɾ �ؿ� �� ��¾ȵǰ� �߼����ض� ���ٶ�*/
//	case 9:
//		cout << "a�����Դϴ�" << endl;
//		break;
//	case 8:
//		cout << "b�����Դϴ�" << endl;
//		break;
//	case 7:
//		cout << "c�����Դϴ�" << endl;
//		break;
//	case 6:
//		cout << "d���� �Դϴ�" << endl;
//		break;
//	case 5:case 4: case 3: case 2: case 1:
//		cout << "����� �����Դϴ�" << endl;
//		break;
//	}
//
//}

//void main() /*for���� ����ؼ� 1 ���� 10���� ���ϴ� ���*/
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

//void main()/* while��*/
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
//void main()              for������ ����
//{
//
//
//	int Sum = 1;
//
//	int num;
//
//	cout << "������ �Է��ϼ���" << endl;
//	cin >> num;
//
//		for (int i = 1; i <= num; i++)
//		{
//			Sum = Sum * i;
//			cout << "i=" << i << " , Sum = " << Sum << endl;
//		}
//	
//	cout << "������ = " << Sum << endl;
//}
//void main() /*������ �Է¹޾� �Ҽ������ƴ��� Ȯ���ϴ� ���α׷�*/
//
//{
//	int Num;
//	int flag = 1;
//	cout << " ���� ������ �Է��ϼ���" << endl;
//	cin >> Num;
//	for (int i = 2; i < Num; i++)
//	{
//		if (Num % i == 0)
//			flag = 0;
//
//	}
//	if (flag == 1)
//		cout << "�Է��� ������ �Ҽ��Դϴ�" << endl;
//	else
//	cout << "�Է��� ������ �Ҽ����ƴ�" << endl;
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

		