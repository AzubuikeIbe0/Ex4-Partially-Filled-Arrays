#include "Ex4.h"

int main()
{
	
	Ex4 E;
	cout << "This program reads golf scores and shows\n" << "how much each differs from the average. \n";
	cout << "Enter golf scores:\n";
	E.fillArray(score, MAX_NUMBER_SCORES, numberUsed);
	E.showDifference(score, numberUsed);

	return 0;
}
