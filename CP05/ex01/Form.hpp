/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:17:30 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/17 16:47:14 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <stdexcept>
# include <string>

class   Form
{
    public:
        Form(const std::string &name, const int grade, const int excGrade);
        Form(const Form &other);
        Form    &operator=(const Form &other);
        ~Form(void);

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

        std::string getName(void)       const;
        int         getGrade(void)      const;
        int         getExcGrade(void)   const;
        bool        getBool(void)       const;
        void        beSigned(const Bureaucrat &bureaucrat);

    private:
        std::string _name;
        bool        _boolean;
        int         _grade;
        int         _excGrade;
};

std::ostream    &operator<<(std::ostream &os, const Form &b);

#endif
