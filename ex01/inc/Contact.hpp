/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 07:17:10 by faksouss          #+#    #+#             */
/*   Updated: 2023/07/15 08:36:46 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include<string>

class Contact {
    private :
        std::string f_name;
        std::string l_name;
        std::string n_name;
        std::string ph_n;
        std::string drk_scrt;
    
    public :
        void    set_f_name(std::string f_name);
        void    set_l_name(std::string l_name);
        void    set_n_name(std::string n_name);
        void    set_ph_n(std::string ph_n);
        void    set_drk_scrt(std::string drk_scrt);
        std::string    get_f_name(void);
        std::string    get_l_name(void);
        std::string    get_n_name(void);
        std::string    get_ph_n(void);
        std::string    get_drk_scrt(void);
};
