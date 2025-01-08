/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 16:41:32 by Olly              #+#    #+#             */
/*   Updated: 2025/01/06 16:04:00 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

    public:
    
        ScavTrap( void );
        ScavTrap( ScavTrap const & src);
        ScavTrap( std::string const name );

        ~ScavTrap();
        
        ScavTrap &  operator=( ScavTrap const & rhs );

        void        attack( const std::string & target );
        void        guardGate( void );
   
};

std::ostream & operator<<(std::ostream & lhs, ScavTrap const & rhs);