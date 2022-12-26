#include <iostream>
#include <chrono>
#include <thread>
#include "Timer.h"
#include <typeinfo>

using namespace std;

// ������� ��� ������� �������
void timer(int minutes)
{
    // ����������� ������ � �������
    int seconds = minutes * 60;

    // ������� ��������� � ���, ��� ������ �������
    cout << "������ ������� �� " << minutes << ((minutes == 1) ? " ������" : " �����") << endl;

    // ��������� ������ � ������� �����
    for (int i = seconds; i > 0; i--)
    {
        // ���������������� ����� �� 1 �������
        this_thread::sleep_for(chrono::seconds(1));

        // ������� ���������� ����� � ������� �����:������
        cout << i / 60 << ":" << i % 60 << endl;
    }

    cout << "����� �����!" << endl;
}

int Timer()
{
    int minutes;

    // ����������� ����� � ������������
    cout << "������� ����� ������� � �������: ";
    cin >> minutes;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "�� ����� �� �����!" << endl;
    }
    else
    {
        timer(minutes);
    }

    return 0;
}