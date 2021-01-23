// Taylor Abbott - Assignment 3 - CS 161 - Sources: http://www.cplusplus.com/doc/tutorial/exceptions/
// User inputs 2 average speeds of cars moving south and west, and the elapsed time.
// The program calculates & outputs shortest distance between the two cars using pythagorean theorem
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	try {
		float avgA, avgB, distA, distB;
		float hour, min, totTime;
		float distC;
		cout << "Enter average speed (mph) of car A: ";
		cin >> avgA;
		cout << endl;
		cout << "Enter average speed (mph) of car B: ";
		cin >> avgB;
		cout << endl;
		cout << "Enter time cars leave intersection (in hours and minutes, separated by a space: ";
		cin >> hour;
		cin >> min;
		cout << endl;
		totTime = (hour * 60.0 + min) / 60.0;
		distA = avgA * totTime;
		distB = avgB * totTime;
		distC = sqrt(pow(distA, 2) + pow(distB, 2));
		cout << "Shortest distance between cars: " << distC << " miles \n";
	}
	catch (int ex)
	{
		cout << "An exception occurred! Ex number: " << ex << endl;
	}

	return 0;

}

