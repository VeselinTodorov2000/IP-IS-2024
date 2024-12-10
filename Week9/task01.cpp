#include <iostream>

int main()
{
	int arr[100];
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	for ( ; n > 0; n--)
	{
		std::cout << arr[n - 1] << std::endl;
	}
}
