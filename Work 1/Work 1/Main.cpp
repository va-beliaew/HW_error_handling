#include <iostream>
#include <Windows.h>

int function(std::string str, int forbidden_lenght) {
	if (forbidden_lenght == size(str)) {
		throw std::exception("�� ����� ����� ��������� �����. �� ��������!");
	}
	else {
		return size(str);
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	std::string str;
	int stop_len, lenght;
	std::cout << "������� ��������� �����: ";
	std::cin >> stop_len;
	while (1) {
		std::cout << "������� �����: ";
		std::cin >> str;
		try {
			lenght = function(str, stop_len);
		}
		catch (const std::exception& bad_lenght)
		{
			std::cout << bad_lenght.what();
			break;
		}
		std::cout << "����� ����� " << '\"' << str << '\"' << " ����� " << lenght << std::endl;
	}
	return 0;
}