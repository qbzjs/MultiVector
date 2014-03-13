MultiVector
===========

A simple class for storing 2D arrays as 1D arrays.


I created this class to be used in my game. I decided to publish it here in case I needed to reference it again or on the off chance someone else may actually want to see it.

To use the class it is very simple.

1. '#include "multivector.h"' add this to your .cpp file
2. Create the object like so 'MultiVector<type> name = MultiVector<type>(width, height);', type being a data type such as (int, float, double, char, std::string, etc.), name being any name of your choice and width and height being numerical values to represent the number of rows and columns.
