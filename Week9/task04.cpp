#include <iostream>

int main()
{
    int arr[10][10];

    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    std::cout << std::endl;

    std::cout << "Under diagonal: ";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > j)
            {
                std::cout << arr[i][j] << " ";
            }         
        }
    }

    std::cout << std::endl;

    std::cout << "On main diagonal: ";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                std::cout << arr[i][j] << " ";
            }
        }
    }

    std::cout << std::endl;

    std::cout << "Over diagonal: ";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i <  j)
            {
                std::cout << arr[i][j] << " ";
            }
        }
    }

    /////////////////////////

    std::cout << std::endl;

    std::cout << "On second diagonal: ";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j + 1 == n)
            {
                std::cout << arr[i][j] << " ";
            }
        }
    }

    std::cout << std::endl;

    std::cout << "Over second diagonal: ";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j + 1 < n)
            {
                std::cout << arr[i][j] << " ";
            }
        }
    }

    std::cout << std::endl;

    std::cout << "Under second diagonal: ";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j + 1 > n)
            {
                std::cout << arr[i][j] << " ";
            }
        }
    }
}
