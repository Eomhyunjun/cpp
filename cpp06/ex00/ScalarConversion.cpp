#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion() : input("") {}

ScalarConversion::ScalarConversion(std::string _input) : input(_input) {}

ScalarConversion::~ScalarConversion() {}

ScalarConversion::ScalarConversion(ScalarConversion& copy)
{
	*this = copy;
}

ScalarConversion& ScalarConversion::operator = (const ScalarConversion& sc)
{
	if (this == &sc)
		return (*this);
	input = sc.input;
	return (*this);
}

void ScalarConversion::conversion()
{

	std::cout << std::fixed;
	std::cout.precision(1);
	if (input.length() == 1 && !(isdigit(input.at(0))))
	{
		std::cout << "char:" << input << std::endl;
		std::cout << "int:" << static_cast<int>(input.at(0)) << std::endl;
		std::cout << "float:" << static_cast<float>(input.at(0)) << "f" << std::endl;
		std::cout << "double:" << static_cast<double>(input.at(0)) << std::endl;
	}
	else
	{
		double res = atof(input.c_str());
		toChar(res);
		toInt(res);
		toFloat(res);
		toDouble(res);
	}
}

void ScalarConversion::toChar(double _input)
{
	std::cout << "char:";

	if (isnan(_input) || isinf(_input) || CHAR_MAX < _input || CHAR_MIN > _input)
	{
		std::cout << " impossible" << std::endl;
	}
	else if (!(_input >= 32 && _input <= 126))
		std::cout << " Non displayable" << std::endl;
	else
		std::cout << " '" << static_cast<char>(_input) << "'" <<  std::endl;

}

void ScalarConversion::toInt(double _input)
{
	std::cout << "int:";
	if (isnan(_input) || isinf(_input) || _input > INT_MAX || _input < INT_MIN)
		std::cout << " impossible" << std::endl;
	else
		std::cout << " " << static_cast<int>(_input) <<  std::endl;
}

void ScalarConversion::toFloat(double _input)
{
	std::cout << "float:";
	if ((_input > __FLT_MAX__ || _input < -__FLT_MAX__ ) && !isinf(_input))
		std::cout << " impossible" << std::endl;
	else
		std::cout << " " << static_cast<float>(_input) << "f" << std::endl;
}

void ScalarConversion::toDouble(double _input)
{
	std::cout << "double:";
	if ((_input > __DBL_MAX__ || _input < -__DBL_MAX__) && !isinf(_input))
		std::cout << " impossible" << std::endl;
	else
		std::cout << " " << static_cast<double>(_input) << std::endl;
}
