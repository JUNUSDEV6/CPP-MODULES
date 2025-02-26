/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 13:49:37 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/26 12:34:38 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string &name, const int grade, const int excGrade) : _name(name), _grade(grade), _excGrade(excGrade), _boolean(false)
{
    if (_grade < 1)
        throw   GradeTooLowException();
    if (_grade > 150)
        throw   GradeTooHighException();
    std::cout << "Constructor AForm Called" << std::endl;
}

AForm::AForm(const AForm &other) : _name(other._name), _grade(other._grade), _excGrade(other._excGrade){}

AForm   &AForm::operator=(const AForm &other)
{
    if (this != &other)
        _boolean = other._boolean;
    return *this;
}

AForm::~AForm(void)
{
    std::cout << " AForm Destructor Called" << std::endl;
}

const char  *AForm::GradeTooHighException::what() const throw()
{
    return  "grade is too high, the grade must be between 1 & 150 !";
}

const char  *AForm::GradeTooLowException::what() const throw()
{
    return "grade is too low, the grade must be beween 1 & 150 !";
}

const char  *AForm::FormNotSignedException::what() const throw()
{
    return  "form not signed !";
}

std::string AForm::getName(void)    const
{
    return  _name;
}

int     AForm::getGrade(void)   const
{
    return  _grade;
}

int     AForm::getExcGrade(void)    const
{
    return  _excGrade;
}

bool    AForm::getBool(void)    const
{
    return  _boolean;
}

void    AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > _excGrade)
        throw   GradeTooLowException();
    _boolean = true;
}

void    AForm::execute(Bureaucrat const & executor) const
{
    if (!_boolean)
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > _excGrade)
        throw AForm::GradeTooLowException();
    executeAction();
}

std::ostream    &operator<<(std::ostream &os, const AForm &form)
{
    os << "Form " << form.getName() << " (sign grade : " << form.getGrade() << ", Execute grade: " << form.getExcGrade() << ", Signed: " << (form.getBool() ? "Yes" : "No") << ")";
    return os;
}
