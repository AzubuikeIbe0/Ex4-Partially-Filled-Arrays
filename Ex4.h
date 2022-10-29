#pragma once
#include <iostream>
#include <array>
using namespace std;

class Ex4
{
private:
	const int MAX_NUMBER_SCORES = 10;
	array<int, 10>score;
	int numberUsed;

public:
	
	void fillArray(int a[], int size, int& numberUsed);
	// In other words a[0] through a[numberUsed-1] have been filled with non -ve integers
	double computeAverage(const int a[], int numberUsed);
	// Returns the average of numbers a[0] through a[numberUsed-1]
	void showDifference(const int a[], int numberUsed);
	// shows how a[i] differs from average
};
