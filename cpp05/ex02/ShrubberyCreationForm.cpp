/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 13:49:18 by mli               #+#    #+#             */
/*   Updated: 2020/10/11 23:12:38 by mli              ###   ########.fr       */
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
	std::ofstream   ofs((target + "_shrubbery").c_str());

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
	ofs.close();
}
