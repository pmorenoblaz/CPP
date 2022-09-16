/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:00:12 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/16 12:11:47 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
# define REPLACE_H

#include <iostream>
#include <fstream>
#include <cstdio>

class Replace {
private:
   	std::string fileName;
   	std::string s1;
   	std::string s2;
   	std::string outfile;
	std::fstream fin;
	std::fstream fout;
public:
	Replace(std::string fileName, std::string s1, std::string s2);
	Replace();
	~Replace();

	void		setFileName(std::string str);
	void		setStringS1(std::string str);
	void		setStringS2(std::string str);
	std::string	getFileName(void);
	std::string	getStringS1(void);
	std::string	getStringS2(void);
	std::string	getFileReplaced(void);
	void		replaceStrings(void);
	
};

# endif