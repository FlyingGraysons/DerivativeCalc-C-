# DerivativeCalc-Cpp
A library to calculate derivatives of mathematical equations, written and usable in C++, as well as any derived langauges (D).  
This is derivatives in the calculus sense.  
The function uses a variadic function (`va_list`) to be able to work with polynomials of any degree, and only can do the power rule on positive integer terms.

## Usage
All code is in the derive.h file, which can be included with the simple  
```cpp
#include "derive.h"
```
The function is called `derive(degree, ...)`  
The mathematical equation must be expressed in coefficient form, which may not work for all equations.  
This means that for the equation 3x<sup>2</sup> + 234x + 45, it is already in coefficient form, because it is ax<sup>2</sup> + bx + c.  
The function returns a string containing the full function.  
The example below is for the functions 3x<sup>2</sup> + 9x + 43 and 9x<sup>5</sup> + 4x<sup>3</sup> + 3x<sup>2</sup> + 4x, relatively.
```cpp
// 3x^2 + 9x + 43 (2nd degree equation)
derive(2, 3, 9, 43);

// 9x^5 + 4x^3 + 3x^2 + 4x (5th degree equation)
derive(5, 9, 0, 4, 3, 4)

// In general:
derive(degree, a, b, c, ...);
```
The function will not work with any decimals, both in the coeffients and the exponents, and will not work with negative exponents.

## Todo
 - Work with decimal (float) coefficients
 - Work with negative exponents
 - Work with decimal exponents
 - Work with forms other than coefficient form
