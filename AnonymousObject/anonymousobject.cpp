#include<iostream>
using namespace std;

class Acount
{
public:
	Acount()
	{
		balance = 0.0;
	}

	Acount(double balance) //可以改写成double balance_
	{
		this->balance = balance;//与上面一致，不使用this指针，改写成balance=balance_
	}

	void deposit(double amount)
	{
		balance += amount;
	}

	double withdraw(double amount)
	{
		auto temp{ 0.0 };
		if (balance < amount)
		{
			temp = balance;
			balance = 0.0;
			return temp;
		}
		else
		{
			balance -= amount;
			return amount;
		}
	}

private:
	double balance;
};


int main()
{
	Acount a1;
	Acount a2 = Acount{ 100.0 };//用匿名对象做拷贝列表初化，默认情况下，对象中的每个数据域都被拷贝到另一对象的对应部分，函数不会拷贝
	a1.deposit(9.0);
	cout << a1.withdraw(10.0) << endl;
	cout << a2.withdraw(56.6) << endl;
	cout << Acount(1000.0).withdraw(1020.0) << endl;//匿名对象在调用的时候，一旦使用完，就不能再找到了，一次性使用的

	return 0;
}


