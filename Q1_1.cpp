int Strlen( char* s )
{
	int size = 0 ;
	while ( s [size] != '\0' )
	{
		size ++ ;
	}
    size ++ ; //including null character//
	return size ;
}