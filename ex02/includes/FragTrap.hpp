/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 18:54:02 by Olly              #+#    #+#             */
/*   Updated: 2025/01/05 15:54:51 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
#include "Colors.hpp"

class FragTrap : public ClapTrap {

	public:
	
		FragTrap( void );
		FragTrap( FragTrap const & src );
		FragTrap( std::string const name );
		
		~FragTrap();

		FragTrap & 	operator=( FragTrap const & rhs );

		void 		highFivesGuys ( void );
	};

std::ostream & operator<<( std::ostream & lhs, FragTrap const & rhs );