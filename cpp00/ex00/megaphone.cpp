#include <iostream>

int		ft_strlen(char* s)
{
    if (!s) return 0;

	int i = 0;
    while (s[i]) i++;
	return (i);
}

char	ft_toupper(char c)
{
	return (c >= 97 && c <= 122) ? c - 32 : c;
}

int		main(int argc, char** argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; j < ft_strlen(argv[i]); j++)
        {
            std::cout << ft_toupper(argv[i][j]);
        }
    }
    std::cout << std::endl;

	return 0;
}