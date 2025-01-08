/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:54:21 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/06 17:14:56 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {

	std::cout << std::endl;
	std::cout << "----------Default Constructors----------" << std::endl;
	ClapTrap y;
	std::cout << GREEN << y << RESET;
	std::cout << std::endl;
	ScavTrap x;
	std::cout << GREEN << x << RESET;
	std::cout << std::endl;

	std::cout << "----------House Creation----------" << std::endl;
	ClapTrap a("House Targaryen");
    ScavTrap b("House Stark");

	std::cout << "----------Red Wedding----------" << std::endl;
	a.attack(b.getName());
    b.attack(a.getName());
	
	std::cout << std::endl;
	a.takeDamage(4);
	b.takeDamage(10);
	
	std::cout << std::endl;
	a.beRepaired(2);
    b.beRepaired(2);
	
	std::cout << std::endl;
	b.guardGate();

	std::cout << std::endl;

	return (0);
}