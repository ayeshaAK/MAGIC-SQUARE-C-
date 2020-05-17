char *StrnCat ( char *s1 , const char *s2 , int n )
{
    int size_s1 = 0 ;
    while ( s1 [size_s1] != '\0' )
    {
        size_s1 ++ ;
    }
    int new_size = size_s1 + n;
    char *s3 = new char [new_size] ;
    for ( int i = 0 ; i < size_s1 ; i++ )
    {
        s3 [i] = s1 [i] ;
    }
    for ( int i = 0 ; size_s1 < new_size ; i++ )
    {
        s3 [size_s1] = s2 [i] ;
        size_s1 ++ ;
    }
    s1 = s3 ;
    return s1 ;
}