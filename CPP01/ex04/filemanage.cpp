/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochitteiunon? <sakata19991214@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 00:30:06 by mochitteiun       #+#    #+#             */
/*   Updated: 2023/03/04 00:30:06 by mochitteiun      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filemanage.hpp"

Fileinfo::Fileinfo(std::string fn, ReplaceInfo ri):file_name(fn), \
file_name_s(fn + ".replace"), replaceinfo(ri)
{
	this->replaced_fileinfo = this->obtain_filecontent();
}

Fileinfo::~Fileinfo()
{

}

std::string	Fileinfo::obtain_filecontent(void)
{
	std::ifstream	ifs(this->file_name);
	std::string		oneline;
	std::string		allline;

	if (ifs.fail())
	{
		std::cerr << "Fail to open" << std::endl;
		exit(EXIT_FAILURE);
	}
	allline = "";
	while (getline(ifs, oneline))
	{
		allline = allline + oneline;
		allline = allline + "\n";
	}
	return (allline);
}

void	Fileinfo::replace_wd(void)
{
	std::string	replaced_wd = this->replaceinfo.obtain_redwd();
	std::string	replace_wd = this->replaceinfo.obtain_rwd();
	std::string	text = this->replaced_fileinfo;

	if (text == "\0")
	{
		std::cout << "empty file" << std::endl;
		return ;
	}
	size_t		pos = text.find("bbb");
	std::cout << pos << std::endl;
	text.erase(pos, 3);
	std::cout << text << std::endl;
}