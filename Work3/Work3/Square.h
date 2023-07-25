#pragma once
#include "Quadrilateral.h"
#include "angle_error.h"
#include "lenght_error.h"

class Square : public Quadrilateral {
public:
	
		Square(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {
			if (A != 90 || B != 90 || C != 90 || D != 90)
				throw error::angle_error ("Ошибка создания фигуры квадрат! Причина: углы не равны 90 градусам!\n\n");
			if (a != b || b != c || c != d || a != d || a != c || b != d)
				throw error::lenght_error("Ошибка создания фигуры квадрат! Причина: стороны не равны друг другу!\n\n");
		}
	
protected:
	void print_quad() override; 
};