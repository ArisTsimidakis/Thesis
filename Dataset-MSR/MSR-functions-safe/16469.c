FUN1( const char *VAR1, const char *VAR2 )
{
	char const *VAR3;

	if( (VAR3 = strstr(VAR1,VAR2)) ) {
		return FUN2(VAR3 + strlen(VAR2) );
	}
	return -1;
}