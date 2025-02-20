/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:19:20 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/20 12:26:51 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"

class   RobotomyRequestForm : public : AForm
{
    public:
        RobotomyRequestForm(const std::string &target);
        virtual ~RobotomyRequestForm(void);
        void    executeAction(void) const;
};

#endif