/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:18:58 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/20 13:59:01 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

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
        bool operator>(Fixed const &src) const;
        bool operator<(Fixed const &src) const;
        bool operator>=(Fixed const &src) const;
        bool operator<=(Fixed const &src) const;
        bool operator==(Fixed const &src) const;
        bool operator!=(Fixed const &src) const;
        Fixed operator+(Fixed const &src) const;
        Fixed operator-(Fixed const &src) const;
        Fixed operator*(Fixed const &src) const;
        Fixed operator/(Fixed const &src) const;
        Fixed &operator++(void);
        Fixed operator++(int);
        Fixed &operator--(void);
        Fixed operator--(int);
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static Fixed const &min(Fixed const &a, Fixed const &b);
        static Fixed const &max(Fixed const &a, Fixed const &b);
        
};

std::ostream &operator<<(std::ostream &o, Fixed const &src);


#endif