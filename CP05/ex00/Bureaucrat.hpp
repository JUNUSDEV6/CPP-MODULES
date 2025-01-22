/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:41:18 by yohanafi          #+#    #+#             */
/*   Updated: 2025/01/22 18:10:21 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCAT_HPP
# define BUREAUCAT_HPP
# include <iostream>
class   Bureaucrat
{
    public:
        Bureaucrat(void);
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat& operator=(const Bureaucrat& other);
        ~Bureaucrat(void);

        std::string getName(void) const;
        std::string getGrade(void) const;
    
    private:
        std::string _name;
        std::string _grade[150];

}

#endif