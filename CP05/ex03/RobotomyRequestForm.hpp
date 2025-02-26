/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:19:20 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/26 11:54:17 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <fstream>
# include "AForm.hpp"

class   AForm;

class   RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm(const std::string &target);
        virtual ~RobotomyRequestForm(void);
        void    executeAction(void) const;
    
     private:
        std::string _target;
};

#endif
