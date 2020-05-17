//# include <iostream>
//using namespace std ;

char *Strncpy ( char *s1 , const char *s2 , int size )
{
	s1 = new char [size] ;

	int i = 0 ;
	    while ( i < size  && s2 [i] != '\0')
	    {
	        * (s1 + i) = * ( s2 + i ) ;
	        i++ ;
	    }
	    return s1 ;
}
/*int main()
{
	int size ; cout << " Enter Size: " ; cin >> size ;
	char s [100] = "" ;
	char *s1 = s ;
	const char *p2 ;
	const char p [100] = "sajid good" ;
	p2 = p ;
	cout << Strncpy ( s1 , p2 , size ) ;
}*/