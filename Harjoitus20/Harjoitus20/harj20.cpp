#include <iostream>
using namespace std;

void main()
{
	int v[5] {0};
	
	int *osoitin;
	osoitin = &v[0];

	do 
	{
		cout << (v[0] + v[1] + v[2] + v[3] + v[4]) / 5 << " km/h" << endl;

		if (osoitin == &v[4])
			osoitin = &v[0];
		else
			osoitin++;

		cout << "Anna nopeus: ";
		cin >> *osoitin;

	} 
	while (!(*osoitin < 0));
}
