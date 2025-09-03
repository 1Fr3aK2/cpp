/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 23:26:26 by rafael            #+#    #+#             */
/*   Updated: 2025/09/03 19:27:18 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <losers.hpp>

bool processInput(std::ifstream &infile, std::ofstream &outfile, std::string filename, std::ostringstream &out)
{
    infile.open(filename.c_str()); //abre o arquivo
    if (!infile)
    {
        std::cerr << "Error: cannot open input file '" << filename << "'" << std::endl;
        return (false);
    }
    //copia o conteudo do file para out
    out << infile.rdbuf(); //-> rdbuf devolve o buffer do arquivo, não o endereço do começo dos dados.
                            // -> ss << infile.rdbuf(); → lê todo o conteúdo restante do arquivo e copia para dentro de ss.
    outfile.open((filename + ".replace").c_str());
    if (!outfile)
    {
        std::cerr << "Error: " << filename << ".replace could not be created" << std::endl;
        return (false);
    }
    return (true);
}

void replaceAll(std::string &content, std::string s1, std::string s2)
{
	for (size_t ctd = 0; (ctd = content.find(s1, ctd)) != std::string::npos; ctd += s2.length())
		content = content.substr(0, ctd) + s2 + content.substr(ctd + s1.length());
}

void processOutput(std::ofstream &outfile, std::ostringstream &out, std::string s1, std::string s2)
{
    std::string content = out.str(); // copia td o conteudo de out para content
    replaceAll(content, s1, s2);
    outfile << content;
    outfile.close();
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Invalid number of arguments" << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    
    std::ostringstream out;
    std::ifstream infile;
    std::ofstream outfile;
    if (!processInput(infile, outfile, filename, out))
        return (1);
    processOutput(outfile, out, s1, s2);
    return (0);
}