/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:54:21 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/06 16:58:51 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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
    DiamondTrap w;
	std::cout << GREEN << w << RESET;
	std::cout << std::endl;
    
	
	std::cout << "----------House Creation----------" << std::endl;
	ClapTrap a("House Targaryen");
	ScavTrap b("House Stark");
	FragTrap c("House Lannister");
    DiamondTrap d("House Baratheon");

	std::cout << std::endl;
 	
	std::cout << "----------Red Wedding----------" << std::endl;
	a.attack(c.getName());
    b.attack(a.getName());
	c.attack(b.getName());
    d.attack(a.getName());

	std::cout << std::endl;
    a.takeDamage(4);
    b.takeDamage(10);
    c.takeDamage(8);
    d.takeDamage(2);
	
	std::cout << std::endl;
    a.beRepaired(2);
    b.beRepaired(18);
    c.beRepaired(90);
    d.beRepaired(200);
    
	std::cout << std::endl;
    b.guardGate();
	d.guardGate();
	
	std::cout << std::endl;
	c.highFivesGuys();
	d.highFivesGuys();

	std::cout << std::endl;
    d.whoAmI();
	
    std::cout << std::endl;
	
   	return (0);
}
