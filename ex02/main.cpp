/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 22:40:47 by moelalj           #+#    #+#             */
/*   Updated: 2025/01/05 15:54:17 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
    Array<int> intArray(3);
    
    try{
        intArray.push(1);
        intArray.push(2);
        intArray.push(10);
        for (int i = 0; i < intArray.size(); i++)
            std::cout << "arr[" << i << "] = " << intArray[i] << std::endl;
    }
    catch(std::exception &e){
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    
    return 0;
}