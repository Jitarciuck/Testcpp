
class TestClass
{
public:
    TestClass();
    ~TestClass();

    int getCount() const
    {
        value++;
        return count;
    }
    
private:
    int count = 2;
    mutable int value = 5;
};



TestClass::TestClass()
{

}

TestClass::~TestClass()
{

}

