#include <iostream>
using namespace std;

int main() {
	double d = 1.5152124151251;
	float f = (float) d;
	float f2 = float(d);
	//	Fraction f1(1,2);
	//	int i = int(f1);
  int a = 12345667;
  double* p;
  //  p = &a; // this doesn't work.the compiler knows I am being stupid
  p = (double*)&a;
  cout << *p << '\n';
}
