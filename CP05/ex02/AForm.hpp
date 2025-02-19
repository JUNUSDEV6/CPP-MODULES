/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:59:41 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/19 15:02:16 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include <iostream>
# include <stdexcept>
# include <string>

class   AFORM
{
    public:
        AForm(const std::string &name, const int grade, const int excGrade);
        AForm(const AForm &other);
        AForm   &operator=(const AForm &other);
        virtual ~AForm(void);

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

        class   FormNotSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        }
        
        std::string &getName(void)      const;
        int         getGrade(void)      const;
        int         getExcGrade(void)   const;
        bool        getBool(void)       const;
        void        beSigned(Bureaucrat &Bureaucrat);
        void        execute(Bureaucrat const & executor) const;
        virtual void    executeAction() const = 0;

    private:
        std::string _name;
        const int   _grade;
        const int   _excGrade;
        bool        _boolean;
};

std::ostream    &operator<<(std::ostream &os, const Form &b);

#endif