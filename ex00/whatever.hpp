/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:50:23 by moelalj           #+#    #+#             */
/*   Updated: 2025/01/04 22:29:03 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
    void swap(T &a, T &b){
            T tmp = a;
            a = b;
            b = tmp;
        }
template <typename T>
    T min(T a, T b){
        if (a == b)
            return b;
        else if (a > b)
            return b;
        else
            return a;
    }
template <typename T>
    T max(T a, T b){
        if (a == b)
            return b;
        else if (a > b)
            return a;
        else
            return b;
    }
    
#endif