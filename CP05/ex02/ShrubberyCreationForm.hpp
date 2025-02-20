/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:20:33 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/20 12:40:08 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP
# include <fstream>
# include "AForm.hpp"

class   ShrubberyCreationForm : public : AForm
{
    public:
        ShrubberyCreationForm(const std::string &target);
        virtual ~ShrubberyCreationForm(void);
        void   executeAction(void)  const;
    
    private:
        std::string target;
};

#endif