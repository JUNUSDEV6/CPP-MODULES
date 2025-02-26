/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:19:20 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/26 15:08:01 by yohanafi         ###   ########.fr       */
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
        static  AForm*  create(const std::string &target);
    
     private:
        std::string _target;
};

#endif
