#include <iostream>
#include "lenght_error.h"

const char* error::lenght_error::what() const {
	return text;
}