#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "Calendar.h"

using namespace std;

int Calendar()
{
    setlocale(LC_ALL, "RUS"); //������������� ������� ������

    time_t t; //��������� ���������� ��� ������ �� ��������
    time(&t); //��������� ������� �����

    struct tm timeinfo; //������� ��������� ��� �������� ����
    localtime_s(&timeinfo, &t); //��������� ��������� ������� ������� ����

    //������� �� ����� ���� � ������� ��.��.����
    cout << timeinfo.tm_mday << "." << timeinfo.tm_mon + 1 << "." << timeinfo.tm_year + 1900 << endl;
    return 0;
}