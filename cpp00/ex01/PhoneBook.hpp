/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mli <mli@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 22:32:51 by mli               #+#    #+#             */
/*   Updated: 2020/07/24 00:05:45 by mli              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);

		static int	getContactNb(void);
		static void	incContactNb(void);
	private:
		static int _ContactNb;
};

#endif // ********************************************* PHONEBOOK_CLASS_H end //

/*
first_name
last_name
nickname
login
postal_address
email_address
phone_number
birthday_date
favorite_meal
underwear_color
darkest_secret
*/
