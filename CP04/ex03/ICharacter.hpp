/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:58:23 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/01/17 16:49:06 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include "AMateria.hpp"

class	ICharacter
{
	public:
		ICharacter(void);
		ICharacter(const ICharacter& other);
		ICharacter& operator=(const ICharacter& other);
		virtual ~ICharacter(void);
		
		virtual	std::string const &getName(void) const = 0;
		virtual	void	equip(AMateria* m) = 0;
		virtual	void	unequip(int idx) = 0;
		virtual void	use(int idx, ICharacter& target) = 0;
		

	protected:
};

#endif