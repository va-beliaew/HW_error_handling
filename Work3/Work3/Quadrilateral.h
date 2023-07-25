#pragma once
#include "angle_error.h"

class Quadrilateral {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
protected:
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) {
		if ((A + B + C + D) != 360)
			throw error::angle_error("Ошибка создания четырехугольника! Причина: сумма углов не равна 360 градусов!\n\n");
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	}
public:
	virtual void print_quad();
protected:
	void print_quad_param();
	
};