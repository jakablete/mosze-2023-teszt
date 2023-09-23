#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //N után alsó vonal
    std::cout << "1-100 ertekek duplazasa" //nem karakter tehát " alkalmaztam
    for (int i = 0; i< N_ELEMENTS; i++) // ciklushiba
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) //ciklushiba
    {
        std::cout << "Ertek:" << b[i]  << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) //ciklushiba
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
