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

    std::vector<int > vec = {1, 2, 3};
    double_elemnt(vec);

    std::cout<< "Stop!" << std::endl;
    return 0;
}