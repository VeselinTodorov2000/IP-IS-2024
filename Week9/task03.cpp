#include <iostream>

void myBubbleSort(int arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}		
	}
}



int main()
{
	int arr[50];

	int len;
	std::cin >> len;

	for (int i = 0; i < len; i++)
	{
		std::cin >> arr[i];
	}

	myBubbleSort(arr, len);

	std::cout << "Sorted array: ";

	for (int i = 0; i < len; i++)
	{
		std::cout << arr[i] << " ";
	}
}
