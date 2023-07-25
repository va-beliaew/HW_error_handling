#pragma once
#include "Triangle.h"
#include "angle_error.h"
#include "lenght_error.h"

class Equilateral : public Triangle {
public:
	Equilateral(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
		if (a != b || b != c || a != c)
			throw error::lenght_error("������ �������� ��������������� ������������! �������: ������� �� ����� ���� �����!\n\n");
		if (A != 60 || B != 60 || C != 60)
			throw error::angle_error("������ �������� ��������������� ������������! �������: ���� �� ����� 60 ��������!\n\n");
	}
protected:
	void print_triangle() override;
};