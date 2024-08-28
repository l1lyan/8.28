#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//int g_a = 6;//全局变量
//const int c_a = 8;//全局常量
//int main()
//{
//	int a = 10;//局部变量：不在全局区
//	
//	static int s_a = 20;//静态变量
//	//常量：字符串常量和const修饰的常量（const修饰的全局变量、const修饰的局部变量）
//	"hello world";//字符串常量
//	const int c_a = 30;//局部常量：不在全局区
//
//	
//	system("pause");
//	return 0;
//}
// 
//在堆区开辟数据
//int * func()
//{
//	int* p = new int(10);
//	//在堆区上开辟一块内存，然后把内存的编号返回，用指针接收这块内存
//	//指针本质也是局部变量，放在栈上，指针保存的数据放在堆区
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
//	int a = 10;//局部变量在栈区上
//	int* p = &a;
//	return p;//不可以返回局部变量地址
//}
//int main()
//{
//	int* p = func();
//	cout << *p << endl;//10
//	cout << *p << endl;//随机值
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
//	cout << *p << endl;//内存已经被释放，再次访问就是非法访问，会报错
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
//	int& b = a;//引用时必须初始化，一旦初始化后就不可再修改
//	int c = 20;
//	b = c;//赋值操作，不是更改引用
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

////1.不要返回局部变量的引用值
//int& test01()
//{
//	int a = 10;
//	return a;
//}
////2.函数的调用可以作为左值
//int& test02()
//{
//	static int a = 10;//静态变量，存放在全局区，在程序结束后完后释放
//	return a;
//}
//int main()
//{
//	int& ref = test01();
//	cout << ref << endl;//10：因为编译器做了保留
//	cout << ref << endl;//随机值：因为a的内存已经释放
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
	//ref1 = 40;//报错，不可修改
	//cout << ref1 << endl;
}
int main()
{
	int a = 10;
	//int& ref = 10;//错误，引用必须引一块合法的内存空间
	const int& ref = 10;
	//加上const后，编译器将代码修改为：int temp=10; const int &ref=temp;
	//ref = 20;//报错，ref不可修改

	//常量引用，修饰形参
	int b = 20;
	show(b);
	cout << b << endl;//30
	int c = 40;
	show1(c);
	cout << c << endl;//40
	system("pause");
	return 0;
}