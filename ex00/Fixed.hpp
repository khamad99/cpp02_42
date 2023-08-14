/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:18:58 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/14 22:20:00 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int _value;
        static const int _bits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const &src);
        Fixed &operator=(Fixed const &src);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};


#endif