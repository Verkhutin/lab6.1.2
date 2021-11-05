#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;


void Create(int a[], const int n, int i) {
		a[i] = -50 + rand() * 66 / RAND_MAX;
		if (i < n)
			Create(a, n, i+1);
}

void PrintArr(int a[], const int n, int i) {
	cout << "| " << setw(4) << a[i] << " |";
	if (i < n)
		PrintArr(a, n, i + 1);
}

int Amount(int a[], const int n, int am, int i) {
	
		if (a[i] < 0 || a[i] % 2 == 1)
			am ++;
		if (i < n)
		return Amount(a, n, am, i + 1);
		else
			return am;
}

int Sum(int a[], int n, int s, int i) {
	if (i<=n){
	if (a[i] < 0 || a[i] % 2 == 1)
			s += a[i];
		return s + Sum(a, n, 0, i + 1);
	}
	else
			return 0;
}

void Zero(int a[], int n, int i) {
		if (a[i] < 0 || a[i] % 2 == 1)
			a[i] = 0;
		if (i < n)
			Zero(a, n, i + 1);
}



int main() {
	const int n = 24;
	int a[n];

	srand((unsigned)time(NULL));

	cout << "Array: " << endl;
	Create(a, n-1, 0);
	PrintArr(a, n-1, 0);
	cout << endl;
	cout << endl;
	cout << "Amount = " << Amount(a, n-1, 0, 0) << endl;
	cout << endl;
	cout << "Sum = " << Sum(a, n-1, 0, 0) << endl;
	cout << endl;
	Zero(a, n-1, 0);
	PrintArr(a, n-1, 0);

	return 0;
}