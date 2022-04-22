#include<iostream>
//任务1：继承构造函数
/*		创建基类B及构造函数B（int）,B(char)和派生类D；D中不继承/继承B的Ctor时的效果
	
  任务2：派生类中调用基类构造函数
		D中增加成员double  x;及D（double）,在D（double）初始化列表调用B(i)并初始化x

  任务3：派生类先调用基类ctor，再构造内嵌对象
		增加E及E（int）,并在D中加入E的两个对象；创建D对象观察E  ctor和B  ctor次序

*/
class B
{
public:
	B()
	{
		std::cout << "B()" << std::endl;
    }
	B(int i)
	{
		std::cout << "B("<<i<<")" << std::endl;
	}
	B(char c)
	{
		std::cout << "B(" << c << ")" << std::endl;
	}
};

class E
{
public:
	E() { std::cout << "E()" << std::endl; }
};

class D :public B
{
public:
	using B ::B;//继承中的构造函数
	D() = default;
	/*      
			D():B(){}
	       D(int i):B{i}{}
	*		D(char c){}
	*/
	D(double x) :e1{},e2{}, B{static_cast<int>(x)}//x{ 1.0 }
	{
		std::cout << "D(" << x << ")" << std::endl;
	}
private:
	//double x{ 0.0 };
	E e1, e2;
};

int main()
{
	B b;
	D d;//继承过程中，创建派生类对象的时候，D中的默认构造函数会去调用基类的默认构造函数,41行代码
	D d2{ 3.03 };//相当于调用基类中的构造函数
	
	return 0;
}
