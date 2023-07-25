#pragma once
#include "Quadrilateral.h"
#include "angle_error.h"
#include "lenght_error.h"

class Rhomb : public Quadrilateral {
public:
	Rhomb(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {
		if (a != c || b != d || a != b || a != d || b != c || c != d)
			throw error::lenght_error("������ �������� �����! �������: ������� a, �, b, d �� ����� ���� �����!\n\n");
		if (A != C || B != D)
			throw error::angle_error("������ �������� �����! �������: ���� A, C � B, D ������� �� �����!\n\n");
	}
protected:
	void print_quad() override;
};