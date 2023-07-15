/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 15:24:08 by faksouss          #+#    #+#             */
/*   Updated: 2023/07/15 12:40:12 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
#include<Contact.hpp>
#include<PhoneBook.hpp>

void    add_to_phonebook(PhoneBook *pb){
    pb->add_contact();
}

void    search_contact(PhoneBook *pb){
    pb->search_contact();
}

int main(){
    std::string cmd;
    PhoneBook phonebook;

    std::cout << "Welcome to My Awesome PhoneBook" << std::endl << "Please entre one of the following commands:" << std::endl << "ADD | SEARCH | EXIT" << std::endl;
    while (1){
        std::cout << "entre the command> ";
        if (getline(std::cin, cmd).eof())
            return (0);
        if (cmd == "ADD")
            add_to_phonebook(&phonebook);
        else if (cmd == "SEARCH")
            search_contact(&phonebook);
        else if (cmd == "EXIT")
            exit (0);
        std::cout << std::endl;
    }
}
