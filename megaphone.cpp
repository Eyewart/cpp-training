#include <iostream>
#include <string>

using namespace std;

void display_upper(char *sentence){
	char c;
	while (*sentence)
	{
		c = *sentence - 32;
		cout << c;
		sentence++;
	}
	cout << endl;
}

int main(int argc, char **argv)
{
	int i = 1;

	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	else
	{
		while (argv[i] != NULL)
		{
			display_upper(argv[i]);
			i++;
		}
	}
	return (0);
}