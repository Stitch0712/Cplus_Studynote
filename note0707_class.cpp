#include <iostream>
#include <string>

using namespace std;

class Student
{
//三种访问权限
//公共权限 public		成员 类内可以访问，内外也可以访问，可继承
//保护权限 protected	成员 类内可以访问，类外不可以访问，可继承
//私有权限 private		成员 类内可以访问，类外不可以访问，不可继承
public:
	//成员
	//对象属性（成员属性、成员变量）
	string m_name;
	string m_IDnum;

	//对象行为（成员函数、成员方法）
	void Setname(string name) {
		m_name = name;
	}

	void SetIDnum(string IDnum) {
		m_IDnum = IDnum;
	}

	void Showname() {
		cout << m_name << endl;
	}

	void ShowIDnum() {
		cout << m_IDnum << endl;
	}
protected:
private:

};

//成员私有化操作
//可以设置成员属性的可读可写权限
//可以检查输入数据的有效性
class Person
{
public:
	//设置成员属性m_name可读可写
	void Setname(string name) {
		m_name = name;
	}
	string Getname() {
		return m_name;
	}
	//设置成员属性m_password仅可写
	void Setpaaword(int password) {
		m_password = password;
	}
	//设置成员属性m_ID仅可读
	int GetID() {
		return m_ID;
	}

	void Setage(int age) {
		if (age < 0 || age>150) {
			cout << "\nage input error!"<<endl;
			return;
		}
		m_age = age;
	}
	int Getage(){
		return m_age;
	}
protected:
private:
	string m_name;
	int m_age = 0;
	int m_password;
	int m_ID = 123456;
};



int main() {
	Student s1;			//实例化
	s1.Setname("wang");
	s1.SetIDnum("88888888");
	s1.Showname();
	s1.ShowIDnum();

	Person p1;
	p1.Setname("wang");
	cout << "\n姓名：" << p1.Getname() ;
	cout << "\nID：" << p1.GetID();			//ID仅可读
	p1.Setpaaword(88888888);				//password仅可写
	p1.Setage(20);
	cout << "\n年龄：" << p1.Getage()<<endl;
	system("pause");
	return 0;
}