#include <iostream>
using namespace std;

template <typename T>
T* Resize(T* arr, int& size, int count)
{
	T* newarray = new T[size + count];
	for (int i = 0; i < size; i++)
	{
		*(newarray + i) = *(arr + i);
		//newarray[i] = arr[i];
		cout << newarray[i];
	}
	delete[] arr;
	size += count;
	return newarray;
}

template <typename T>
T* Push_back(T* arr, int& size, const T& value)
{
	T* newarray = Resize(arr, size, 1);
	newarray[size + 1] = value;
	return newarray;
}

void Show(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl;
}

int main()
{
	int arraysize = 10;
	int* arr = new int[arraysize] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	Show(arr, arraysize);
	arr = Push_back(arr, arraysize, 34);
	Show(arr, arraysize);
}