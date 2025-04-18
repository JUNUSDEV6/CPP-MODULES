/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:27:03 by yohanafi          #+#    #+#             */
/*   Updated: 2025/02/26 15:01:12 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <fstream>
# include "AForm.hpp"

class   AForm;

class   PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm(const std::string &target);
        virtual ~PresidentialPardonForm(void);
        void    executeAction(void)     const;
        static  AForm*  create(const std::string &target);
    
     private:
        std::string _target;
};

#endif
