struct Student

{

	int ID;//поле номер залікової книжки

	int yearOfStudy;//поле курс

	double avgMark;//поле середній бал

};
int main()
{
	Student myStudents[7];

	myStudents[0] = { Tom, 2, true };

	myStudents[1] = { David, 1, true };

	myStudents[2] = { Kate, 2, false };

	myStudents[3] = { Andrew, 3, false };

	myStudents[4] = { Olga, 1, true };

	myStudents[5] = { Mary, 1, true };

	myStudents[6].name = Andrew;

	myStudents[6].yearOfStudy = 2;

	myStudents[6].stipend = true;
	int count = 0;//почи=аткове значення кількості студентів 1 курсу, що отримують стипендію

	for (int i = 0; i < 7; i++)//перебираємо студентів масиву

	{

		if (myStudents[i].yearOfStudy == 1 && myStudents[i].stipend == true)

			//перевірка умови (1 курс, стипендія)

		{

			count++;// збільшення кількості студентів на 1

		}

	}

	float percent = (float)count * 100 / 7;//обчислення відсотка студентів
	
	return 0;
}