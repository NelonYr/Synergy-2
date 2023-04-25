#include <iostream>

using namespace std;

int main()
{
	// Ex 2
	int array[10];
	int temp = 0;
	double sum = 0;
	cout << "Odd numbers\nArray: ";

	for (int i = 0; i < 10; i++)
	{
		array[i] = (2 * i + 1);
		cout << array[i] << " ";
	}
	// Ex 3
	cout << "\nSort array: ";

	for (int i = 0; i < 10; i++)
	{
		for (int i2 = 0; i2 < 10 - i; i2++)
		{
			if (array[i2] < array[i2 + 1])
			{
				temp = array[i2 + 1];
				array[i2 + 1] = array[i2];
				array[i2] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << " ";
		sum += array[i];
	}
	cout << "\nAverage value of the numbers: " << sum / 10 << "\n";

	// Ex 4
	int array2[10];
	int x = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter " << i << " number: ";
		cin >> x;
		array2[i] = x;
	}
	// —ортируем массив
	for (int i = 0; i < 10; i++)
	{
		for (int i2 = 0; i2 < 10 - i; i2++)
		{
			if (array2[i2] < array2[i2 + 1])
			{
				temp = array2[i2 + 1];
				array2[i2 + 1] = array2[i2];
				array2[i2] = temp;
			}
		}
	}
	// “.к массив отсортирован от большего к меньшему, то нужно вывести нулевой элемент дл€ нахождени€ максимума
	cout << "The maximum number in the array: " << array2[0];

}