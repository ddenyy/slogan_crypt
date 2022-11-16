#ifndef INPUT_AND_OUTPUT_FILE_H
#define INPUT_AND_OUTPUT_FILE_H
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

/*
�-��� ������ �����
*/
string read_file(string path);

/*
�-��� ������ ������ � ����
������� ���� � ������ name_file
���������� � ���� text
*/
void output_in_file(string name_file, string text);

/*
�-��� ����� ���������� �����
*/
string input_secret_string();

/*
������� 5 ����� ������ �������� ������������� � ������
��������� ������ �� ��������� ������, ������ ���������� �������, �������
*/
void output_five_most_rate_symbols(int* Array, int size_array, string Array_alphabet);

#endif // INPUT_AND_OUTPUT_FILE_H
