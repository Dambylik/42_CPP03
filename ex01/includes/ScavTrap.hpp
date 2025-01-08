/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 16:41:32 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/05 15:45:26 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
#include "Colors.hpp"

class ScavTrap : public ClapTrap {

    public:
    
        ScavTrap( void );
        ScavTrap( std::string const name );
        ScavTrap( ScavTrap const & src);

        ~ScavTrap();
        
        ScavTrap &  operator=( ScavTrap const & rhs );

        void        attack( const std::string & target );
        void        guardGate( void );
};

std::ostream & operator<<( std::ostream & lhs, ScavTrap const & rhs );