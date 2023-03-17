class container_of_ints 
{
public:
    virtual int size() const = 0;
    virtual int& at(int) = 0;
};



class array_of_ints : public container_of_ints 
{
    int data[10] = {};
public:
    int size() const { return 10; }
    int& at(int i) { return data[i]; }
};


class list_of_ints : public container_of_ints
{
    struct node
    {
        int data;
        node *next;
    };

    node *head_ = nullptr;
    int size_ = 0;
   public:
    int size() const { return size_; }
    int& at(int i)
    {
        if (i >= size_) throw std::out_of_range("at");
        node *p = head_;
        for(int j=0; j < i; ++j)
        {
            p = p->next;
        }

        return p->data;
    }

    ~list_of_ints(){};
};


void double_each_elemnt( container_of_ints& arr)
{
    for(int i = 0; i< arr.size(); i++)
    {
        arr.at(i) *= 2;
    }
}

template<class ContainerModel>
void double_elemnt( ContainerModel& arr)
{
    for(int i = 0; i< arr.size(); i++)
    {
        arr.at(i) *= 2;
    }
}
