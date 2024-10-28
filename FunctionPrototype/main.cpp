#include <iostream>

const double pi{3.14159};

// With the prototype define the header of function so i can declare my function
// in any order or osition (like after the main and not before)
double calc_volume_cylinder(double radius, double height);
double calc_area_circle(double); // You can avoi dthe name variable, but is best practice for documentation purpose
void area_cirlce();
void volume_cylinder();

int main(int argc, char *argv[])
{
    area_cirlce();
    volume_cylinder();

    return 0;
}

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