int main()
{

	int arr1[11];
	for (int i = 0; i < 11; i++)
	{

		if (i % 2 == 0)

		{

			arr1[i] = 6 * i - 9;

		}

		else 

		{

			arr1[i] = -9 + 2 * i;

		}

	}
	int size = 11;

	for (int i = 0; i < size - 1; i++)

	{

		for (int j = 0; j < size - i - 1; j++)

		{

			if (arr1[j] > arr1[j + 1])

			{

			int temp = arr1[j];

			arr1[j] = arr1[j + 1];

			arr1[j + 1] = temp;

			}

		}

	}
}