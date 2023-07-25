#pragma once
#include <iostream>

namespace error {
	class lenght_error : public std::domain_error {
		const char* text;
	public:
		const char* what() const override;
		lenght_error(const char* text_) : std::domain_error(text_) {
			text = text_;
		}
	};
}