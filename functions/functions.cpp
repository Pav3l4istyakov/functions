#include <iostream>
using namespace std;
//задание1
bool ves(int year)
{
	bool res = false;
	if (year % 4 == 0)
	{
		res = true;
	}

	if (year % 100 == 0)
	{
		res = false;
	}

	if (year % 400 == 0)
	{
		res = true;
	}

	return res;

}

int date(int day, int mounth, int year)
{
	int data;
	switch (mounth - 1)
	{
	case 12:
		data += 31;
	case 11:
		data += 30;
	case 10:
		data += 31;
	case 9:
		data += 30;
	case 8:
		data += 31;
	case 7:
		data += 31;
	case 6:
		data += 30;
	case 5:
		data += 31;
	case 4:
		data += 30;
	case 3:
		data += 31;
	case 2:
		if (ves(data)) data += 29;
		else data += 28;
	case 1:
		data += 31;
	}

	data += (year - 1) * 365 + ((year - 1) / 4);
	return data;
}

int difference(int day1, int day2, int month1, int month2, int year1, int year2)
{
	int diff = date(day1, month1, year1) - date(day2, month2, year2);
	return diff;
}

// задание2
double average(int arr[], int len)
{
	double sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum += arr[i];
	}

	return sum / len;
}

//задание 3
void Mas(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << "\n";
}

void PosNegzero(int arr[], int size)
{
	int pos = 0, neg = 0, zero = 0;
	for (int i = 0; i < size; ++i)
		if (arr[i] > 0) pos++;
		else if (arr[i] < 0) neg++;
		else zero++;

	std::cout << "\nположительные числа\t" << pos << "\nотрицательные числа\t" << neg << "\nнулевые числа:\t" << zero << endl;
}

int main()
{
	setlocale(LC_ALL, "RU");
	//задание 1
	int day1, day2, month1, month2, year1, year2;
	std::cout << "введите первый день: ";
	std::cin >> day1;
	std::cout << "¬ведите первый мес€ц: ";
	std::cin >> month1;
	std::cout << "введите первый год: ";
	std::cin >> year1;
	std::cout << "введите второй день: ";
	std::cin >> day2;
	std::cout << "введите второй мес€ц: ";
	std::cin >> month2;
	std::cout << "введите второй год: ";
	std::cin >> year2;
	std::cout << "разница между датами составл€ет " << difference << " дней\n";
	std::cout << "1-год весокосный  2- не весокосный" << ves << "\n";
	// задание2
	int arr[] = { 10, 20, 30, 40, 50 };

	int len = sizeof(arr) / sizeof(arr[0]);
	std::cout << "среднее арифметическое равно" << average(arr, len);
	// задание 3
	int mas[100]
	{ 0 };

	int number1 = -100, number2 = 100, size = 50;
	std::cout << PosNegzero;

	return 0;
}
    
