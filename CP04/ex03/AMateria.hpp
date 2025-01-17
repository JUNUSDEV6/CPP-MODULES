/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:33:17 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/01/17 16:05:27 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class	AMateria
{
	public:
		AMateria(void);
		AMateria(const AMateria& other);
		AMateria& operator=(const AMateria& other);
		virtual	~AMateria(void);

		AMateria(std::string const & type);	
		std::string const &getType(void) const;
		virtual	AMateria* clone(void) const = 0;
		virtual void use(ICharacter &target);
	
	protected:
};


#endif