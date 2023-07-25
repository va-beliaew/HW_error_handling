#pragma once
#include "Quadrilateral.h"
#include "angle_error.h"
#include "lenght_error.h"

class Rectangle : public Quadrilateral {
public:
	Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {
		if (a != c || b != d)
			throw error::lenght_error("Ошибка создания прямоугольника! Причина: стороны a, с и b, d попарно не равны друг другу!\n\n");
		if (A != 90 || B != 90 || C != 90 || D != 90)
			throw error::angle_error("Ошибка создания прямоугольника! Причина: углы не равны 90 градусам!\n\n");
	}
protected:
	void print_quad() override;
};