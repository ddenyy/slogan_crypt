#ifndef CRYPT_H
#define CRYPT_H
#include <string>
using namespace std;

/*
�-��� �������������� ������� �� ������� ��������
��������� ������� � ��������� �����
*/
string transform_alphabet(string alphabet, string word);

/*
�-��� ���������� ������. ��������� �����, ����������� � ������������� �������
���������� �����
*/
string uncrypt_string(string text, string alphabet, string encrytped_alphabet);


/*
�-��� �������� ������. ��������� �����, ��������� ������� � ������������� �������
���������� �����
*/
string encrytped_string(string text, string alphabet, string encrytped_alphabet);

#endif // CRYPT_H
