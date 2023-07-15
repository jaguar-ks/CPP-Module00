/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 07:50:16 by faksouss          #+#    #+#             */
/*   Updated: 2023/07/15 09:17:44 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include<string>
#include<Contact.hpp>

class PhoneBook {
    private :
        Contact contacts[8];
        int     index;
    
    public :
        void add_contact(void);
        void search_contact(void);
        PhoneBook(void);
};
