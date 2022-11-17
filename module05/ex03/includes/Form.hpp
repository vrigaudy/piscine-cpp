/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 07:11:49 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/10/30 02:13:45 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class	Bureaucrat;

class	Form {
	protected:
		std::string const	_name;
		int	const			_grade_to_sign;
		int	const			_grade_to_exec;
		bool				_signed;
	public:
		Form(void);
		Form(std::string const & name, int const & sign, int const & exec);
		Form(Form const & copy);

		virtual ~Form(void);

		Form	&operator=(Form const & copy);

		int				getGradeToExecute(void) const;
		int				getGradeToSign(void) const;
		bool			getIsSigned(void) const;
		std::string		getName(void) const;

		void			beSigned(Bureaucrat const & bureaucrat);
		void			execute(Bureaucrat const & executor);
		virtual void	doExec(void) = 0;

		class	GradeTooHighException:	public std::exception {
			public:
				virtual const char * what() const throw() {
					return ("grade is too low");
				}
		};

		class	GradeTooLowException:	public std::exception {
			public:
				virtual const char * what() const throw() {
					return ("grade is too high");
				}
		};

		class	FormNotSignedException:	public std::exception {
			public:
				virtual const char * what() const throw() {
					return ("form is not signed");
				}
		};
};

std::ostream	&operator<<(std::ostream & o, Form const & rhs);

