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
		cout << "�������� � ������� (1-2): "; cin >> dz;

		system("cls");

		switch (dz)
		{
		case 1: {
			cout << "������� � 1." << endl;
			cout << "������������ ������ � ���������� ����� � ��������, ��������� � ������ ���." << endl;
			cout << "������� �� ����� ������� ����� � �����, ������� � ��������." << endl;
			cout << "���������, ������� �����, ����� � ������ �������� �� ��������." << endl;
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

			cout << "������� �����, ��������� � ������ ��� � ��������: "; cin >> all_seconds;
			cout << endl;

			if (all_seconds < 86400)
			{
				hour = all_seconds / 3600;
				minutes = all_seconds % 3600 / 60;
				seconds = all_seconds % 3600 % 60;

				cout << "������� �����: " << endl;
				cout << "����: " << hour << endl;
				cout << "������: " << minutes << endl;;
				cout << "�������: " << seconds << endl;;
				cout << endl;

				end_all_seconds = 24 * 60 * 60 - all_seconds;

				end_hour = end_all_seconds / 3600;
				end_minutes = end_all_seconds % 3600 / 60;
				end_seconds = end_all_seconds % 3600 % 60;

				cout << "�� �������� ��������: " << endl;
				cout << "����: " << end_hour << endl;
				cout << "������: " << end_minutes << endl;
				cout << "�������: " << end_seconds << endl;
				cout << endl;
			}

			else cerr << "������. ������� ������� ����� ������." << endl;

			system("pause");
			system("cls"); 
		}
			  break;

		case 2: {
			cout << "������� � 2." << endl;
			cout << "������������ ������ � ���������� ����� � ��������, ��������� � ������ �������� ���." << endl;
			cout << "���������, ������� ����� ����� ��� �������� �������� ���� ������� ���� - 8 �����." << endl;

			int all_seconds = 0;

			int end_hour = 0;
			int end_minutes = 0;
			int end_seconds = 0;
			int end_all_seconds = 0;

			cout << "������� �����, ��������� � ������ ��� � ��������: "; cin >> all_seconds;
			cout << endl;

			if (all_seconds < 28800)
			{
				end_all_seconds = 8 * 60 * 60 - all_seconds;

				end_hour = end_all_seconds / 3600;
				end_minutes = end_all_seconds % 3600 / 60;
				end_seconds = end_all_seconds % 3600 % 60;

				cout << "�� ����� �������� ��� ��������: " << endl;
				cout << "����: " << end_hour << endl;
				cout << "������: " << end_minutes << endl;
				cout << "�������: " << end_seconds << endl;
				cout << endl;
			}

			else cerr << "������. ������� ������� ����� ������." << endl;

			system("pause");
			system("cls");
		}
			  break;

		default:
			break;
		}

	}

	if (dz > 2) cerr << "\t\t\t\t������ ������ � �������" << endl;

	system("pause");
	system("cls");

	return 0;
}