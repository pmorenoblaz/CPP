/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:00:01 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/16 12:11:24 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string fileName, std::string s1, std::string s2){
	this->setFileName(fileName);
	this->setStringS1(s1);
	this->setStringS2(s2);

	if(this->getFileName().empty() || this->getStringS1().empty() || this->getStringS2().empty())
		std::cout << "The strings cannot be empty." << std::endl;
	else {
		this->outfile = this->getFileReplaced();
		std::cout << "The strings have been setted." << std::endl;
	}
}

Replace::Replace(void){
	std::cout << "You have to write the name of the file and the strings. " << std::endl;
}

Replace::~Replace(){
	if(this->getFileName().empty() || this->getStringS1().empty() || this->getStringS2().empty())
		std::cout << "It didn't worked out. Try again." << std::endl << std::endl;
	else {
		std::cout << "The strings have been replaced. Check the new file: " << this->getFileReplaced() << std::endl << std::endl;
		this->replaceStrings();
	}
	return ;
}

void	Replace::setFileName(std::string str){
	this->fileName = str;
}

void	Replace::setStringS1(std::string str){
	this->s1 = str;
}

void	Replace::setStringS2(std::string str){
	this->s2 = str;
}

std::string	Replace::getFileName(void){
	return (this->fileName);
}

std::string	Replace::getStringS1(void){
	return (this->s1);
}

std::string	Replace::getStringS2(void){
	return (this->s2);
}

std::string	Replace::getFileReplaced(void){
	std::string name;
	name = this->getFileName() + ".replaced";
	return (name);
}

void	Replace::replaceStrings(void){
	std::string aux;
	std::filebuf* inbuf;
	int i = 0;
	
	fin.open (this->getFileName(), std::fstream::in);
	fout.open (outfile, std::fstream::out);
	inbuf  = fin.rdbuf();
	char c = inbuf->sbumpc();
	while (c != EOF)
	{
		if (i == (s1.length())){
			fout << s2;
			aux = "";
			i = 0;
		}
		if (c == s1[i]){
			aux = aux + c;
			i++;
		}
		else {
			if (!aux.empty())
				fout << aux;
			else
				fout << c;
			i = 0;
			aux = "";
		}
		c = inbuf->sbumpc();
	}
	fout.close();
	fin.close();
}

