/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 07:33:43 by faksouss          #+#    #+#             */
/*   Updated: 2023/07/15 11:01:54 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<Contact.hpp>

void    Contact::set_f_name(std::string fname){
    f_name = fname;
}

void    Contact::set_l_name(std::string lname){
    l_name = lname;
}

void    Contact::set_n_name(std::string nname){
    n_name = nname;
}

void    Contact::set_ph_n(std::string phn){
    ph_n = phn;
}

void    Contact::set_drk_scrt(std::string drkscrt){
    drk_scrt = drkscrt;
}

std::string    Contact::get_f_name(void){
    return (f_name);
}

std::string    Contact::get_l_name(void){
    return (l_name);
}

std::string    Contact::get_n_name(void){
    return (n_name);
}

std::string    Contact::get_ph_n(void){
    return (ph_n);
}

std::string    Contact::get_drk_scrt(void){
    return (drk_scrt);
}
