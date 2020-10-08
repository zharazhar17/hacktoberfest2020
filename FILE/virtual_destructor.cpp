#include<iostream>
using namespace std;
class B
{
public:
B()
{
cout «"constructing B. "«endl;
bp = new char[5]; }
virtual ~B()
{
cout «"destructing B. "«endl;
delete[ ] bp;
}
private: char *bp;
};
class D : public B
{ public:
D()
{
cout «"constructing D. "«endl;
dp = new char[5000];
}
~D()
{
cout «"destructing D. "«endl;
delete[] dp;
}
private: char *dp;
};
int main()
{
B *ptr = new D();
delete ptr; }
