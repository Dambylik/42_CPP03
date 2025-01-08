/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 19:02:00 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/06 16:06:31 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap() {
	
    std::cout << LGREEN << "FragTrap default constructor called" << RESET << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return;
}

FragTrap::FragTrap( std::string name ) {
    
	std::cout << LGREEN << "FragTrap string constructor called" << RESET << std::endl;

	this->_name = name;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackPoints(30);

	std::cout << "FragTrap Name : "	<< LGREEN << getName() << RESET << std::endl;
	std::cout << "FragTrap Hit Points : " << LGREEN << getHitPoints() << RESET << std::endl;
	std::cout << "FragTrap Energy Points : " << LGREEN << getEnergyPoints() << RESET << std::endl;
	std::cout << "FragTrap Attack Points : "<< LGREEN << getAttackDamage() << RESET << std::endl;
	std::cout << std::endl;
    return;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap() {
    
	std::cout << "FragTrap copy constructor called" << std::endl;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
	return;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {
	
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    
	if (this != &rhs)
	{
        ClapTrap::operator=(rhs);
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return (*this);
}

FragTrap::~FragTrap() {
    
	std::cout << LYELLOW << "FragTrap destructor called" << RESET << std::endl;
    return;    
}

std::ostream & operator<<(std::ostream & lhs, FragTrap const & rhs)
{
	lhs << "FragTrap " 
			<< rhs.getName()<< " has "
				<< rhs.FragTrap::getHitPoints() << " hit points, "
					<< rhs.FragTrap::getEnergyPoints() << " energy points and "
						<< rhs.FragTrap::getAttackDamage() << " attack points" << std::endl;
	return (lhs);
}

// ---------------------------------------------------------- Methods

void FragTrap::highFivesGuys() {
    
    std::cout << "FragTrap " 
                << LGREEN << getName() << RESET << " wants to high5 to all houses!" << std::endl;
}

