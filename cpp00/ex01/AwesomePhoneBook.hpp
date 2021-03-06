/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AwesomePhoneBook.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 16:17:51 by mli               #+#    #+#             */
/*   Updated: 2020/08/01 23:10:15 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOMEPHONEBOOK_H
# define AWESOMEPHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

void	ft_plist(const Contact book[8], int i);
void	ft_pContact(const Contact &contact);

#endif // ********************************************** AWESOMEPHONEBOOK end //
