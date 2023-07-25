#include <iostream>
#include "angle_error.h"


	const char* error::angle_error::what() const  {
		return text;
	}