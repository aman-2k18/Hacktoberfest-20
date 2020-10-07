#include<bits/stdc++.h>
using namespace std;

void bubble(int *a, int n)
{
	int i, j, t;
	for (i = 0; i < n - 1; i++)
	{
		int count = 0;
		for (j = 0; j < n - i - 1; j++)
			if (a[j] > a[j + 1])
			{
				count++;
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}

		if (count == 0)
			break;
	}
}

int main()
{
	int i, n;

	cout << "Enter n : " << endl;
	cin >> n;

	int a[n];

	for (i = 0; i < n; i++)
		cin >> a[i];
	bubble(a, n);

	cout << "Sorted Array : " << endl;
	for (i = 0; i < n; i++)
		cout << a[i] << " ";

	cout << endl;
}
