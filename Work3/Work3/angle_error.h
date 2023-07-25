#pragma once
#include <iostream>


namespace error {
	class angle_error : public std::domain_error {
		const char* text;
	public:
		angle_error(const char* text_) : domain_error (text_) {
			text = text_;
		}
		const char* what() const override;

	};
}