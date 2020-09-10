/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:49:41 by mli               #+#    #+#             */
/*   Updated: 2020/09/10 13:49:43 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : \
		Form("ShrubberyCreationForm", 145, 137, target) {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) {
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	if (this == &rhs)
		return (*this);
	Form::operator=(rhs);
	return (*this);
}

void			ShrubberyCreationForm::action(std::string const &target) const {
	std::ofstream   ofs(target + "_shrubbery");

	ofs << \
"                                              ."		<< std::endl << \
"                                   .         ;"		<< std::endl << \
"      .              .              ;%     ;;"			<< std::endl << \
"        ,           ,                :;%  %;"			<< std::endl << \
"         :         ;                   :;%;'     .,"	<< std::endl << \
",.        %;     %;            ;        %;'    ,;"		<< std::endl << \
"  ;       ;%;  %%;        ,     %;    ;%;    ,%'"		<< std::endl << \
"   %;       %;%;      ,  ;       %;  ;%;   ,%;'"		<< std::endl << \
"    ;%;      %;        ;%;        % ;%;  ,%;'"			<< std::endl << \
"     `%;.     ;%;     %;'         `;%%;.%;'"			<< std::endl << \
"      `:;%.    ;%%. %@;        %; ;@%;%'"				<< std::endl << \
"         `:%;.  :;bd%;          %;@%;'"				<< std::endl << \
"           `@%:.  :;%.         ;@@%;'"					<< std::endl << \
"             `@%.  `;@%.      ;@@%;"					<< std::endl << \
"               `@%%. `@%%    ;@@%;"					<< std::endl << \
"                 ;@%. :@%%  %@@%;"						<< std::endl << \
"                   %@bd%%%bd%%:;"						<< std::endl << \
"                     #@%%%%%:;;"						<< std::endl << \
"                     %@@%%%::;"						<< std::endl << \
"                     %@@@%(o);  . '"					<< std::endl << \
"                     %@@@o%;:(.,'"						<< std::endl << \
"                 `.. %@@@o%::;"						<< std::endl << \
"                    `)@@@o%::;"						<< std::endl << \
"                     %@@(o)::;"						<< std::endl << \
"                    .%@@@@%::;"						<< std::endl << \
"                    ;%@@@@%::;."						<< std::endl << \
"                   ;%@@@@%%:;;;."						<< std::endl << \
"               ...;%@@@@@%%:;;;;,.."					<< std::endl;
}
