#include "array.hpp"
#include <iostream>
#include <math.h>

Array::Array() : _data(nullptr), _size(0)
{
    // Defining constructor
}
Array::Array(const Array &other) : _size(other._size)
{
    _data = new double[_size];
    for (int i = 0; i < _size; i++)
    {
        _data[i] = other._data[i];
    }
}

Array::Array(unsigned number, double value) : _size(number)
{
    _data = new double[_size];
    for (int i = 0; i < _size; i++)
    {
        _data[i] = value;
    }
}
Array::~Array()
{
    delete[] _data;
}

unsigned Array::size() const
{
    return _size;
}

double *Array::data()
{
    return _data;
}

const double *Array::data() const
{
    return _data;
}

void Array::copy(const Array &rhs)
{
    if (_size != rhs._size)
    {
        delete[] _data;
        _data = new double[rhs._size];
        _size = rhs._size;
    }

    for (unsigned i = 0; i < _size; ++i)
    {
        _data[i] = rhs._data[i];
    }
}

double &Array::at(unsigned index)
{
    return _data[index];
}
const double &Array::at(unsigned index) const
{
    return _data[index];
}

void Array::resize(unsigned new_size, bool prsv)
{
    double *new_data = new double[new_size];
    if (prsv)
    {
        unsigned size;
        if (new_size < _size)
        {
            size = new_size;
        }
        else
        {
            size = _size;
        }
        // unsigned size = (new_size<size) ? new_size:_size;
        for (unsigned i = 0; i < size; ++i)
        {
            new_data[i] = _data[i];
        }
    }
    delete[] _data;
    _data = new_data;
    _size = new_size;
}

double Array::norm() const
{
    double sum = 0.0;
    for (unsigned i = 0; i < _size; ++i)
    {
        sum += _data[i] * _data[i];
    }
    return sqrt(sum);
}

double Array::sum() const
{
    double sum = 0.0;
    for (unsigned i = 0; i < _size; ++i)
    {
        sum += _data[i];
    }
    return sum;
}

double Array::max() const
{
    double mul = _data[0];
    for (unsigned i = 0; i < _size; ++i)
    {
        if (_data[i] > mul)
        {
            mul = _data[i];
        }
    }
    return mul;
}

double Array::min() const
{
    double min = _data[0];
    for (unsigned i = 0; i < _size; ++i)
    {
        if (_data[i] < min)
        {
            min = _data[i];
        }
    }
    return min;
}

double Array::dot(const Array &rhs) const
{
    double dotProduct = 0.0;
    for (unsigned i = 0; i < _size; ++i)
    {
        dotProduct += _data[i] * rhs._data[i];
    }
    return dotProduct;
}

Array Array::add(const Array &rhs) const
{
    Array result(_size);
    for (unsigned i = 0; i < _size; ++i)
    {
        result._data[i] = _data[i] + rhs._data[i];
    }
    return result;
}

Array Array::sub(const Array &rhs) const
{
    Array result(_size);
    for (unsigned i = 0; i < _size; ++i)
    {
        result._data[i] = _data[i] - rhs._data[i];
    }
    return result;
}

void Array::print() const
{
    for (unsigned i = 0; i < _size; ++i)
    {
        std::cout << _data[i] << " ";
    }
    std::cout << std::endl;
}
double &Array::operator[](const unsigned index)
{
    return _data[index];
}
const double &Array::operator[](const unsigned index) const
{
    return _data[index];
}

Array &Array::operator=(const Array &other)
{
    if (this != &other)
    {
        delete[] _data;
        _size = other._size;
        _data = new double[_size];
        for (unsigned i = 0; i < _size; ++i)
        {
            _data[i] = other._data[i];
        }
    }
    return *this;
}
Array operator+(const Array &lhs, const Array &rhs)
{
    return lhs.add(rhs);
}
Array operator-(const Array &lhs, const Array &rhs)
{
    return lhs.sub(rhs);
}