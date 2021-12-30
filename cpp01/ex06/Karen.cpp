#include "Karen.hpp"

void Karen::debug(void) {
	std::cout << "[ DEBUG   ]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
};

void Karen::info(void) {
	std::cout << "[ INFO    ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
};

void Karen::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month" << std::endl;
};

void Karen::error(void) {
    std::cout << "[ ERROR   ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
};

void Karen::others(void) {
    std::cout << "[ others ]" << std::endl;
    std::cout << "Probably complaining about insignificant problems" << std::endl;
}

void Karen::complain(std::string level) {
    int idx = 0;

	(level.compare("DEBUG") == 0) && (idx = 1);
	(level.compare("INFO") == 0) && (idx = 2);
	(level.compare("WARNING") == 0) && (idx = 3);
	(level.compare("ERROR") == 0) && (idx = 4);
    switch (idx)
    {
        case 0:
            others();
        case 1:
            debug();
        case 2:
            info();
        case 3:
            warning();
        case 4:
            error();
    }
};
