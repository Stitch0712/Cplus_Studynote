#include <iostream>
#include <string>

using namespace std;

//�������β�
void Swap(int &a,int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	//����new����������ͷŶ����ڴ�
	int * p = new int(10);		//��new�������ݷ��ص��Ǹ��������͵�ָ��
	cout << *p << endl;
	delete p;					//��delete����ɾ��ָ�룬�ͷ�ָ��ָ��Ķ����ڴ�ռ�
	int * arr = new int[10];	//��new���������Ƿ��ص��Ǹ������ͷ��ַ
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i * 2;			//����new���������鷽ʽ��һ����������
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	delete arr;					//��delete�ͷſռ�


	//���õ��÷�
	int a = 10,c = 20;
	int &b = a;		//���ö�������ʼ�����Ҳ��ܸı�
	b = c;			//��b��ֵc��20����aͬʱ��ı�
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