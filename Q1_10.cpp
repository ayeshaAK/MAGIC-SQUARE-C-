//# include <iostream>
//using namespace std ;
char* SubStr( char *s , int pos , int len )
{
	char *substring = new char [len] ;
	for ( int i = 0 ; i < len ; i++ , pos++ )
	{
		substring [i] = s [pos] ;
	}
	return substring ;
}
/*int main ()
{
	char str [100] = "Hello World" ;
	char *s = str ;
	cout << "This is String = " << s << endl ;
	int pos ; cout << "Enter Starting Position : " ; cin >> pos ;
	int len ; cout << "Enter Length : " ; cin >> len ;
	s = SubStr ( s , pos , len ) ;
	cout << s <<  endl ;
}*/