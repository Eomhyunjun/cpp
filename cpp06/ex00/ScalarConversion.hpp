#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

# include <iostream>
# include <string>
# include <cmath>

class ScalarConversion
{
    std::string input;

	public:
		ScalarConversion();
		ScalarConversion(std::string _input);
		~ScalarConversion();
		ScalarConversion(ScalarConversion& copy);
		ScalarConversion& operator = (const ScalarConversion& sc);

		void conversion();
		void toChar(double _input);
		void toInt(double _input);
		void toFloat(double _input);
		void toDouble(double _input);
};


#endif