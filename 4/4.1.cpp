 #include<bits/stdc++.h>


using namespace std;

void swap_pos(int &a, int & b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int partition(int A[], int p, int r)
{
	int x= A[r];
	int i = p - 1;
	for(int j = p; j <= r -1 ; ++j)
	{
		if(A[j] <= x)
		{
			++i;
			swap_pos(A[i], A[j]);
		}
	}
	swap_pos(A[i+1], A[r]);
	return (i+1);
}

void QuickSort(int A[], int p, int r)
{
	if(p < r)
	{
		int q = partition(A, p, r);
		QuickSort(A, p, q-1);
		QuickSort(A, q+1, r);
	}
}

void Print(int A[])
{
	for(int i = 0; i < 10; i++)
	{
		cout << A[i] <<"	";

	}
	cout << endl;
}



int main()
{
	int A[10];
	cout << "Enter any 10 numbers to be sorted ";
	for(int i = 0; i < 10; ++i)
	{
		cin >> A[i];
	}
	cout << "The array is: ";
	Print(A);
	cout << "Array after sorting ";
	QuickSort(A, 0, 9);
	Print(A);

	return 0;
}
