#include <iostream>
#include <vector>
#include <string>
#include "Source/Derivated.h"

//--------------------------------------------------------------------

struct t4Byte
{
  uint8_t b1;		
  uint8_t b2;
  uint8_t b3;		
  uint8_t b4;
  uint8_t b5;		
  uint8_t b6;
};

union testData
{
    char ch;
    int in;
    double t_double;
    t4Byte str4b;
};



//--------------------------------------------------------------------

int main()
{
    Cbase b_obj;
    Derivated d_obl;
    Derivated d_obl2;
    Derivated *p = new Derivated(true);
    Derivated *p_derivate;
    Cbase *p_base;


     // 1) Чему равен размер unionData? 
        testData unionData;
        
    p_base = &d_obl2;
    
    // 2) Чему равно значение переменной value класса Data, в объекте d_obl ?

    // 3)  Чему равно значение переменной value через указатель p ?

    // 4) Как изменить значение переменно m_data в объекте d_obl? 
    // Изменить все значения на 0 в массиве m_data в объекте d_obl, написать функцию для изменения значения масива, вызвать через объект d_obl


    // Чему равен массив m_data в объекте d_obl2, написать функцию для вывода в консоль масива m_data

    // 5)  Почему при вызове функции  getInversFlag падает программа?  (bool flag = d_obl.getInversFlag();)


    // 6)  Перезагрузи операторы класа Derivated что бы можно было выполнить следующую команду   std::cout << d_obl + d_obl2 ( MyData::value +  MyData::value) ;
    

    std::cout << "Stop!" << std::endl;
}