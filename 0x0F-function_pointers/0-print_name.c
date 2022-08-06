/**
 * print_name -> name
 * @name: name param
 * @f: function parameter
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
