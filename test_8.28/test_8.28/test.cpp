#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//int g_a = 6;//ȫ�ֱ���
//const int c_a = 8;//ȫ�ֳ���
//int main()
//{
//	int a = 10;//�ֲ�����������ȫ����
//	
//	static int s_a = 20;//��̬����
//	//�������ַ���������const���εĳ�����const���ε�ȫ�ֱ�����const���εľֲ�������
//	"hello world";//�ַ�������
//	const int c_a = 30;//�ֲ�����������ȫ����
//
//	
//	system("pause");
//	return 0;
//}
// 
//�ڶ�����������
//int * func()
//{
//	int* p = new int(10);
//	//�ڶ����Ͽ���һ���ڴ棬Ȼ����ڴ�ı�ŷ��أ���ָ���������ڴ�
//	//ָ�뱾��Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣������ݷ��ڶ���
//	return p;
//}
//int main()
//{
//	int* p = func();
//	cout << *p << endl;//10
//	cout << *p << endl;//10
//	system("pause");
//	return 0;
//}

//int* func()
//{
//	int a = 10;//�ֲ�������ջ����
//	int* p = &a;
//	return p;//�����Է��ؾֲ�������ַ
//}
//int main()
//{
//	int* p = func();
//	cout << *p << endl;//10
//	cout << *p << endl;//���ֵ
//	system("pause");
//	return 0;
//}

//int* func()
//{
//	int* p = new int(10);
//	return p;
//}
//void test01()
//{
//	int* p = func();
//	cout << *p << endl;//10
//	cout << *p << endl;//10
//	cout << *p << endl;//10
//	delete p;
//	cout << *p << endl;//�ڴ��Ѿ����ͷţ��ٴη��ʾ��ǷǷ����ʣ��ᱨ��
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int& b = a;//����ʱ�����ʼ����һ����ʼ����Ͳ������޸�
//	int c = 20;
//	b = c;//��ֵ���������Ǹ�������
//	cout << a << endl;//20
//	cout << b << endl;//20
//	cout << c << endl;//20
//	system("pause");
//	return 0;
//}


//void swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	cout << a << endl;//20
//	cout << b << endl;//10
//	system("pause");
//	return 0;
//}

////1.��Ҫ���ؾֲ�����������ֵ
//int& test01()
//{
//	int a = 10;
//	return a;
//}
////2.�����ĵ��ÿ�����Ϊ��ֵ
//int& test02()
//{
//	static int a = 10;//��̬�����������ȫ�������ڳ������������ͷ�
//	return a;
//}
//int main()
//{
//	int& ref = test01();
//	cout << ref << endl;//10����Ϊ���������˱���
//	cout << ref << endl;//���ֵ����Ϊa���ڴ��Ѿ��ͷ�
//
//	int& ref1 = test02();
//	cout << ref1 << endl;//10
//	cout << ref1 << endl;//10
//	test02() = 30;
//	cout << ref1 << endl;//30
//	cout << ref1 << endl;//30
//	system("pause");
//	return 0;
//}

void show(int& ref1)
{
	cout << ref1 << endl;//20
	ref1 = 30;
	cout << ref1 << endl;//30
}
void show1(const int& ref1)
{
	cout << ref1 << endl;//20
	//ref1 = 40;//���������޸�
	//cout << ref1 << endl;
}
int main()
{
	int a = 10;
	//int& ref = 10;//�������ñ�����һ��Ϸ����ڴ�ռ�
	const int& ref = 10;
	//����const�󣬱������������޸�Ϊ��int temp=10; const int &ref=temp;
	//ref = 20;//����ref�����޸�

	//�������ã������β�
	int b = 20;
	show(b);
	cout << b << endl;//30
	int c = 40;
	show1(c);
	cout << c << endl;//40
	system("pause");
	return 0;
}