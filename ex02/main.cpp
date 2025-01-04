/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 22:40:47 by moelalj           #+#    #+#             */
/*   Updated: 2025/01/04 17:55:10 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
    try{
        Array<int> intArray(3);
        intArray.push(5);
        intArray.push(4);
        intArray.push(3);
        for (int i = 0; i < intArray.size(); i++)
            std::cout << intArray[i] << std::endl;
    }
    catch(const char* err){
        std::cout << err << std::endl;
    }
    
    return 0;
}