/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:54:21 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/06 17:16:06 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
	
	std::cout << std::endl;
	std::cout << "----------Default Constructors----------" << std::endl;
	ClapTrap y;
	std::cout << GREEN << y << RESET;
	std::cout << std::endl;
	ScavTrap x;
	std::cout << GREEN << x << RESET;
	std::cout << std::endl;
	FragTrap z;
	std::cout << GREEN << z << RESET;
	std::cout << std::endl;
	
	std::cout << "----------House Creation----------" << std::endl;
	ClapTrap a("House Targaryen");
	ScavTrap b("House Stark");
	FragTrap c("House Lannister");

	std::cout << "----------Red Wedding----------" << std::endl;
	a.attack(c.getName());
    b.attack(a.getName());
	c.attack(b.getName());
	
	std::cout << std::endl;
	a.takeDamage(4);
	b.takeDamage(10);
	c.takeDamage(8);
	
	std::cout << std::endl;
    a.beRepaired(2);
	b.beRepaired(12);
	c.beRepaired(8);
	
	std::cout << std::endl;
	b.guardGate();

	std::cout << std::endl;
    c.highFivesGuys();

	return (0);
}
