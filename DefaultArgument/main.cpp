#include <iostream>
#include <iomanip>
#include <string>

// Default value for tax_rate and shipping
double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.50);
void greeting(std::string name, std::string prefix = "Mr.", std::string suffix = "PH.D");

double calc_cost(double base_cost, double tax_rate, double shipping)
{
    return base_cost += (base_cost * tax_rate) + shipping;
}


void greeting(std::string name, std::string prefix, std::string suffix)
{
    std::cout << "Hello " << prefix + " " + name + " " + suffix << std::endl;
}

int main(int argc, char *argv[])
{
    double cost{0};
    cost = calc_cost(100.0, 0.08, 4.25); // Not use default value

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Cost is: " << cost << std::endl;

    cost = calc_cost(100.0); // Use default value
    std::cout << cost << std::endl;

    greeting("Mattia Carcaiso", "Dr.", "M.D");
    greeting("Mattia Carcaiso");
    greeting("Mattia Carcaiso", "", "");
    return 0;
}