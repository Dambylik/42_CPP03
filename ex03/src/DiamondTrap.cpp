/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 09:44:14 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/06 17:22:33 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): ClapTrap(), FragTrap(), ScavTrap() {
    
    std::cout << YELLOW << "DiamondTrap default constructor called" << RESET << std::endl;

    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 30;
    
	return;
}

DiamondTrap::DiamondTrap( std::string const name ): ClapTrap(), FragTrap(), ScavTrap() {
    
    std::cout << YELLOW << "DiamondTrap string constructor called" << RESET << std::endl;

    this->_name = name;
    ClapTrap::_name = name + "_clap_name";
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackPoints(30);

    std::cout << "DiamondTrap Name : " << YELLOW << this->_name << RESET << std::endl;
    std::cout << "DiamondTrap ClapTrap Name : " << YELLOW << ClapTrap::_name << RESET << std::endl;
    std::cout << "DiamondTrap Hit Points : " << YELLOW << this->_hitPoints << RESET << std::endl;
    std::cout << "DiamondTrap Energy Points : " << YELLOW << this->_energyPoints << RESET << std::endl;
    std::cout << "DiamondTrap Attack Points : " << YELLOW << this->_attackDamage << RESET << std::endl;
    std::cout << std::endl;
    return;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap(), FragTrap(), ScavTrap(), _name(src._name) {
    
    std::cout << YELLOW << "DiamondTrap copy constructor called" << RESET << std::endl;
    
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;

    std::cout << "DiamondTrap Name : " << YELLOW << this->_name << RESET << std::endl;
    std::cout << "DiamondTrap Hit Points : " << YELLOW << this->_hitPoints << RESET << std::endl;
    std::cout << "DiamondTrap Energy Points : " << YELLOW << this->_energyPoints << RESET << std::endl;
    std::cout << "DiamondTrap Attack Points : " << YELLOW << this->_attackDamage << RESET << std::endl;
    std::cout << std::endl;
}

DiamondTrap::~DiamondTrap() {
    
    std::cout << GRAY << "DiamondTrap destructor called" << RESET << std::endl;
	return;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs) {
    
    std::cout << YELLOW << "DiamondTrap Assignment operator called" << RESET << std::endl;
    
    if (this != &rhs)
    {
        ClapTrap::operator=(rhs);
        FragTrap::operator=(rhs);
        ScavTrap::operator=(rhs);

        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return (*this);
}


std::ostream & operator<<(std::ostream & lhs, DiamondTrap const & rhs) {
	
    lhs << "DiamondTrap " 
			<< rhs.DiamondTrap::getName()<< " has "
				<< rhs.DiamondTrap::getHitPoints() << " hit points, "
					<< rhs.DiamondTrap::getEnergyPoints() << " energy points and "
						<< rhs.DiamondTrap::getAttackDamage() << " attack points" << std::endl;
	return (lhs);
}

void DiamondTrap::attack(const std::string & target) {
    
    ScavTrap::attack(target);
    return;
}

// ---------------------------------------------------------- Methods

void DiamondTrap::whoAmI() {
    
    std::cout << "DiamondTrap name: " 
                << YELLOW << DiamondTrap::_name << RESET
                    << ", ClapTrap name: " 
                        << YELLOW << ClapTrap::_name << RESET << std::endl;
    return;
}
