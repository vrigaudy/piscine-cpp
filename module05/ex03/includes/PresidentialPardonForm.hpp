/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:44:43 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/30 02:08:49 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	PresidentialPardonForm:	public Form {
	private:
		std::string	_target;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const & name, std::string const & target);
		PresidentialPardonForm(PresidentialPardonForm const & copy);

		PresidentialPardonForm	&operator=(PresidentialPardonForm const & copy);

		~PresidentialPardonForm(void);

		std::string	getTarget(void) const;

		void	doExec(void);
};
