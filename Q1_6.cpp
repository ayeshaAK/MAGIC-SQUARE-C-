int StrCmp ( const char *s1 , const char *s2 )
{
	int i = 0 ;
	int size_s1 = 0 ;
		while ( s1 [size_s1] != '\0' )
		{
			size_s1 ++ ;
		}
	int size_s2 = 0 ;
	while ( s2 [size_s2] != '\0' )
	{
			size_s2 ++ ;
	}
	if ( size_s1 == size_s2 )
	{
		for ( int j = 0 ; s1 [j] != '\0' ; j++ )
		{
			if ( s1 [j] > s2 [j] )
			{
				i++ ;
			}
		}
		return i ;
	}
	i = size_s1 - size_s2 ;
	return i ;
}