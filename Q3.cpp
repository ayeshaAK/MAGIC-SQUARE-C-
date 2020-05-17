# include <iostream>
using namespace std ;
int **magicSquare ( int size )
{
    int **magic_square = new int* [size] ;
    for ( int i = 0 ; i < size ; i++ )
    {
        magic_square [i] = new int [size] ; 
    }
    if ( size % 2 == 0 )
    {
        cout << "Enter Valid Size.\nEnter Odd Number.\n" ;
        return magic_square ; // return empty 2d array with 0 at each index //
    }
    int number = 1 , i = 0 , j = size/2 ;
    while ( number <= size*size )
    {
        magic_square [i][j] = number ;
        number ++ ;
        if ( number % size != 1 )
        {
            if ( i == 0 )
            {
                i = size-1 ;
            }
            else
            {
                -- i ;
            }
            if ( j == size-1 )
            {
                j = 0 ;
            }
            else
            {
                j ++ ;
            }
        }
        else
        {
            i ++ ;
        }
    }
    return magic_square ;
}
/*int main ()
{
    int size ; cin >> size ;
    int **p = magicSquare ( size ) ;
    cout << "Enter i : "; int i ; cin >> i ;
    cout << "Enter j : "; int j ; cin >> j ;
    cout << p [i][j] << endl ;
 }*/