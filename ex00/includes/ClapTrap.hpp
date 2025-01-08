/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:55:09 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/05 15:44:57 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Colors.hpp"


class ClapTrap {

    public:
        
        ClapTrap( void );
        ClapTrap( ClapTrap const & src );
        ClapTrap( std::string name );
    
        ~ClapTrap();

        ClapTrap &	    operator=( ClapTrap const & rhs );
        
        void            attack( const std::string & target );
        void            takeDamage( unsigned int amount );
        void            beRepaired( unsigned int amount );

        void            setName( std::string name );
        void            setHitPoints( unsigned int points );
        void            setEnergyPoints( unsigned int energyPoints );

        std::string     getName()           const;
        unsigned int    getHitPoints()      const;
        unsigned int    getEnergyPoints()   const;
        unsigned int    getAttackDamage()   const;

        
    private:

        std::string     _name;
        unsigned int    _hitPoints;
        unsigned int    _energyPoints;
		unsigned int    _attackDamage;
};

std::ostream & operator<<( std::ostream & lhs, ClapTrap const & rhs );
