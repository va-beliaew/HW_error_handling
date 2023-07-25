#pragma once
#include "Triangle.h"
#include "angle_error.h"

class Right : public Triangle {
public:
	Right(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
		if (C != 90)
			throw error::angle_error("������ �������� ������ ������������� �����������! �������: ���� � �� ����� 90 ��������!\n\n");
		
	}
protected:
	void print_triangle() override;
		
};