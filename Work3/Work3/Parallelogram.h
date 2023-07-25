#pragma once
#include "Quadrilateral.h"
#include "angle_error.h"
#include "lenght_error.h"

class Parallelogram : public Quadrilateral {
public:
	Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {
		if (a != c || b != d)
			throw error::lenght_error("������ �������� ���������������! �������: ������� a, � � b, d ������� �� ����� ���� �����!\n\n");
		if (A != C || B!= D)
			throw error::angle_error("������ �������� ���������������! �������: ���� �, � � B, D ������� �� ����� ���� �����!\n\n");
	}
protected:
	void print_quad() override;
};