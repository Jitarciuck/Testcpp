#include <iostream>
#include <vector>
#include <string>
#include "Polimorf.h"



int main()
{

    array_of_ints arr;
    double_each_elemnt(arr);

    list_of_ints lst;
    double_each_elemnt(lst);

    double_elemnt(arr);
    double_elemnt(lst);

    std::vector<int > vec = {1, 2, 3, 5, 6, 7, 8, 9};
    double_elemnt(vec);


    int number_above =  count_if(vec.begin(), vec.end(), [](int e){return e > 5;});
    std::cout<< "number_above: " << number_above << std::endl;


    std::cout<< "Stop!" << std::endl;
    return 0;
}