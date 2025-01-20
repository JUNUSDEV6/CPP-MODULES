/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:58:23 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/01/20 17:14:20 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include "AMateria.hpp"

class	ICharacter
{
	public:
		ICharacter(void);
		virtual ~ICharacter(void);
		
		virtual	std::string const &getName(void) const = 0;
		virtual	void	equip(AMateria* m) = 0;
		virtual	void	unequip(int idx) = 0;
		virtual void	use(int idx, ICharacter& target) = 0;
		

	protected:
};

#endif