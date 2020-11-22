#include <iostream>
using namespace std;

class A
{
public:
	void func() {};//成员函数
	void func1() {};//成员函数
	void func2() {};//成员函数
	//char ab;//成员变量，char类型占用一个字节内存
	int ab;//int 类型占用4个字节
};

int main()
{
	A obja;
	int ilen = sizeof(obja);//sizeof(A) = 1,为什么sizeof(空类) = 1而不是0
	cout << ilen << endl;

	//类的成员函数 不占用 类对象的内存空间
	//我们已经知道两点：
	//1）成员的函数不占用类对象的内存空间
	//2）一个类对象至少占用1个字节的内存空间
	//obja.ab = 'c';
	//3)成员变量是占用对象的内存空间

	//结论：成员变量是包含在每个对象当中的。是占用对象字节的，
	//而成员函数虽然也写在类的定义中，但成员函数不占对象的字节数（不占内存空间）

	//成员函数 每个类只诞生一个（跟着类走）；而不管你用这个类产生了多少该类的对象

	return 0;
}
