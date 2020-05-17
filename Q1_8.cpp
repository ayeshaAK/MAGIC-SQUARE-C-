char **StrTok ( char *s1 , const char s2 )
{
    int size = 1 ;
    for (int i = 0 ; s1 [i] != '\0'  ; i++ )
    {
        if ( s1 [i] == s2 )
        {
            size ++ ;
        }
    }
    char **s3 = new char* [size] ;
    for ( int i = 0 ; i < size ; i++ )
    {
    	s3[i] = new char [20] ;
    }
    int j = 0 , k = 0 ;
    for ( int i = 0 ; s1 [i] != '\0' ; i++ )
    {
        if ( s1 [i] == s2 )
        {
            j ++ ;
            k = 0 ;
        }
        else
        {s3 [j] [k] = s1 [i] ;
        k ++ ;}
    }
    return s3 ;
}