/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:00:01 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/09/18 19:11:55 by pmoreno-         ###   ########.fr       */
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
	else
		this->replaceStrings();
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
	std::string 		aux;
	std::string 		line;
	std::string 		str;
	std::stringstream	buffer;
	int					f;
	
	this->fin.open(this->getFileName(), std::fstream::in);
	if (this->fin.fail()){
		std::cout << "--> Error: The file does not exist or have permissions to be opened." << std::endl;
		return ;
	}
	this->fout.open(outfile, std::fstream::out);
	if (this->fout.fail()){
		std::cout << "--> Error: Problems creating the new file." << std::endl;
		return ;
	}
	buffer << this->fin.rdbuf();
	line = buffer.str();
	f = line.find(this->getStringS1());
	while (!line.empty() && f != std::string::npos){
		str = line.substr(0, f) + s2;
		aux += str;
		line = line.substr(f + s1.length(), line.length() - s1.length());
		f = line.find(this->getStringS1());
	}
	aux += line;
	this->fout << aux;
	this->fout.close();
	this->fin.close();
	std::cout << "The strings have been replaced. Check the new file: " << outfile << std::endl << std::endl;
}
