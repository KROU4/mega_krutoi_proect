#include <iostream> // ��� ������ ���������� �� �����
#include <ctime> // ��� ������ � ������ time_t � tm
#include <thread> // ��� ������� sleep_for
#include <chrono> // ��� ���� duration
#include "NowTime.h"
#include "Timer.h"
#include "Secundomer.h"
#include "Alarm.h"
#include "Calendar.h"

using namespace std;
using namespace std::chrono; // ��� ������������� ������ 1s

int main() 
    {
	setlocale(LC_ALL, "ru");
	int n;
	cout << "����� ��������� �� ������ ���������?\n1) �������� ������� �����\n2) ������\n3) ����������\n4) ���������\n5) ���������\n6) ����� �� ���������\n" << endl;
	cin >> n;
	while (n > 4 && n < 1) {
		cout << "������� ��� ������: ";  cin >> n;
	}
	switch (n) {
	case 1:
		NowTime();
		break;

	case 2:
		Timer();
		break;

	case 3:
		Secundomer();
		break;

	case 4:
		Alarm();
		break;

	case 5:
		Calendar();
		break;

	case 6:
		break;
	}

    }
