/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:41:18 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/17 13:35:47 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCAT_HPP
# define BUREAUCAT_HPP
# include <iostream>

class   Bureaucrat
{
    public:
        Bureaucrat(const std::string &name, int grade);
        ~Bureaucrat(void);

		class	GradeTooHighException : std::exception
		{
			public:
        		virtual const char *what() const throw();
    	};

		class	GradeTooLowException : std::exception
		{
			public:
				virtual const char *what() const throw();
		};

        std::string getName(void) const;
        int         getGrade(void) const;
        void        incrGrade(void);
        void        decrGrade(void);

    
    private:
        std::string _name;
        int         _grade;

};

std::ostream    &operator<<(std::ostream &os, const Bureaucrat &b);

#endif