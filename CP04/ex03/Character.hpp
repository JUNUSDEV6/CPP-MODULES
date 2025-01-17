/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:57:27 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/01/17 16:49:45 by youneshanaf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(const std::string &name);
		Character(const Character& other);
		Character& operator=(const Character& other);
		~Character(void);

		virtual	std::string const &getName(void) const;
		virtual	void	equip(AMateria* m);
		virtual	void	unequip(int idx);
		virtual void	use(int idx, ICharacter& target);
	
	private:
		std::string	_name;
		AMateria*	_inventory[4];
};



#endif
