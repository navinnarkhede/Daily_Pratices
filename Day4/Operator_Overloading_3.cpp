#include<iostream>
using namespace std;
class MyClass
{
private:
	int num;

public:
	MyClass()
	{
		cout << "Default constructor" << endl;
	}
	MyClass(int num)
	{
		this->num = num;
	}
	void display()
	{
		cout << "num = " << num << endl;
	}
	/*MyClass operator+(MyClass& ref)
	{
		return MyClass(num + ref.num);
	}
	MyClass operator-(MyClass& ref)
	{
		return MyClass(num - ref.num);
	}
	MyClass operator*(MyClass& ref)
	{
		return MyClass(num * ref.num);
	}
	MyClass operator/(MyClass& ref)
	{
		return MyClass(num / ref.num);
	}
	MyClass operator+=(MyClass& ref)
	{
		this->num = ref.num;
		return *this;
	}
	MyClass operator-=(MyClass& ref)
	{
		this->num -= ref.num;
		return *this;
	}
	MyClass operator*=(MyClass& ref)
	{
		this->num = ref.num;
		return *this;
	}
	MyClass operator/=(MyClass& ref)
	{
		this->num = ref.num;
		return *this;
	}*/
	MyClass operator++()
	{
		return MyClass(++num);
	}
	MyClass operator++(int k)		//dummy
	{
		return MyClass(num++);
	}
	MyClass operator+(int k)
	{
		return MyClass(num + k);
	}
	

	friend MyClass operator+(MyClass&, MyClass&);
	friend MyClass operator-(MyClass&, MyClass&);
	friend MyClass operator*(MyClass&, MyClass&);
	friend MyClass operator/(MyClass&, MyClass&);
	friend MyClass operator+=(MyClass&, MyClass&);
	friend MyClass operator-=(MyClass&, MyClass&);
	friend MyClass operator*=(MyClass&, MyClass&);
	friend MyClass operator/=(MyClass&, MyClass&);
	friend MyClass operator+(int, MyClass&);
	friend MyClass operator-(int, MyClass&);
	friend MyClass operator*(int, MyClass&);
	friend MyClass operator/(int, MyClass&);



};
MyClass operator+(MyClass& ref1, MyClass& ref2)
{
	return MyClass(ref1.num + ref2.num);
}
MyClass operator-(MyClass& ref1, MyClass& ref2)
{
	return MyClass(ref1.num - ref2.num);
}
MyClass operator*(MyClass& ref1, MyClass& ref2)
{
	return MyClass(ref1.num * ref2.num);
}
MyClass operator/(MyClass& ref1, MyClass& ref2)
{
	return MyClass(ref1.num / ref2.num);
}
MyClass operator+=(MyClass& ref1, MyClass& ref2)
{
	return MyClass(ref1.num += ref2.num);
}
MyClass operator-=(MyClass& ref1, MyClass& ref2)
{
	return MyClass(ref1.num -= ref2.num);
}
MyClass operator*=(MyClass& ref1, MyClass& ref2)
{
	return MyClass(ref1.num *= ref2.num);
}
MyClass operator/=(MyClass& ref1, MyClass& ref2)
{
	return MyClass(ref1.num /= ref2.num);
}
MyClass operator+(int k, MyClass& ref)
{
	return MyClass(k + ref.num);
}
MyClass operator-(int k, MyClass& ref)
{
	return MyClass(k - ref.num);
}
MyClass operator*(int k, MyClass& ref)
{
	return MyClass(k * ref.num);
}
MyClass operator/(int k, MyClass& ref)
{
	return MyClass(k / ref.num);

}

int main()
{
	MyClass m1, m2(20), m3(30);
	//m2.display();
	//m3.display();
	//m1 = m2 + m3;	//m1.operator+(m2,m3);
	//m1.display();
	//m1 = m2 - m3;	//m1.operator-(m2,m3);
	//m1.display();
	//m1 = m2 * m3;
	//m1.display();
	//m1 = m2 / m3;
	//m1.display();
	//m1 += m2;			//m1.operator=+(m2);
	//m1.display();
	//m1 -= m3;
	//m1.display();
	//m2 -= m3;
	//m2.display();

	//m2 *= m3;
	//m2.display();
	//m2 /= m3;
	//m2.display();
	
	m1 = m2 + m3;
	m1.display();
	m1 = m2 - m3;
	m1.display();
	m1 = m2 * m3;
	m1.display();
	m1 = m2 / m3;
	m1.display();

	m2 += m3;
	m2.display();
	m2 -= m3;
	m2.display();
	m2 *= m3;
	m2.display();
	m2 /= m3;
	m2.display();

	m1 = ++m3;
	m1.display();
	m1 = m3++;
	m1.display();

	m1 = m3 + 10;
	m1.display();

	m1 = 12 + m3;
	m1.display();

	m1 = 12 - m3;
	m1.display();

	m1 = 12 * m3;
	m1.display();

	m1 = 12 / m3;
	m1.display();
	return 0;
}