/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:40:19 by yohanafi          #+#    #+#             */
/*   Updated: 2025/07/11 12:00:47 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T, typename Func>

void    iter(T *array, size_t len, Func func)
{
    for (size_t i = 0; i < len; i++)
        func(array[i]);
}

template<typename T, typename Func>
void    iter(const T *array, size_t len, Func func)
{
    for (size_t i = 0; i < len; i++)
        func(array[i]);
}


#endif 
