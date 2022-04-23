#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "DZ 03 - 02" << endl;
	cout << endl;

	int dz=0;

	while (dz < 3)
	{
		cout << "Выберите № задания (1-2): "; cin >> dz;

		system("cls");

		switch (dz)
		{
		case 1: {
			cout << "Задание № 1." << endl;
			cout << "Пользователь вводит с клавиатуры время в секундах, прошедшее с начала дня." << endl;
			cout << "Вывести на экран текущее время в часах, минутах и секундах." << endl;
			cout << "Посчитать, сколько часов, минут и секунд осталось до полуночи." << endl;
			cout << endl;

			int hour;
			int minutes;
			int seconds;
			int all_seconds;
			int now_seconds;

			int end_hour;
			int end_minutes;
			int end_seconds;
			int end_all_seconds;

			cout << "Введите время, прошедшее с начала дня в секундах: "; cin >> all_seconds;
			cout << endl;

			if (all_seconds < 86400)
			{
				hour = all_seconds / 3600;
				minutes = all_seconds % 3600 / 60;
				seconds = all_seconds % 3600 % 60;

				cout << "Текущее время: " << endl;
				cout << "Часы: " << hour << endl;
				cout << "Минуты: " << minutes << endl;;
				cout << "Секунды: " << seconds << endl;;
				cout << endl;

				end_all_seconds = 24 * 60 * 60 - all_seconds;

				end_hour = end_all_seconds / 3600;
				end_minutes = end_all_seconds % 3600 / 60;
				end_seconds = end_all_seconds % 3600 % 60;

				cout << "До полуночи осталось: " << endl;
				cout << "Часы: " << end_hour << endl;
				cout << "Минуты: " << end_minutes << endl;
				cout << "Секунды: " << end_seconds << endl;
				cout << endl;
			}

			else cerr << "Ошибка. Введите меньшее число секунд." << endl;

			system("pause");
			system("cls"); 
		}
			  break;

		case 2: {
			cout << "Задание № 2." << endl;
			cout << "Пользователь вводит с клавиатуры время в секундах, прошедшее с начала рабочего дня." << endl;
			cout << "Посчитать, сколько целых часов ему осталось работать если рабочий день - 8 часов." << endl;

			int all_seconds = 0;

			int end_hour = 0;
			int end_minutes = 0;
			int end_seconds = 0;
			int end_all_seconds = 0;

			cout << "Введите время, прошедшее с начала дня в секундах: "; cin >> all_seconds;
			cout << endl;

			if (all_seconds < 28800)
			{
				end_all_seconds = 8 * 60 * 60 - all_seconds;

				end_hour = end_all_seconds / 3600;
				end_minutes = end_all_seconds % 3600 / 60;
				end_seconds = end_all_seconds % 3600 % 60;

				cout << "До конца рабочего дня осталось: " << endl;
				cout << "Часы: " << end_hour << endl;
				cout << "Минуты: " << end_minutes << endl;
				cout << "Секунды: " << end_seconds << endl;
				cout << endl;
			}

			else cerr << "Ошибка. Введите меньшее число секунд." << endl;

			system("pause");
			system("cls");
		}
			  break;

		default:
			break;
		}

	}

	if (dz > 2) cerr << "\t\t\t\tОшибка выбора № задания" << endl;

	system("pause");
	system("cls");

	return 0;
}