#ifndef DERIVE_H
#define DERIVE_H

// includes
#include <cstdarg>
#include <string>

// function declaration
// To use function: derive(degree, a, b, c, ...)
// For example, to derive 3x^2 + 9x + 43, use derive(2, 3, 9, 43);
// Will return a string containing the full derived equation
std::string derive(int degree, ...) {
	va_list args;
	std::string equation = "";
	va_start(args, degree);
	for (int i = degree; i >= 0; i--) {
		int j = va_arg(args, int);
		std::string plus = (i != degree) ? " + " : "";
		std::string var = (i-1 != 0) ? "x" : "";
		std::string power = (i == 2 || i== 1) ? "" : "^" + std::to_string(i-1);
		if (i*j != 0)
			equation += plus + std::to_string(i*j) + var + power;

	}
	va_end(args);
	return equation;
}
#endif
