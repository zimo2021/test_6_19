#include<iostream>
using namespace std;
//�����ǳ����
//ǳ�������򵥵ĸ�ֵ����
//������ڶ�������ռ���п���
//ʾ��
//class person
//{
//public:
//	person()
//	{
//		cout << "Ĭ�Ϲ��캯��" << endl;
//	}
//	person(int x)
//	{
//		cout << "�вι��캯��" << endl;
//		age = x;
//	}
//	person(const person& p)
//	{
//		cout << "�������캯��" << endl;
//		age = p.age;//���־���ǳ����
//	}
//	~person()
//	{
//		cout << "��������" << endl;
//	}
//	int age;
//};
//void test1()
//{
//	person p(10);
//	person p1(p);
//	cout << p1.age << endl;//10 ��ǳ������
//}
//int main()
//{
//	test1();
//	return 0;
//}
//�Ľ�1:
//class person
//{
//public:
//	person()
//	{
//		cout << "Ĭ�Ϲ��캯��" << endl;
//	}
//	person(int x,int sheight)
//	{
//		cout << "�вι��캯��" << endl;
//		age = x;
//		height = new int(sheight);//����һ���µĿռ����ڴ������
//	}
//	person(const person& p)
//	{
//		cout << "�������캯��" << endl;
//		age = p.age;//���־���ǳ����
//		height = p.height;
//	}
//	~person()
//	{
//		if (height != NULL)//����������п�������Ļ���Ҫ����������������  ��һ��ռ�Ҫ�ͷ����� ���������
//		{
//			delete height;
//			height = NULL;
//		}
//		cout << "��������" << endl;
//	}
//	int age;
//	int* height;
//};
//void test1()
//{
//	person p(10,175);
//	person p1(p);
//	cout << "���䣺" << p.age << "��ߣ�"<<*p.height << endl;
//	cout << "���䣺" << p1.age << "��ߣ�" << *p1.height<<endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//�Ľ�2:
//class person
//{
//public:
//	person()
//	{
//		cout << "Ĭ�Ϲ��캯��" << endl;
//	}
//	person(int x, int sheight)
//	{
//		cout << "�вι��캯��" << endl;
//		age = x;
//		height = new int(sheight);
//	}
//	person(const person& p)
//	{
//		cout << "�������캯��" << endl;
//		age = p.age;
//		height = new int(*p.height);//�ٴδ���һ���µĿռ�  ����һ��ռ��ظ��ͷ� ��Ҳ�����
//	}
//	~person()
//	{
//		if (height != NULL)
//		{
//			delete height;
//			height = NULL;
//		}
//		cout << "��������" << endl;
//	}
//	int age;
//	int* height;
//};
//void test1()
//{
//	person p(10, 175);
//	person p1(p);
//	cout << "���䣺" << p.age << "��ߣ�" << *p.height << endl;
//	cout << "���䣺" << p1.age << "��ߣ�" << *p1.height << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//��ʼ���б�
//class person
//{
//
//public:
//
//	person(int a,int b,int c):x(a),y(b),z(c)//������ǳ�ʼ���б�
//	{
//		;//����ֺżӲ��Ӷ���
//	}
//	int x;
//	int y;
//	int z;
//};
//void test()
//{
//	person p(10, 20, 30);
//	cout << "x=" << p.x << endl;//x=10
//	cout << "y=" << p.y << endl;//y=20
//	cout << "z=" << p.z<< endl;//z=30
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//�������Ϊ���Ա(̽����˭�ȱ����죬˭�ȱ�����)
//#include<string>
//class phone
//{
//public:
//	phone(string name)
//	{
//		pname = name;
//		cout << "����Phone�Ĺ��캯��" << endl;
//
//	}
//	~phone()
//	{
//		cout << "����phone����������" << endl;
//	}
//	string pname;
//};
//class person
//{
//public:
//
//	person(string name1, string name2):rname(name1),p(name2)
//	{
//		cout << "����person�Ĺ��캯��" << endl;
//	}
//	~person()
//	{
//		cout << "����person����������" << endl;
//	}
//	string rname;
//	phone p;
//};
//void test()
//{
//	person p("����", "��Ϊ");
//	person p1("����", "��Ϊ");
//
//	cout << p.rname << "����" << p.p.pname << "�ֻ�" << endl;
//	cout << p1.rname << "����" << p1.p.pname << "�ֻ�" << endl;
//
//}
/*
������£����ȹ���phone�ٹ���person,������person,������phone,�����������Ϊ���Ա���ȱ����죬��������
����Phone�Ĺ��캯��
����person�Ĺ��캯��
�������Ż�Ϊ�ֻ�
����person����������
����phone����������
*/

