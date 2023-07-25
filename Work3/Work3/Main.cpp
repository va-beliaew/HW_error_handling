#include <iostream>
#include "Triangle.h"
#include "Equilateral.h"
#include "Isosceles.h"
#include "Right.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Rhomb.h"
#include "Square.h"
#include "Parallelogram.h"
#include "angle_error.h"
#include "lenght_error.h"



void triangle_show(Triangle* tr) {
	tr->print_triangle();
}
void quad_show(Quadrilateral& quad) {
	quad.print_quad();
}


int main() {
	setlocale(LC_ALL, "rus");
	try {
		Right tr_r (12, 15, 20, 30, 60, 90);
		triangle_show(&tr_r);
	}
	catch (error::angle_error& error) {
		std::cout << error.what();
	}
	try {
		Equilateral tr_e (20, 20, 20, 60, 60, 60);
		triangle_show(&tr_e);
	}
	catch (error::angle_error& error) {
		std::cout << error.what();
	}
	catch (error::lenght_error& error) {
		std::cout << error.what();
	}
	try {
		Isosceles tr_i (20, 30, 20, 45, 90, 45);
		triangle_show(&tr_i);
	}
	catch (error::angle_error& error) {
		std::cout << error.what();
	}
	catch (error::lenght_error& error) {
		std::cout << error.what();
	}
	try {
		Rectangle rec (10, 30, 10, 30, 90, 90, 90 ,90);
		quad_show(rec);
	}
	catch (error::angle_error& error) {
		std::cout << error.what();
	}
	catch (error::lenght_error& error) {
		std::cout << error.what();
	}
	try {
		Rhomb rh (20, 20, 20, 20, 90, 90, 90 ,90);
		quad_show(rh);
	}
	catch (error::angle_error& error) {
		std::cout << error.what();
	}
	catch (error::lenght_error& error) {
		std::cout << error.what();
	}
		try {
			Square sq(20, 20, 20, 20, 90, 90, 90, 90);
			quad_show(sq);
		}
			catch (error::angle_error& error) {
				std::cout << error.what();
			}
			catch (error::lenght_error error) {
				std::cout << error.what();
			}
			try {
				Parallelogram par (10, 20, 10, 20, 45, 135, 45, 135);
				quad_show(par);
			}
			catch (error::angle_error& error) {
				std::cout << error.what();
			}
			catch (error::lenght_error& error) {
				std::cout << error.what();
			}
	
	return 0;
}