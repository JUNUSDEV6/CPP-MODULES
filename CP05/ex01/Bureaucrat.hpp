/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:41:18 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/17 15:29:56 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCAT_HPP
# define BUREAUCAT_HPP
# include <iostream>
# include <stdexcept>
# include <string>

class   Bureaucrat
{
    public:
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat  &operator=(const Bureaucrat &other);
        ~Bureaucrat(void);

		class	GradeTooHighException : public std::exception
		{
			public:
        		virtual const char *what() const throw();
    	};

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

        std::string getName(void) const;
        int         getGrade(void) const;
        void        incrGrade(void);
        void        decrGrade(void);
        void        signForm(void);
    
    private:
        std::string _name;
        int         _grade;

};

std::ostream    &operator<<(std::ostream &os, const Bureaucrat &b);

#endif
