/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 07:11:49 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/28 14:43:26 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class	Bureaucrat;

class	Form {
	private:
		bool				_signed;
		std::string const	_name;
		int	const			_grade_to_sign;
		int	const			_grade_to_exec;
	public:
		Form(void);
		Form(std::string const & name, int const & sign, int const & exec);
		Form(std::string const & name, int const & grade);
		Form(Form const & copy);

		~Form(void);

		Form	&operator=(Form const & copy);

		int			getGradeToExecute(void) const;
		int			getGradeToSign(void) const;
		std::string	getName(void) const;

		void		beSigned(Bureaucrat const & bureaucrat);

		class	GradeTooHighException :	public std::exception {
			public:
				virtual const char * what() const throw() {
					return ("grade is too low");
				}
		};

		class	GradeTooLowException :	public std::exception {
			public:
				virtual const char * what() const throw() {
					return ("grade is too high");
				}
		};
};

std::ostream	&operator<<(std::ostream & o, Form const & rhs);

