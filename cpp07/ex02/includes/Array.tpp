/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 04:29:13 by rafael            #+#    #+#             */
/*   Updated: 2025/11/07 05:03:28 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.hpp>

template <typename T> Array<T>::Array() : _array(NULL), _size(0)
{
}

template <typename T> Array<T>::Array(unsigned int n) : _array(new T[n]),
	_size(n)
{
}
template <typename T> Array<T>::~Array()
{
	delete[] _array;
}

template <typename T> 
Array<T>::Array(const Array &other)
{
	_size = other._size;
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = other._array[i];
}
template <typename T> 
Array<T> &Array<T>::operator=(const Array &other)
{
    if (this != &other)
    {
        delete []_array;
        _size = other._size;
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = other._array[i];
    }
    return (*this);
}

template <typename T> 
unsigned int Array<T>::size() const
{
    return _size;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw Array::OutOfBoundException();
    return (_array[index]);
}


template <typename T>
const char *Array<T>::OutOfBoundException::what() const throw()
{
    return "Index out of bound";
}