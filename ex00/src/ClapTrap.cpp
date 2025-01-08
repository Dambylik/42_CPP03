/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:54:56 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/06 14:06:20 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap ( void ) : _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    
    std::cout << YELLOW << "Default constructor called" << RESET << std::endl;
    return;
}

ClapTrap::ClapTrap ( ClapTrap const & src ) {

    std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
    this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
    return;
}

ClapTrap::ClapTrap ( std::string name ): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    
    std::cout << YELLOW << "String constructor called" << RESET << std::endl;
    return;
}

ClapTrap::~ClapTrap () {
    
    std::cout << RED << "Default destructor called" << RESET << std::endl;
    return;
}

ClapTrap & ClapTrap::operator=( const ClapTrap & rhs ) {
	
	std::cout << GREEN << "Copy assignment operator called" << RESET << std::endl;
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return ( *this );
}

std::ostream & operator<<( std::ostream & lhs, ClapTrap const & rhs ) {
	
	lhs << "ClapTrap " 
			<< rhs.getName()<< " has "
				<< rhs.getHitPoints() << " hit points, "
					<< rhs.getEnergyPoints() << " energy points and "
						<< rhs.getAttackDamage() << " attack points" << std::endl;
	return (lhs);
}

// -------------------------------------------------------------------- Methods

void ClapTrap::attack( const std::string & target ) {
	
        if (this->_hitPoints <= 0) {
            std::cout << "ClapTrap " 
						<< GREEN << this->_name << RESET 
							<< " cannot attack because it has no hit points left." << std::endl;
        } 
		else if (this->_energyPoints <= 0) {
            std::cout << "ClapTrap " 
						<< GREEN << this->_name << RESET 
							<< " cannot attack because it has no energy points left." << std::endl;
        } 
		else {
            std::cout << "ClapTrap: \"Dracarys!\" " 
						<< GREEN << this->_name << RESET << " attacks " 
							<< MAGENTA << target << RESET ", causing " 
								<< getAttackDamage() << " points of damage" << std::endl;
            this->_energyPoints -= 1;
        }
    }

    void ClapTrap::takeDamage( unsigned int amount ) {
		
        this->_hitPoints -= amount;
		
        if (this->_hitPoints < 0)
			this->_hitPoints = 0;
		std::cout << "ClapTrap " 
					<< GREEN << this->_name << RESET 
						<< " has been attacked and lost a total of "
							<< amount << " points of damage."
                  				<< " Current hit points: " << getHitPoints() << std::endl;
    }

    void ClapTrap::beRepaired( unsigned int amount ) {
		
        if (this->_hitPoints <= 0) {
			std::cout << "ClapTrap " 
					<< GREEN << this->_name << RESET
						<< " cannot repair because it has no hit points left" << std::endl;
        }
		else if (this->_energyPoints <= 0) {
			std::cout << "ClapTrap " 
					<< GREEN << this->_name << RESET
						<< " cannot repair because it has no energy points left" << std::endl;
        }
		else {
            this->_hitPoints += amount;
            this->_energyPoints -= 1;
            std::cout << "ClapTrap "
						<< GREEN << this->_name << RESET
							<< " repairs itself for " << amount << " hit points."
                      			<< " Current hit points: " << getHitPoints() << std::endl;
        }
    }

// -------------------------------------------------------------------- Setters & Getters

void ClapTrap::setName(std::string name) { this->_name = name; }
void ClapTrap::setHitPoints(unsigned int points) { this->_hitPoints = points; }
void ClapTrap::setEnergyPoints(unsigned int energyPoints) { this->_energyPoints = energyPoints; }

std::string ClapTrap::getName() const { return this->_name; }
unsigned int ClapTrap::getHitPoints() const { return this->_hitPoints; }
unsigned int ClapTrap::getEnergyPoints() const { return this->_energyPoints; }
unsigned int ClapTrap::getAttackDamage() const { return this->_attackDamage; }