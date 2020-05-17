//# include <iostream>
//using namespace std ;
int StrFind ( char *s1 , char *s2 )
{
    int index = 0 ;
    int size2 = 0 ;
	while ( s2 [size2] != '\0' )
	{
		size2 ++ ;
	}
    while ( s1 [index] != '\0' )
    {
        int i = 0 ;
        if ( s1 [index] == s2 [i] )
        {
            for ( ; s1 [i + index] == s2 [i] ; i++ )
            {
                if ( size2-1 == i )
                {
                    return index ;
                }
            }
        }
        index ++ ;
    }
	return -1 ;
}
/*int main ()
{
    char s1 [100] = "sajid shah is good boy" ;
    char *ptrs1 = s1 ;
    char s2 [10] = "ss" ;
    char *ptrs2 = s2 ;
    int index = StrFind ( s1 , s2 ) ;
    cout << index << endl ;

}*/
