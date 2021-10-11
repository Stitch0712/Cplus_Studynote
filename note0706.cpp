#include <iostream>
#include <string>

using namespace std;

//引用作形参
void Swap(int &a,int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	//利用new运算符调用释放堆区内存
	int * p = new int(10);		//用new创建数据返回的是该数据类型的指针
	cout << *p << endl;
	delete p;					//用delete可以删除指针，释放指针指向的堆区内存空间
	int * arr = new int[10];	//用new创建数组是返回的是该数组的头地址
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i * 2;			//调用new创建的数组方式与一般数组类似
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	delete arr;					//用delete释放空间


	//引用的用法
	int a = 10,c = 20;
	int &b = a;		//引用定义必须初始化，且不能改变
	b = c;			//给b赋值c（20），a同时会改变
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	a = 10;
	int &d = c;
	Swap(b,d);
	cout << "a = " << a << endl;
	cout << "c = " << c << endl;
	system("pause");
	return 0;
}