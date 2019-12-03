#include "iostream"
#include "windows.h"
#include "math.h"


using namespace std;

int main()
{

	double x, y, z;

	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	

	
	z = (x * 1000) / (y * 342);
	cout << "z=" << z << "\n";
	system("pause");
	return 0;
}
