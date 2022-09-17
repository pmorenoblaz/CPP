/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:00:12 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/16 12:11:47 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

#include <iostream>
#include <fstream>
#include <cstdio>

class Karen {
    typedef void (Karen:: *complFunction)(void);
private:
    std::string levels[4];
    
    void initLevels(void);
    int  getLevel(std::string level);
   	void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
	Karen();
	~Karen();

	void complain( std::string level );	
};

# endif