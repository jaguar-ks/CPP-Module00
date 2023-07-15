/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 15:24:08 by faksouss          #+#    #+#             */
/*   Updated: 2023/07/14 15:49:02 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

int    wich_case(std::string cmd){
    if (!cmd.compare("ADD"))
        return 0;
    else if (!cmd.compare("SEARCH"))
        return 1;
    else if (!cmd.compare("EXIT"))
        exit (0);
    else
        return -1;
}

int main(){
    std::string cmd;

    std::cout << "Welcome to My Awesome PhoneBook" << std::endl << "Please entre one of the following commands:" << std::endl << "ADD | SEARCH | EXIT" << std::endl;
    while (1){
        std::cout << "entre the command> ";
        std::getline(std::cin, cmd);
        switch (wich_case(cmd)){
            case 0:
                //add to phone book
                break ;
            case 1:
                //search the phone book
                break ;
            default:
                std::cout << "Invalide command try [ADD | SEARCH | EXIT]" << std::endl;
        }
    }
}
