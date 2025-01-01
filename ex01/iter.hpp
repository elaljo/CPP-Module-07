/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:50:02 by moelalj           #+#    #+#             */
/*   Updated: 2025/01/01 21:52:46 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
template    <typename T>
void    print(T x){
    std::cout << x << std::endl;
}

template    <typename T>
void    iter(T* arr, int arr_len, void (*func)(T)){
    for (int i = 0; i < arr_len; i++)
        func(arr[i]);
}

#endif