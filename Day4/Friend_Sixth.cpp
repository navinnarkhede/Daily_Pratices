#include <iostream>
using namespace std;
class First;
class Second
{
private:
    int num2;
public:
    Second(int num2)
    {
        this->num2 = num2;
    }
    int getNum2()
    {
        return num2;
    }
    void disp(First&);
};
class First
{
private:
    int num1;
public:
    First(int num1)
    {
        this->num1 = num1;
    }
    int getNum()
    {
        return num1;
    }
    friend void Second::disp(First& ref);
};
void Second::disp(First& ref)
{
    cout << ref.num1 << endl;
}
int main()
{
    First f1(100);
    Second s1(200);
    cout << f1.getNum() << endl;
    cout << s1.getNum2() << endl;
}