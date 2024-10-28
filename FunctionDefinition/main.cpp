#include <iostream>

const double pi{3.14159};

double calc_area_circle(double radius)
{
    return pi * radius * radius;
}

void area_cirlce()
{
    double radius{};
    std::cout << "\nEnter the radius of circle: ";
    std::cin >> radius;

    std::cout << "The area of circle with radius " << radius << " is "
              << calc_area_circle(radius) << std::endl;
}

double calc_volume_cylinder(double radius, double height)
{
    // return pi * radius * radius * height;
    return calc_area_circle(radius) * height;
}

void volume_cylinder()
{
    double radius{};
    double height{};

    std::cout << "\nEnter the radius of the cylinder: ";
    std::cin >> radius;
    std::cout << "\nEnter the height of the cylinder: ";
    std::cin >> height;

    std::cout << "The volume of a cylinder with radius " << radius
              << " and height " << height << " is "
              << calc_volume_cylinder(radius, height) << std::endl;
}
int main(int argc, char *argv[])
{
    area_cirlce();
    volume_cylinder();

    return 0;
}