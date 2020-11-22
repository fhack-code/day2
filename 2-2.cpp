#include <iostream>
using namespace std;

class A
{
public:
	int a = 100;

};

//类对象所占用的空间
//int main()
//{
//	//对象结构的发展和演化
//	//c++对象模型逐步建立起来
//	//1>非静态的成员变量跟着类对象走（存在对象内部），也就是每个类对象都有自己的成员变量；
//	A aobj;
//	int ilen = sizeof(aobj);
//	cout << ilen << endl;
//
//	return 1;
//}