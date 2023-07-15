/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 10:29:26 by faksouss          #+#    #+#             */
/*   Updated: 2023/07/14 15:20:01 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

int main(int ac, char **av){
    std::string str;
    
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else {
        for (unsigned i = 1; av[i]; i++){
            str = av[i];
            for (unsigned j = 0; j < str.length(); j++)
                str.at(j) = std::toupper(str.at(j));
            std::cout << str;
        }
    }
}
