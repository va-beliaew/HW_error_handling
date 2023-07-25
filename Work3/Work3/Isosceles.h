#pragma once
#include "Triangle.h"
#include "angle_error.h"
#include "lenght_error.h"

class Isosceles : public Triangle {
public:
	Isosceles(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
		if (a != c)
			throw error::lenght_error("Ошибка создания равнобедренного треугольника! Причина: стороны a и с не равны друг другу!\n\n");
		if (A != C)
			throw error::angle_error("Ошибка создания равнобедренного треугольника! Причина: углы А и С не равны друг другу!\n\n");
	}
protected:
	void print_triangle() override;
};