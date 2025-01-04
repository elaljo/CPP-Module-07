/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:50:02 by moelalj           #+#    #+#             */
/*   Updated: 2025/01/04 22:38:42 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template    <typename T>
void    print(T data){
    std::cout << data << std::endl;
}

template    <typename T>
void    iter(T* arr, int arr_len, void (*func)(T)){
    for (int i = 0; i < arr_len; i++)
        func(arr[i]);
}

#endif