/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 16:45:03 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/06 15:51:02 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap() {
	
    std::cout << YELLOW << "ScavTrap default constructor called" << RESET << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return;
}

ScavTrap::ScavTrap( std::string name ) {
	
	std::cout << MAGENTA << "ScavTrap string constructor called" << RESET << std::endl;

	this->_name = name;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackPoints(20);

	std::cout << "ScavTrap Name : "	<< MAGENTA << getName() << RESET << std::endl;
	std::cout << "ScavTrap Hit Points : " << MAGENTA << getHitPoints() << RESET << std::endl;
	std::cout << "ScavTrap Energy Points : " << MAGENTA << getEnergyPoints() << RESET << std::endl;
	std::cout << "ScavTrap Attack Points : "<< MAGENTA << getAttackDamage() << RESET << std::endl;
	std::cout << std::endl;
	return;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap() {
	
    std::cout << "ScavTrap copy constructor called" << std::endl;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs ) {
    
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
    
	if (this != &rhs)
	{
        ClapTrap::operator=(rhs);       
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return (*this);
}

ScavTrap::~ScavTrap() {
	
    std::cout << ORANGE << "ScavTrap destructor called" << RESET << std::endl;
	return;
}

std::ostream & operator<<(std::ostream & lhs, ScavTrap const & rhs) {
	
	lhs << "ScavTrap " 
		<< rhs.getName() << " has "
			<< rhs.getHitPoints() << " hit points " 
				<< rhs.getEnergyPoints() << " energy points and " 
					<< rhs.getAttackDamage() << " attack points" << std::endl;
	return (lhs);
}

// ---------------------------------------------------------- Methods

void ScavTrap::attack( const std::string & target ) {
	
	if (this->_hitPoints <= 0) {
            std::cout << "ScavTrap " 
						<< MAGENTA << this->_name << RESET
							<< " cannot attack because it has no hit points left." << std::endl;
        } 
		else if (this->_energyPoints <= 0) {
            std::cout << "ScavTrap " 
						<< MAGENTA << this->_name << RESET
							<< " cannot attack because it has no energy points left." << std::endl;
        } 
		else {
            std::cout << "ScavTrap: \"Hold the door!\" " 
						<< GREEN << this->_name << RESET << " attacks " 
							<< MAGENTA << target << RESET ", causing " 
								<< getAttackDamage() << " points of damage" << std::endl;
            this->_energyPoints -= 1;
        }
    }

void ScavTrap::guardGate() {
	
	if (this->_hitPoints <= 0)
	{
		std::cout << YELLOW << this->_name << " is already dead" << RESET << std::endl;
		return;
	}
	if (this->_energyPoints > 0)
		std::cout << "ScavTrap " 
					<< MAGENTA << this->_name << RESET 
						<< " is in a Gate Keeper Mode" << std::endl;
	else
		std::cout << "ScavTrap " 
					<< this->_name << " is out of energy" << std::endl;
	return;
}
