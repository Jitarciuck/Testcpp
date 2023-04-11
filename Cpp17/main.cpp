#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#include "Polimorf.h"
#include "TestClass.h"



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


    int number_above =  count_ifPredicate(vec.begin(), vec.end(), [](int e){return e > 5;});
    std::cout<< "number_above: " << number_above << std::endl;


    std::vector<const char *> vecOut = {"String1", "String2"};
    std::vector<std::string > vecIn(2);

    std::transform(vecOut.begin(), vecOut.end(), vecIn.begin(), [](std::string s)
        { 
            std::transform(s.begin(), s.end(), s.begin(), ::toupper);
            return s;
        }  );

    std::cout<< "S1 = " << vecIn[0] << std::endl;
    std::cout<< "S2 = " << vecIn[1] << std::endl;


    TestClass obj;

    std::cout<< "Get count:" <<  obj.getCount() << std::endl;;

    std::cout<< "Stop!" << std::endl;
    return 0;
}