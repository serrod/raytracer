#include <iostream>

int main()
{
    const int i_width = 256;
    const int i_height = 256;
    
    std::cout << "P3\n" << i_width << ' ' << i_height << "\n255\n";

    for(int i = i_height -1; i >= 0;--i)
    {
        for(int j = 0; j< i_width; ++j)
        {
            double r = 34;
            double g = 64;
            double b = 2;

            std::cout << r << ' ' << g << ' '<< b << '\n';
        }
    }
}

