/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:47:08 by jlima-so          #+#    #+#             */
/*   Updated: 2025/11/26 23:54:17 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <A.hpp>
#include <B.hpp>
#include <C.hpp>

int main()
{
	A a_guy;
	B b_guy;
	C c_guy;

	Base *a_ptr = Base::generate();
	Base *b_ptr = Base::generate();
	Base *c_ptr = Base::generate();

	identify(a_guy);
	identify(b_guy);
	identify(c_guy);

	identify(a_ptr);
	identify(b_ptr);
	identify(c_ptr);

	delete (a_ptr);
	delete (b_ptr);
	delete (c_ptr);
}
