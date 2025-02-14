/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:41:18 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/14 17:28:09 by youneshanaf      ###   ########.fr       */
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

#endif