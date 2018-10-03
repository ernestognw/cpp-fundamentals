// referenceExc
// Ernesto García A00820783
// Creado en Tue Oct  2 10:44:20 CDT 2018

#include <iostream>
using namespace std;

void modulo1(int x, int &y)
{
int a;
a = x + 1;
y = x + a;
x = x * 2;
}
int modulo2(int &a, int b)
{
a = a + b;
b = b * 2;
return a;
}
int main()
{
int a = 2, b = 4, c = 6;
modulo1(b, c);
cout<<a<<" "<<b<<" "<<c<<endl;
c = modulo2(b, a);
cout<<a<<" "<<b<<" "<<c<<endl;
return 0;
}