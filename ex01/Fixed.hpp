/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:18:58 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/14 22:45:51 by kalshaer         ###   ########.fr       */
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
        Fixed(const int n);
        Fixed(const float n);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &src);


#endif