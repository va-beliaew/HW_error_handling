#pragma once
#include "angle_error.h"

class Triangle {
	int a = 0;
	int b = 0;
	int c = 0;
	int A = 0;
	int B = 0;
	int C = 0;
protected:
	Triangle(int a, int b, int c, int A, int B, int C) {
		if ((A + B + C) != 180)
			throw error::angle_error("Ошибка создания треугольника! Причина: Сумма углов не равна 180 градусов!\n\n");
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	}
public:
	virtual void print_triangle();
protected:
	void print_triangle_param();
};