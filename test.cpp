#include<iostream>
using namespace std;
//深拷贝与浅拷贝
//浅拷贝：简单的赋值拷贝
//深拷贝：在堆区申请空间进行拷贝
//示例
//class person
//{
//public:
//	person()
//	{
//		cout << "默认构造函数" << endl;
//	}
//	person(int x)
//	{
//		cout << "有参构造函数" << endl;
//		age = x;
//	}
//	person(const person& p)
//	{
//		cout << "拷贝构造函数" << endl;
//		age = p.age;//这种就是浅拷贝
//	}
//	~person()
//	{
//		cout << "析构函数" << endl;
//	}
//	int age;
//};
//void test1()
//{
//	person p(10);
//	person p1(p);
//	cout << p1.age << endl;//10 （浅拷贝）
//}
//int main()
//{
//	test1();
//	return 0;
//}
//改进1:
//class person
//{
//public:
//	person()
//	{
//		cout << "默认构造函数" << endl;
//	}
//	person(int x,int sheight)
//	{
//		cout << "有参构造函数" << endl;
//		age = x;
//		height = new int(sheight);//申请一块新的空间用于存放数据
//	}
//	person(const person& p)
//	{
//		cout << "拷贝构造函数" << endl;
//		age = p.age;//这种就是浅拷贝
//		height = p.height;
//	}
//	~person()
//	{
//		if (height != NULL)//但这样如果有拷贝构造的话这要调用两次析构函数  即一块空间要释放两次 会出现问题
//		{
//			delete height;
//			height = NULL;
//		}
//		cout << "析构函数" << endl;
//	}
//	int age;
//	int* height;
//};
//void test1()
//{
//	person p(10,175);
//	person p1(p);
//	cout << "年龄：" << p.age << "身高："<<*p.height << endl;
//	cout << "年龄：" << p1.age << "身高：" << *p1.height<<endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//改进2:
//class person
//{
//public:
//	person()
//	{
//		cout << "默认构造函数" << endl;
//	}
//	person(int x, int sheight)
//	{
//		cout << "有参构造函数" << endl;
//		age = x;
//		height = new int(sheight);
//	}
//	person(const person& p)
//	{
//		cout << "拷贝构造函数" << endl;
//		age = p.age;
//		height = new int(*p.height);//再次创建一块新的空间  避免一块空间重复释放 这也是深拷贝
//	}
//	~person()
//	{
//		if (height != NULL)
//		{
//			delete height;
//			height = NULL;
//		}
//		cout << "析构函数" << endl;
//	}
//	int age;
//	int* height;
//};
//void test1()
//{
//	person p(10, 175);
//	person p1(p);
//	cout << "年龄：" << p.age << "身高：" << *p.height << endl;
//	cout << "年龄：" << p1.age << "身高：" << *p1.height << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//初始化列表
//class person
//{
//
//public:
//
//	person(int a,int b,int c):x(a),y(b),z(c)//这个就是初始化列表
//	{
//		;//这个分号加不加都行
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
//类对象作为类成员(探究其谁先被构造，谁先被析构)
//#include<string>
//class phone
//{
//public:
//	phone(string name)
//	{
//		pname = name;
//		cout << "这是Phone的构造函数" << endl;
//
//	}
//	~phone()
//	{
//		cout << "这是phone的析构函数" << endl;
//	}
//	string pname;
//};
//class person
//{
//public:
//
//	person(string name1, string name2):rname(name1),p(name2)
//	{
//		cout << "这是person的构造函数" << endl;
//	}
//	~person()
//	{
//		cout << "这是person的析构函数" << endl;
//	}
//	string rname;
//	phone p;
//};
//void test()
//{
//	person p("张三", "华为");
//	person p1("李四", "华为");
//
//	cout << p.rname << "拿着" << p.p.pname << "手机" << endl;
//	cout << p1.rname << "拿着" << p1.p.pname << "手机" << endl;
//
//}
/*
输出如下：（先构造phone再构造person,先析构person,再析构phone,所以类对象作为类成员首先被构造，后被析构）
这是Phone的构造函数
这是person的构造函数
张三拿着华为手机
这是person的析构函数
这是phone的析构函数
*/

//int main()
//{
//	test();
//	return 0;
//}
//静态成员函数和静态成员变量
/*
静态成员函数和静态成员变量都可以共享一份数据
如果静态成员再类内声明需要在内外初始化
静态成员函数只能访问静态成员变量
静态成员变量和静态成员函数都有权限
*/
//class person
//{
//public:
////private://如果是private权限，则func不可被访问
//	static void func()
//	{
//		x = 20;//可以修改x的值
//		//y = 10;//不可以，静态成员函数只能访问静态成员变量，这个func函数相当于一个独立的函数，而y没有在这个函数内声明
//		cout << "这是static func的调用" << endl;
//	}
//	static int x;
//	int y;
//};
//int person::x = 10;//不能写成x=10  要指明作用域  类外声明
//
//void test()
//{
//	person p;
//	p.func();
//	person::func();//也可以这样调用 指明作用域
//	cout << p.x << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//类的对象特征-成员函数与成员变量分开存储
//况1
//class person
//{
//public:
//
//};
//void test()
//{
//	person p;
//	cout << "sizeof(p)=" << sizeof(p) << endl;//1  空类占用一个字节空间用于区分其他类
//}
//int main()
//{
//	test();
//	return 0;
//}
//况2
//class person
//{
//public:
//	int x;//加了一个非静态成员变量
//};
//void test()
//{
//	person p;
//	cout << "sizeof(p)=" << sizeof(p) << endl;//4  有成员函数后空类的所占空间归还操作系统
//}
//int main()
//{
//	test();
//	return 0;
//}
//况3
//class person
//{
//public:
//	int a;
//	static int b;
//};
//void test()
//{
//	person p;
//	cout << "sizeof(p)=" << sizeof(p) << endl;//4  static int b的加入不影响sizeof(p)
//}
//int main()
//{
//	test();
//	return 0;
//}
//况4
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
//	cout << "sizeof(p)=" << sizeof(p) << endl;//4 static void fun(){}不影响sizeof(p)      void func1(){}不影响sizeof(p)
//}
//int main()
//{
//	test();
//	return 0;
//}
//综上  只有非静态成员变量会影响sizeof(p)
//this指针的用途
//this指针由编译器提供不需要自己创建  
//class person
//{
//public:
//	person(int age)
//	{
//		age = age;//这里编译器把这三个age当成一个age了  即下面的age
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
//解决方法
//class person
//{
//public:
//	person(int age)
//	{
//		this->age = age;//加了this后就有区分了  this事指向p的一个指针 通过*p可以的到p
		//不过我们一般不这样解决  直接让形参与成员变量不重名就行了
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
//this用法2
//class person
//{
//public:
//	person(int age)
//	{
//		this->age = age;
//	}
//	person& addage(person p)//这个&符很重要  没有的话只能加一次 而不能连着加
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












