#include <iostream>

int main()
{
    int love = 0;

    int a, b, size = 15;

    for (a = size / 2; a <= size; a = a + 2)
    {
        for (b = 1; b < size - a; b = b + 2)
            std::cout << " ";
        for (b = 1; b <= a; b++)
            std::cout << "L";
        for (b = 1; b <= size - a; b++)
            std::cout << " ";
        for (b = 1; b <= a - 1; b++)
            std::cout << "A";
        std::cout << std::endl;
    }
    for (a = size; a >= 0; a--)
    {
        for (b = a; b < size; b++)
            std::cout << " ";
        for (b = 1; b <= ((a * 2) - 1); b++)
            std::cout << "U";
        std::cout << std::endl;
    }

    std::cout << "      I love you honey" << std::endl;
    std::cout << "             <3" << std::endl;

    std::cout << "Del uno al cien, Cuanto me amas princesa?: ";
    std::cin >> love;
    std::cout << std::endl;

    std::cout << "Efectivamente me amas" << love << "XDDD" << std::endl;
    std::cout << "Eres perfecta" << std::endl;

    system("pause");
    return 0;

}