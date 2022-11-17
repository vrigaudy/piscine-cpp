/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:12:13 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/30 02:08:59 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define TREE "          &&& &&  & &&\n      && &\\/&\\|& ()|/ @, &&\n      &\\/(/&/&||/& /_/)_&/_&\n   &() &\\/&|()|/&\\/ '%\" & ()\n  &_\\_&&_\\ |& |&&/&__%_/_& &&\n&&   && & &| &| /& & % ()& /&&\n ()&_---()&\\&\\|&&-&&--%---()~\n     &&     \\|||\n             |||\n             |||\n             |||\n       , -=-~  .-^- _\n"

#include "Form.hpp"
#include "string"
#include <fstream>

class	Bureaucrat;

class	ShruberryCreationForm:	public Form {
	private:
		std::string	_target;
	public:
		ShruberryCreationForm(void);
		ShruberryCreationForm(std::string const & name, std::string const & target);
		ShruberryCreationForm(ShruberryCreationForm const & copy);

		~ShruberryCreationForm(void);

		ShruberryCreationForm	&operator=(ShruberryCreationForm const & copy);

		std::string	getTarget(void) const;

		void	doExec(void);
};
