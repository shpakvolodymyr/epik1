#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	
	cout << endl;
	if ((x != 0 && x != 1) || (y != 0 && y != 1) || (z != 0 && z != 1)) {
		cout << " error " << endl;
		return 0;
	}
	else
	{
		int a, b, c, d, e, f;
		if (y == z)
			a = 1;
		else
			a = 0;
		if (x == z)
			b = 1;
		else
			b = 0;
		if (a == 1 && b == 0)
			c = 0;
		else
			c = 1;
		if (c == 1 && b == 0)
			e = 0;
		else
			e = 1;
		if (x == y)
			d = 1;
		else
			d = 0;
		if (d == 1 && e == 0)
			f = 0;
		else
			f = 1;
cout<< endl;
cout << "1-(y<->z)" << endl;
cout << "2-(z<->x)" << endl;
cout << "3-((y<->z)->(z<->x))" << endl;
cout << "4-(x<->z)" << endl;
cout << "5-(((y<->z)->(z<->x))->(x<->z))" << endl;
cout << "6-(x<->y)" << endl;
cout << "7-(x<->y)->(((y<->z)->(z<->x))->(x<->z))" << endl;
cout << endl;
cout << "x y z  1 2 3 4 5 6 7" << endl;
		cout << endl;
	cout << " " << " " << " " << "    " << a << " " << b << " " << c << " " << b << " " << e << " " << d << " " << f << endl;
	cout << endl;
	for (x = 0; x <= 1; x++)
		for (y = 0; y <= 1; y++)
			for (z = 0; z <= 1; z++)
			{
				cout << x << " " << y << " " << z << "  ";
				if (y == z)
					a = 1;
				else
					a = 0;
				if (x == z)
					b = 1;
				else
					b = 0;
				if (a == 1 && b == 0)
					c = 0;
				else
					c = 1;
				if (c == 1 && b == 0)
					e = 0;
				else
					e = 1;
				if (x == y)
					d = 1;
				else
					d = 0;
				if (d == 1 && e == 0)
					f = 0;
				else
					f = 1;
				cout << a << " " << b << " " << c << " " << b << " " << e << " " << d << " " << f << endl;
			}
		return 0;
	}
}