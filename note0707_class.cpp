#include <iostream>
#include <string>

using namespace std;

class Student
{
//���ַ���Ȩ��
//����Ȩ�� public		��Ա ���ڿ��Է��ʣ�����Ҳ���Է��ʣ��ɼ̳�
//����Ȩ�� protected	��Ա ���ڿ��Է��ʣ����ⲻ���Է��ʣ��ɼ̳�
//˽��Ȩ�� private		��Ա ���ڿ��Է��ʣ����ⲻ���Է��ʣ����ɼ̳�
public:
	//��Ա
	//�������ԣ���Ա���ԡ���Ա������
	string m_name;
	string m_IDnum;

	//������Ϊ����Ա��������Ա������
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

//��Ա˽�л�����
//�������ó�Ա���ԵĿɶ���дȨ��
//���Լ���������ݵ���Ч��
class Person
{
public:
	//���ó�Ա����m_name�ɶ���д
	void Setname(string name) {
		m_name = name;
	}
	string Getname() {
		return m_name;
	}
	//���ó�Ա����m_password����д
	void Setpaaword(int password) {
		m_password = password;
	}
	//���ó�Ա����m_ID���ɶ�
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
	Student s1;			//ʵ����
	s1.Setname("wang");
	s1.SetIDnum("88888888");
	s1.Showname();
	s1.ShowIDnum();

	Person p1;
	p1.Setname("wang");
	cout << "\n������" << p1.Getname() ;
	cout << "\nID��" << p1.GetID();			//ID���ɶ�
	p1.Setpaaword(88888888);				//password����д
	p1.Setage(20);
	cout << "\n���䣺" << p1.Getage()<<endl;
	system("pause");
	return 0;
}