/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:16:52 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/18 19:18:35 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

#include <iostream>
#include <fstream>
#include <cstdio>

class Karen {
private:
    std::string levels[4];
    
    void initLevels(void);
    int  getLevel(std::string level);
   	void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:

    typedef void (Karen:: *complFunction)(void);

	Karen();
	~Karen();

	void complain( std::string level );	
};

# endif