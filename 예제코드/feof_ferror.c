#include <stdio.h>

#define print(ch) printf( "%x %c\n", ch, ch )

int main( )
{	
	FILE *pFile = NULL;

	pFile = fopen( "test", "r" );
	if( pFile == NULL )
	{
		//에러 처리
	}
	else
	{
		char chTemp;

		while( !feof( pFile ) )
		{
			chTemp = fgetc( pFile );

			if( ferror(pFile) )
			{
				printf("읽기 에러");
				break;
			}

			print( chTemp );
		}

		fclose( pFile );
	}

	return 0;
}
