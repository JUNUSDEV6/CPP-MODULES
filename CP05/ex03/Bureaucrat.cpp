/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:59:56 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/26 12:36:31 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string  &name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw	GradeTooLowException();
	if (grade > 150)
		throw	GradeTooHighException();
    std::cout << "Bureaucrat Contructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade){}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
		_grade = other._grade;
	return *this;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat Destructor Called" << std::endl;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high, the grade must be between 1 & 150 !";
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return	"Grade is too low, the grade must be between 1 & 150 !";
}
std::string Bureaucrat::getName(void) const
{
    return _name;
}

int		Bureaucrat::getGrade(void) const
{
    return  _grade;
}

void	Bureaucrat::incrGrade(void)
{
	if (_grade + 1 > 150)
		throw	GradeTooHighException();
	else
		_grade++;
}

void	Bureaucrat::decrGrade(void)
{
	if (_grade - 1 < 1)
		throw	GradeTooLowException();
	else
		_grade--;
}

void	Bureaucrat::signForm(AForm &aform)
{
	try
	{
		aform.beSigned(*this);
		std::cout <<_name << " signed "  << aform.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " couldn't sign " << aform.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}
std::ostream	&operator<<(std::ostream &os, const Bureaucrat&b)
{
	os << b.getName() << ", Bureaucrat grade " << b.getGrade() << ".";
	return os;
}
