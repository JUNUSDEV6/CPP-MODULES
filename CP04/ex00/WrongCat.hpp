/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:41:39 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/15 14:46:21 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class   WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(const WrongCat& other);
        WrongCat& operator=(const WrongCat& other);
        virtual ~WrongCat(void);

};

#endif