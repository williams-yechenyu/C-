#include<iostream>
using namespace std;
#include<stdio.h>
//第一种解决方式，直接包含源文件
//#include"person.cpp"
//第二种解决方式，将.h和.cpp中的内容写到一起，将后缀名改为.hpp（类模板）文件
#include"person.hpp"

//类模板分文件编写问题以及解决
//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//	T1 m_name;
//	T2 m_age;
//};

//template<class T1,class T2>
//Person<T1,T2>::Person(T1 name, T2 age)
//{
//	this->m_name = name;
//	this->m_age = age;
//}
//
//template<class T1,class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "姓名：" << this->m_name << "年龄：" << this->m_age << endl;
//}

void test01()
{
	Person<string, int>P("Jerry", 18);
	P.showPerson();
}
int main()
{
	test01();
}
