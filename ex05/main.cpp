#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("ERROR");
	harl.complain("WARNING");
	harl.complain("OTHER");
	harl.complain("");
	harl.complain("ERROR");

	return (0);
}
