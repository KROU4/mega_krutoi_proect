#include <iostream> // ��� ������ ���������� �� �����
#include <ctime> // ��� ������ � ������ time_t � tm
#include <thread> // ��� ������� sleep_for
#include <chrono> // ��� ���� duration

using namespace std;
using namespace std::chrono; // ��� ������������� ������ 1s

void NowTime() {
    setlocale(LC_ALL, "rus");
    while (true) { // ����������� ����
        time_t now = time(0); // ������� ����� � ������� time_t
        tm tm_now; // ��������� tm ��� �������� ���������� � ���� � �������
        localtime_s(&tm_now, &now); // ������������� ��������� tm_now ������� �� now

        // ����� ���������� �� �����
        cout << "���: " << 1900 + tm_now.tm_year << endl;
        cout << "�����: " << 1 + tm_now.tm_mon << endl;
        cout << "����: " << tm_now.tm_mday << endl;
        cout << "����: " << tm_now.tm_hour << endl;
        cout << "������: " << tm_now.tm_min << endl;
        cout << "�������: " << tm_now.tm_sec << endl;

        // ��������� �� 1 �������
        this_thread::sleep_for(1s);
        cout << "\033[2J\033[1;1H";
    }
}