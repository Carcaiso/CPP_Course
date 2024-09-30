/*
    Let's talk about the challenge and then I'll give you a demo of the running solution.

    This challenge is about using a collection or a list of integers and allowing the user to select a few options from the menu.

    So here's the menu, p-a-m-s-l-q are the selections.

    - If the user presses p, you print the elements of the list.

    - If they press a, you add a number to the list, which you ask them for.

    - If they press m, you display the mean of the numbers in the list.

    - S and l, the smallest number and the largest number.

    - And of course, if they press q, you quit.
*/

#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    char selection{};
    std::vector<int> items{};
    do
    {
        std::cout << "------------" << std::endl;
        std::cout << "P - Print the elements in list" << std::endl;
        std::cout << "A - Add element in list" << std::endl;
        std::cout << "M - Mean number in list" << std::endl;
        std::cout << "S - Small number in the list" << std::endl;
        std::cout << "L - Larg number in the list" << std::endl;
        std::cout << "C - Search a number" << std::endl;
        std::cout << "Q - Quit" << std::endl;
        std::cin >> selection;

        switch (selection)
        {
        case 'P':
        case 'p':
        {
            if (items.size() > 0)
            {
                for (int item : items)
                    std::cout << item << std::endl;
            }
            else
                std::cout << "No item" << std::endl;

            break;
        }
        case 'A':
        case 'a':
        {
            std::cout << "Insert the item (int) to add: ";
            int item_to_add{0};
            std::cin >> item_to_add;
            items.push_back(item_to_add);

            std::cout << item_to_add << " added!" << std::endl;
            break;
        }

        case 'M':
        case 'm':
        {
            if (items.size() > 0)
                std::cout << "Number of items: " << items.size() << std::endl;
            else
                std::cout << "No item" << std::endl;
            break;
        }
        case 'S':
        case 's':
        {
            if (items.size() > 0)
            {
                int min_item{items[0]};
                for (int item : items)
                {
                    if (item < min_item)
                        min_item = item;
                }

                std::cout << "Min item is: " << min_item << std::endl;
            }
            else
                std::cout << "No item" << std::endl;
            break;
        }
        case 'L':
        case 'l':
        {
            if (items.size() > 0)
            {
                int large_item{items[0]};
                for (int item : items)
                {
                    if (item > large_item)
                        large_item = item;
                }

                std::cout << "Large item is: " << large_item << std::endl;
            }
            else
                std::cout << "No item" << std::endl;
            break;
        }
        case 'C':
        case 'c':
        {
            std::cout << "Digit a number to search in items list: ";
            int number_to_search{0};
            std::cin >> number_to_search;
            if (items.size() > 0)
            {
                bool find{false};
                for (auto item : items)
                {
                    if (number_to_search == item)
                    {
                        find = true;
                        break;
                    }
                }

                if (!find)
                    std::cout << "No item found. Please select another menu options." << std::endl;
                else
                    std::cout << "Item found: " << number_to_search << std::endl;
            }
            else
                std::cout << "No item" << std::endl;
            break;
        }
        case 'Q':
        case 'q':
            std::cout << "Goodbye";
            break;
        default:
            break;
        }

    } while (selection != 'q' && selection != 'Q');

    return 0;
}