#include "Quadrilateral.h"
#include <iostream>


	void Quadrilateral::print_quad() {

	}

	void Quadrilateral::print_quad_param() {
		std::cout << "Стороны: " << "a=" << a << ' ' << "b=" << b << ' '
			<< "c=" << c << " " << "d=" << d << std::endl;
		std::cout << "Углы: " << "A=" << A << ' ' << "B=" << B << ' '
			<< "C=" << C << ' ' << "D=" << D << "\n\n";
	}
