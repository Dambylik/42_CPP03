/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 09:41:40 by Olly              #+#    #+#             */
/*   Updated: 2025/01/06 17:19:19 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    
    public:
        
        DiamondTrap( void );
        DiamondTrap( DiamondTrap const & src );
        DiamondTrap( std::string const name );
        
        ~DiamondTrap();

        DiamondTrap & operator=( DiamondTrap const & rhs );

        void attack( const std::string & target );
        void whoAmI();

    private:
    
        std::string _name;
};

std::ostream & operator<<(std::ostream & lhs, DiamondTrap const & rhs);
