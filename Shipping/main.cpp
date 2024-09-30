#include <iostream>
#include <iomanip> // Manipulate output

/*
    Shipping cost calculator
    Ask the user must be 10 inches or less or we cannot ship it

    Base cost 5.20
    if package volume is greater than 100 inches + 10%
    if package volume is greater than 500 inches + 25%
*/
int main(int argc, char *argv[])
{
    const float shipping_cost{2.50};
    const float min_surcharge{0.10};
    const float max_surcharge{0.25};
    const int max_inches{10};
    const int first_stagger_inches{100};
    const int second_stagger_inches{500};

    std::cout << "Insert package lenght, width, height: ";

    int package_lenght{}, package_width{}, package_height{};
    std::cin >> package_lenght >> package_width >> package_height;

    if (package_lenght > max_inches || package_width > max_inches || package_height > max_inches)
        std::cout << "Impossible to ship it." << std::endl;
    else
    {
        float total_price{};
        int volume = package_height * package_lenght * package_width;
        total_price = shipping_cost;
        if (volume > first_stagger_inches)
            if (volume > second_stagger_inches)
            {
                total_price = shipping_cost + (shipping_cost * max_surcharge);
            }
            else
                total_price = shipping_cost + (shipping_cost * min_surcharge);

        std::cout << std::fixed << std::setprecision(2); // Print dollars nicely
        std::cout << "The total amount for shipping is $" << total_price << std::endl;
    }
}