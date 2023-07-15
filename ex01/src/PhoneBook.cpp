/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 07:50:32 by faksouss          #+#    #+#             */
/*   Updated: 2023/07/15 12:02:43 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<PhoneBook.hpp>

PhoneBook::PhoneBook(void){
    index = 0;
}

void    PhoneBook::add_contact(void){
    Contact contact;
    std::string fn , ln , nn , pn , ds;

    std::cout << "Enter first name : ";
    if (!getline(std::cin, fn))
        exit(0);
    if (fn.empty()){
        std::cout << "First name can't be empty" << std::endl;
        return ;
    }
    contact.set_f_name(fn);
    std::cout << "Enter last name : ";
    if (!getline(std::cin, ln))
        exit(0);
    if (ln.empty()){
        std::cout << "Last name can't be empty" << std::endl;
        return ;
    }
    contact.set_l_name(ln);
    std::cout << "Enter nickname : ";
    if (!getline(std::cin, nn))
        exit(0);
    if (nn.empty()){
        std::cout << "Nickname can't be empty" << std::endl;
        return ;
    }
    contact.set_n_name(nn);
    std::cout << "Enter phone number : ";
    if (!getline(std::cin, pn))
        exit(0);
    if (pn.empty()){
        std::cout << "Phone number can't be empty" << std::endl;
        return ;
    }
    contact.set_ph_n(pn);
    std::cout << "Enter darkest secret : ";
    if (!getline(std::cin, ds))
        exit(0);
    if (ds.empty()){
        std::cout << "Darkest secret can't be empty" << std::endl;
        return ;
    }
    contact.set_drk_scrt(ds);
    if (index == 8)
        index = 0;
    contacts[index] = contact;
    index++;
    std::cout << "Contact added successfully" << std::endl;
}

std::string print_case(std::string str) {
    if (str.length() > 10) {
        str.resize(9);
        str.append(".");
    }
    else if (str.length() < 10) {
        while (str.length() < 10)
            str.insert(0, " ");
    }

    return (str + "|");
}

void    PhoneBook::search_contact(void) {
    unsigned i = -1;
    std::string index;
    std::cout << " -------------------------------------------" << std::endl;
    std::cout << "|     index|first name| last name|  nickname|" << std::endl;
    std::cout << " -------------------------------------------" << std::endl;
    while (!contacts[++i].get_f_name().empty()) {
        std::cout << "|         " << i << "|" << print_case(contacts[i].get_f_name()) << print_case(contacts[i].get_l_name()) << print_case(contacts[i].get_n_name()) << std::endl;
        std::cout << " -------------------------------------------" << std::endl;
    }
    std::cout << "Enter index : ";
    if (getline(std::cin, index).eof())
        exit(0);
    if (index.empty())
        return ;
    (index.length() == 1) ? i = index[0] - '0' : i = -1;
    if (i < 0 || i > 7) {
        std::cout << "Invalid index" << std::endl;
        return ;
    }
    if (contacts[i].get_f_name().empty()) {
        std::cout << "No contact found" << std::endl;
        return ;
    }
    std::cout << "First name : " << contacts[i].get_f_name() << std::endl;
    std::cout << "Last name : " << contacts[i].get_l_name() << std::endl;
    std::cout << "Nickname : " << contacts[i].get_n_name() << std::endl;
    std::cout << "Phone number : " << contacts[i].get_ph_n() << std::endl;
}
