

#ifndef DERIVATED_H
#define DERIVATED_H
//---------------------------
class MyData
{
    public:
        MyData();
        MyData(int value);
        ~MyData();

    int getValue();

    private:
        
    static int m_data[10]; 
    int value;

};
//---------------------------
class Cbase
{
    public:
        Cbase();
        virtual ~Cbase();


    private:

};
//---------------------------
class Derivated : public Cbase
{
    public:
        Derivated();
        Derivated(bool flag);
        virtual ~Derivated();

        MyData *date;  

        bool& getInversFlag();

    private:
    bool flag;

};
//---------------------------


//--------------------------------------------------------------------------------------------------------------------------------------------------------------
Cbase::Cbase()
{

}
//---------------------------
Cbase::~Cbase()
{
       
}
//---------------------------
Derivated::Derivated() : flag(false)
{
    date = new MyData();
}
//---------------------------
Derivated::Derivated(bool flag)
{
    this->flag = flag;
    if(flag)
        date = new MyData(30);
    else
        date = new MyData();
}
//---------------------------
Derivated::~Derivated()
{
     delete date;
}
//---------------------------
bool& Derivated::getInversFlag()
{
    bool invers = !flag;
    return invers;
}
//---------------------------
MyData::MyData(): value(3)
{

}
//---------------------------
MyData::MyData(int value)
{
    this->value = value;
}
//---------------------------
MyData::~MyData()
{

}
//---------------------------
int MyData::getValue()
{
    return value;
}


//---------------------------
int MyData::m_data[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

#endif