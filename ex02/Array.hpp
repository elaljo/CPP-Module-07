/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 22:32:57 by moelalj           #+#    #+#             */
/*   Updated: 2025/01/04 16:50:27 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array{
    private:
        T *arr;
        int arr_size;
        int index;
    public:
        Array() : arr(NULL), arr_size(0), index(0){
            std::cout << "Default Constructor Called" << std::endl;
        }
        Array(const unsigned int n) : arr_size(n), index(0){
            std::cout << "Construtor Called" << std::endl;
            arr = new T[n];
        }
        Array(const Array& rhs){
            std::cout << "Copy constructor called" << std::endl;
            this->arr = new T[rhs.arr_size];
            for (int i = 0; i < rhs.arr_size; i++)
                this->arr[i] = rhs.arr[i];
            this->arr_size = rhs.arr_size;
        }
        Array& operator=(const Array& rhs){
            std::cout << "Copy Assignment operator called" << std::endl;
            delete[] arr;
            arr = new T[rhs.arr_size];
            for (int i = 0; i < rhs.arr_size; i++)
                arr[i] = rhs.arr[i];
            arr_size = rhs.arr_size;
            return (*this);
        }

        ~Array(){
            std::cout << "Destructor Called" << std::endl;
            delete[] arr;
        }
        
        T& operator[](int i){
            if (i >= arr_size || i < 0)
                throw "Index not found - Please try a valide index";
            return (arr[i]);
        }
        
        int size() const{
            return arr_size;
        }

        void push(T data){
            if (index >= arr_size || index < 0)
                throw "Can't push Array is full";
            arr[index] = data;
            index++;
        }

};

#endif