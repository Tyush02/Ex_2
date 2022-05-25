#include<iostream>

struct MyStack
{
    int *arr;
    int size;
    MyStack(int size)
    {
        this -> size = size;
        this -> arr = new int[size];
        for(int i = 0; i < size; i++)
        {
            std::cin >> arr[i];
        }
    }
    MyStack(const MyStack &oth)
    {
        this -> size = oth.size;
        this -> arr = new int[oth.size];
        for(int i = 0; i < oth.size; i++)
        {
            this -> arr[i] = oth.arr[i];
        }
    }
    MyStack &operator=(const MyStack &oth)
    {
        this -> size = oth.size;
        if(this -> arr != nullptr)
        {
            delete[] this -> arr;
        }
        this -> arr = new int[oth.size];
        for(int i = 0; i < oth.size; i++)
        {
            this -> arr[i] = oth.arr[i];
        }
        return *this;
    }
    int pop()
    {
        if(size == 0)
        {
            std::cout << "There is no value in stack";
            delete []arr;
            exit(-1);
        }
        else
        {
            return arr[size - 1];
        }
    }
    int push(int value)
    {
        if(size == 10)
        {
            std::cout << "There is no space left";
            delete []arr;
            exit(-1);
        }
        else
        {
            arr[size] = value;
        }
    }
    int Size()
    {
        return size;
    }
    void clear()
    {
        delete []arr;
        exit(-1);
    }
    ~MyStack()
    {
        delete []arr;
    }
};

int main()
{
    int num;
    std::cin >> num;
    if(num < 0 || num > 10)
    {
        std::cout << "Error!!";
        return 0;
    }
    MyStack a(num);
    MyStack b(a);

    return 0;
}
