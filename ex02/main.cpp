/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:37:12 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/20 10:22:40 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;
    std::cout << (a==b) << std::endl;
    std::cout << (a!=b) << std::endl;
    std::cout << (a>b) << std::endl;
    std::cout << (a<b) << std::endl;
    std::cout << (a>=b) << std::endl;
    std::cout << (a<=b) << std::endl;
    std::cout << a+b << std::endl;
    std::cout << a-b << std::endl;
    std::cout << a*b << std::endl;
    std::cout << a/b << std::endl;

    return 0;
}