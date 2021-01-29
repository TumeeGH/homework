#include <iostream>
using namespace std;

int main()
{
float r, d = 0, c = 0, a = 0;
cout << "Enter the radius of the circle::\n";
cin >> r;
d = 2 * r;
c = 2 * 3.14 * r;
a = 3.14 * (r * r);
cout << "\n";
cout << "Diameter = " << d << " units\n";
cout << "Circumference = " << c << " units\n";
cout << "Area = " << a << " sq. units";

return 0;
}
