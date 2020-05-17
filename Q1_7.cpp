int StrnCmp ( const char *s1 , const char *s2 , int n )
{
	int i ;
	for ( int j = 0 ; j < n ; j++ )
	{
		if ( s1 [j] == s1 [j] )
		{
			i = 0 ;
		}
		if ( s1 [j] < s2 [j] )
		{
			i -- ;
		}
		if ( s1 [j] > s2 [j])
		{
			i ++ ;
		}
	}
	return i ;
}