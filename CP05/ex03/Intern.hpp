/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:43:01 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/26 14:23:38 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

class   Intern
{
    public:
        Intern(void);
        Intern(const Intern &other);
        Intern  &operator=(const Intern &other);
        ~Intern(void);

        AForm*    makeForm(const std::string  &name, const std::string &target);
};

#endif
