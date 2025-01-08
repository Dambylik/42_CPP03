/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 18:54:02 by Olly              #+#    #+#             */
/*   Updated: 2025/01/06 16:03:16 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap { 

	public:

		FragTrap( void );
		FragTrap( FragTrap const & src);
		FragTrap( std::string const name );
		
		~FragTrap();

		FragTrap & operator=( FragTrap const & rhs );

		void highFivesGuys( void );
		
    };

std::ostream & operator<<(std::ostream & lhs, FragTrap const & rhs);