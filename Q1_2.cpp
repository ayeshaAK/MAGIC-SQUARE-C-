char *Strcpy ( char *s1 , const char *s2 )
{
    int size = 0 ;
    while ( s2 [size] != '\0' )
    {
        size ++ ;
    }
	s1 = new char [size] ;
	int i = 0 ;
	    while ( s2 [i] != '\0')
	    {
	        * (s1 + i) = * ( s2 + i ) ;
	        i++ ;
	    }
	    return s1 ;
}