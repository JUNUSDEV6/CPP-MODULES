/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:57:27 by youneshanaf       #+#    #+#             */
/*   Updated: 2025/01/21 16:22:15 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include <string>
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
		virtual void    printMaterias(); 
	
	private:
		std::string	_name;
		AMateria*	_inventory[4];
};



#endif
