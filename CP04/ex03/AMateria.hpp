/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:33:17 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/01/20 17:21:35 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class	ICharacter;

class	AMateria
{
	public:
		AMateria(void);
		virtual	~AMateria(void);

		AMateria(std::string const & type);	
		std::string const &getType(void) const;
		virtual	AMateria* clone(void) const = 0;
		virtual void use(ICharacter &target);
	
	protected:
		std::string	_type;
};


#endif