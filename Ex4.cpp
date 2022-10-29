#include "Ex4.h"

Ex4::Ex4(int score[], int MAX_NUMBER_SCORES, int numberUsed)
{
	this->score = score;
	this->MAX_NUMBER_SCORES = MAX_NUMBER_SCORES;
	this->numberUsed = numberUsed;
}

void Ex4::fillArray(int a[], int size, int& numberUsed)
{
	cout << "Enter up to " << size << " non-negative whole numbers.\n" << "Mark the end of the list with a negative number.\n";
	int next, index = 0;
	cin >> next;
	while ((next >= 0) && (index < size))
	{
		a[index] = next;
		index++;
		cin >> next;
	}

	numberUsed = index;
}

double Ex4::computeAverage(const int a[], int numberUsed)
{
	double total = 0;
	for (int index = 0; index < numberUsed; index++)
		total = total + a[index];
	if (numberUsed > 0)
	{
		return(total / numberUsed);
	}
	else
	{
		cout << "ERROR: number of elements is 0 in computeAverage.\n" << "computeAverage returns 0.\n";

		return 0;
	}

}

void Ex4::showDifference(const int a[], int numberUsed)
{
	double average = computeAverage(a, numberUsed);
	cout << "Average of the " << numberUsed << " scores = " << average << endl << "The scores are:\n";
	for (int index = 0; index < numberUsed; index++)
		cout << a[index] << " differs from the average by " << (a[index] - average) << endl;
}