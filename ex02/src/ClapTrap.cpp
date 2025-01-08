/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:54:56 by Olly              #+#    #+#             */
/*   Updated: 2025/01/06 15:08:30 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	
	std::cout << GRAY << "ClapTrap default constructor called" << RESET << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

	std::cout << GREEN << "ClapTrap string constructor called" << RESET << std::endl;

	std::cout << "ClapTrap Name : "	<< GREEN << getName() << RESET << std::endl;
	std::cout << "ClapTrap Hit Points : " << GREEN << getHitPoints() << RESET << std::endl;
	std::cout << "ClapTrap Energy Points : " << GREEN << getEnergyPoints() << RESET << std::endl;
	std::cout << "ClapTrap Attack Points : "<< GREEN << getAttackDamage() << RESET << std::endl;
	std::cout << std::endl;
	return;
}

ClapTrap::ClapTrap( ClapTrap const & src) 
{
	std::cout << GREEN << "ClapTrap copy constructor called" << RESET << std::endl;

	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;

	std::cout << "ClapTrap Name : "	<< GREEN << getName() << RESET << std::endl;
	std::cout << "ClapTrap Hit Points : " << GREEN << getHitPoints() << RESET << std::endl;
	std::cout << "ClapTrap Energy Points : " << GREEN << getEnergyPoints() << RESET << std::endl;
	std::cout << "ClapTrap Attack Points : "<< GREEN << getAttackDamage() << RESET << std::endl;
	std::cout << std::endl;
}

ClapTrap::~ClapTrap() {
	
		std::cout << RED << "ClapTrap destructor called" << RESET << std::endl;
		return;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs ) {
	
	std::cout << YELLOW << "ClapTrap Assignment operator called" << RESET << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

std::ostream & operator<<(std::ostream & lhs, ClapTrap const & rhs) {
	
	lhs << "ClapTrap " 
			<< rhs.getName()<< "has "
				<< rhs.getHitPoints() << " hit points, "
					<< rhs.getEnergyPoints() << " energy points and "
						<< rhs.getAttackDamage() << " attack points" << std::endl;
	return (lhs);
}

// ---------------------------------------------------------- Methods

void ClapTrap::attack(const std::string & target) {
	
	if (this->_hitPoints == 0 || this->_energyPoints == 0)
		std::cout << "ClapTrap " 
					<< GREEN << this->_name << RESET
						<< " has no points at all" << std::endl;
	else
	{
		std::cout << "ClapTrap: \"Dracarys!\" "
					<< GREEN << this->_name << RESET << " attacks " 
						<< MAGENTA << target << RESET << ", causing " 
							<< getAttackDamage() << " points of damage" << std::endl;
		this->_energyPoints -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	
	if (this->_hitPoints == 0 || this->_energyPoints == 0)
		std::cout << "ClapTrap " 
					<< GREEN << this->_name << RESET
						<< " has no points at all" << std::endl;
	else
	{
		std::cout << "ClapTrap " 
					<< GREEN << this->_name << RESET 
						<< " has been attacked and lost a total of "
							<< amount << " points" << std::endl;
		if (this->_hitPoints < amount)
			this->_hitPoints = 0;
		else
			this->_hitPoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	
	if (this->_hitPoints == 0 || this->_energyPoints == 0)
		std::cout << "ClapTrap " 
					<< GREEN << this->_name << RESET
						<< " has no points at all" << std::endl;
	else
	{
		std::cout << "ClapTrap " 
					<< GREEN << this->_name << RESET
						<< " is under repair and will receive a total of "
							<< amount << " points" << std::endl;

		if (this->_hitPoints < amount)
			this->_hitPoints = 0;
		else
			this->_hitPoints += amount;

		this->_energyPoints -= 1;
	}

}

// ---------------------------------------------------------- Setters & Getters
void ClapTrap::setName(std::string name) { this->_name = name; }
void ClapTrap::setHitPoints(unsigned int points) { this->_hitPoints = points; }
void ClapTrap::setEnergyPoints(unsigned int energyPoints) { this->_energyPoints = energyPoints; }
void ClapTrap::setAttackPoints(unsigned int damagePoints) { this->_attackDamage = damagePoints; }

std::string ClapTrap::getName() const { return this->_name; }
unsigned int ClapTrap::getHitPoints() const { return this->_hitPoints; }
unsigned int ClapTrap::getEnergyPoints() const { return this->_energyPoints; }
unsigned int ClapTrap::getAttackDamage() const { return this->_attackDamage; }