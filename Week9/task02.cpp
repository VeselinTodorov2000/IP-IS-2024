#include <iostream>

int main()
{
	int arr[10] = { 0 };
	int n;
	std::cin >> n;
	while (n != 0)
	{
		arr[n % 10] ++;
		n /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << "Digit " << i << " " << arr[i] << "times";
	}
}