//int main()
//{
//	test();
//	return 0;
//}
//��̬��Ա�����;�̬��Ա����
/*
��̬��Ա�����;�̬��Ա���������Թ���һ������
�����̬��Ա������������Ҫ�������ʼ��
��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
��̬��Ա�����;�̬��Ա��������Ȩ��
*/
//class person
//{
//public:
////private://�����privateȨ�ޣ���func���ɱ�����
//	static void func()
//	{
//		x = 20;//�����޸�x��ֵ
//		//y = 10;//�����ԣ���̬��Ա����ֻ�ܷ��ʾ�̬��Ա���������func�����൱��һ�������ĺ�������yû�����������������
//		cout << "����static func�ĵ���" << endl;
//	}
//	static int x;
//	int y;
//};
//int person::x = 10;//����д��x=10  Ҫָ��������  ��������
//
//void test()
//{
//	person p;
//	p.func();
//	person::func();//Ҳ������������ ָ��������
//	cout << p.x << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//��Ķ�������-��Ա�������Ա�����ֿ��洢
//��1
//class person
//{
//public:
//
//};
//void test()
//{
//	person p;
//	cout << "sizeof(p)=" << sizeof(p) << endl;//1  ����ռ��һ���ֽڿռ���������������
//}
//int main()
//{
//	test();
//	return 0;
//}
//��2
//class person
//{
//public:
//	int x;//����һ���Ǿ�̬��Ա����
//};
//void test()
//{
//	person p;
//	cout << "sizeof(p)=" << sizeof(p) << endl;//4  �г�Ա������������ռ�ռ�黹����ϵͳ
//}
//int main()
//{
//	test();
//	return 0;
//}
//��3
//class person
//{
//public:
//	int a;
//	static int b;
//};
//void test()
//{
//	person p;
//	cout << "sizeof(p)=" << sizeof(p) << endl;//4  static int b�ļ��벻Ӱ��sizeof(p)
//}
//int main()
//{
//	test();
//	return 0;
//}
//��4
//class person
//{
//public:
//	int x;
//	static void func(){}
//	void func1(){}
//};
//void test()
//{
//	person p;
//	cout << "sizeof(p)=" << sizeof(p) << endl;//4 static void fun(){}��Ӱ��sizeof(p)      void func1(){}��Ӱ��sizeof(p)
//}
//int main()
//{
//	test();
//	return 0;
//}
//����  ֻ�зǾ�̬��Ա������Ӱ��sizeof(p)
//thisָ�����;
//thisָ���ɱ������ṩ����Ҫ�Լ�����  
//class person
//{
//public:
//	person(int age)
//	{
//		age = age;//�����������������age����һ��age��  �������age
//	}
//	int age;
//};
//void test()
//{
//	person p(10);
//	cout << p.age << endl;//-858993460
//}
//int main()
//{
//	test();
//	return 0;
//}
//�������
//class person
//{
//public:
//	person(int age)
//	{
//		this->age = age;//����this�����������  this��ָ��p��һ��ָ�� ͨ��*p���Եĵ�p
		//��������һ�㲻�������  ֱ�����β����Ա����������������
//	}
//	int age;
//};
//void test()
//{
//	person p(10);
//	cout << p.age << endl;//10
//}
//int main()
//{
//	test();
//	return 0;
//}
//this�÷�2
//class person
//{
//public:
//	person(int age)
//	{
//		this->age = age;
//	}
//	person& addage(person p)//���&������Ҫ  û�еĻ�ֻ�ܼ�һ�� ���������ż�
//	{
//		this->age += p.age;
//		return *this;
//	}
//	int age;
//};
//void test()
//{
//	person p(10);
//	p.addage(p).addage(p).addage(p);
//	cout << p.age << endl;//40
//
//}
//int main()
//{
//	test();
//	return 0;
//}












