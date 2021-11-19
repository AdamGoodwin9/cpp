//
//

#include <iostream>
#include <cstdlib>

template <typename T>
class Array
{
private:
    unsigned int length;
    T* arr;

public:
    Array();
    Array(unsigned int);
    Array(const Array<T>&);
    ~Array();

    Array<T>& operator=(const Array<T>&);
    T& operator[](unsigned int) const;

    void print() const;

    unsigned int size() const;
};

template <typename T>
std::ostream &operator<<(std::ostream &os, const Array<T> &arr)
{
    os << "[ ";
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        os << arr[i];
        if (i != arr.size() - 1)
            os << ", ";
    }
    os << " ]";
    return os;
}

template <typename T>
Array<T>::Array()
{
    length = 0;
    arr = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    length = n;
    arr = new T[n];
    for (size_t i = 0; i < length; i++)
    {
        arr[i] = 0;
    }
}

template <typename T>
Array<T>::Array(const Array<T>& src)
{
    arr = NULL;
    *this = src;
}

template <typename T>
Array<T>::~Array()
{
    delete[] arr;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T>& src)
{
    if (arr)
        delete[] arr;
    length = src.length;
    arr = new T[length];
    for (unsigned int i = 0; i < length; i++)
    {
        arr[i] = src[i];
    }
    return *this;
}

template <typename T>
void Array<T>::print() const
{
    std::cout << *this << std::endl;
}

template <typename T>
T &Array<T>::operator[](unsigned int i) const
{
    if (i < 0 || i >= length)
    {
        throw std::out_of_range("Index out of range");
    }
    else
    {
        return arr[i];
    }
}

template <typename T>
unsigned int Array<T>::size() const
{
    return length;
}
