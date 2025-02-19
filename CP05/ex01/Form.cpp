/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:36:48 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/19 11:25:34 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string &name, const int grade, const int excGrade) : _name(name), _grade(grade), _excGrade(excGrade), _boolean(false)
{
    if (grade < 1)
        throw   GradeTooLowException();
    if (grade > 150)
        throw   GradeTooHighException();
    std::cout << "Form Constructor Called" << std::endl;
}

Form::Form(const Form &other) : _name(other._name), _grade(other._grade), _excGrade(other._excGrade), _boolean(other._boolean){}

Form    &Form::operator=(const Form &other)
{
    if (this != &other)
        _boolean = other._boolean;
    return  *this;
}

Form::~Form(void)
{
    std::cout << "Form Destructor Called" << std::endl;
}

const char  *Form::GradeTooHighException::what() const throw()
{
    return  "grade is too high, the grade must be between 1 & 150 !";
}

const char  *Form::GradeTooLowException::what() const throw()
{
    return "grade is too low, the grade must be beween 1 & 150 !";
}

std::string Form::getName(void) const
{
    return _name;
}

int     Form::getGrade(void) const
{
    return _grade;
}

int     Form::getExcGrade(void) const
{
    return  _excGrade;
}

bool    Form::getBool(void) const
{
    return _boolean;
}

void    Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() < _excGrade)
        throw   GradeTooLowException();
    _boolean = true;
}

std::ostream    &operator<<(std::ostream &os, const Form &form)
{
     os << "Form " << form.getName() << " (Sign grade: " << form.getGrade() << ", Execute grade: " << form.getExcGrade() << ", Signed: " << (form.getBool() ? "Yes" : "No") << ")";
     return os;
}
