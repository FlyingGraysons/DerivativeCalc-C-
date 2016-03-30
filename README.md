# DerivativeCalc-Cpp
A library to calculate derivatives of mathematical equations.  
This is derivations in the calculus sense.  
The function uses a variadic function to be able to work with any degree equation.

All code is in the derive.h file, which can be included with the simple  
```cpp
#include derive.h
```

## Usage
The function must be expressed in coefficient form, which may not work for all equations.  
This means that for the equation 3x<sup>2</sup> + 234x + 45, it is already in coefficient form, because it is ax<sup>2</sup> + bx + c.  
The function returns a string containing the full function.
The example below is for the functions 3x<sup>2</sup> + 9x + 43 and 9x<sup>5</sup> + 4x<sup>3</sup> + 3x<sup>2</sup> + 4x, relatively.
```cpp
// 3x^2 + 9x + 43 (2nd degree equation)
derive(2, 3, 9, 43);

// 9x^5 + 4x^3 + 3x^2 + 4x (5th degree equation)
derive(5, 9, 0, 4, 3, 4)
```
