/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:12:13 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/30 02:08:13 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	RobotomyRequestForm:	public Form {
	private:
		bool		_fail;
		std::string	_target;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const & name, std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm const & copy);

		~RobotomyRequestForm(void);

		RobotomyRequestForm	&operator=(RobotomyRequestForm const & copy);

		std::string	getTarget(void) const;
		bool		getFail(void) const;

		void		changeFail(void);

		void	doExec(void);
};
