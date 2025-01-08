/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:54:21 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/06 12:10:04 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ( void ) {

    std::cout << std::endl;
	std::cout << "----------Default Constructors----------" << std::endl;
	ClapTrap y;
    std::cout << GREEN << y << RESET;
	std::cout << std::endl;
    
  	std::cout << "----------House Creation----------" << std::endl;
    ClapTrap a("House Targaryen");
    std::cout << MAGENTA << a << RESET;
    
    std::cout << std::endl;
    std::cout << "----------Red Wedding----------" << std::endl;
    a.attack("House Stark");
	a.takeDamage(6);
	a.beRepaired(2);

    std::cout << std::endl;
    
	return (0);
}