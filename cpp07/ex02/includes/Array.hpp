/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 04:12:14 by rafael            #+#    #+#             */
/*   Updated: 2025/11/07 04:56:11 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <iostream>

template <typename T>

class Array
{
  private:
	T *_array;
	unsigned int _size;

  public:
	Array();
	Array(unsigned int n);
	Array(const Array &other);
	~Array();
	Array &operator=(const Array &other);
	T &operator[](unsigned int index);
	unsigned int size() const;
	class OutOfBoundException : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};
};

# include <Array.tpp>
#endif