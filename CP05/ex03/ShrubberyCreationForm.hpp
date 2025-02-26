/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:20:33 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/26 15:13:11 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP
# include <fstream>
# include "AForm.hpp"

class   AForm;

class   ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm(const std::string &target);
        virtual ~ShrubberyCreationForm(void);
        void   executeAction(void)  const;
        static  AForm*  create(const std::string &target);
    
    private:
        std::string _target;
};

#endif
