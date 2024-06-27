static inline int FUN1(VAR1 *VAR2, const char *VAR3, size_t VAR4, int VAR5,
		struct VAR6 *VAR7, socklen_t VAR8
		)
{
	int VAR9;
	if (VAR7) {
		VAR9 = sendto(VAR2->socket, VAR3, FUN2(VAR4), VAR5, VAR7, FUN2(VAR8));

		return (VAR9 == VAR10) ? -1 : VAR9;
	}
#ifdef VAR11
	return ((VAR9 = send(VAR2->socket, VAR3, VAR4 > VAR12 ? VAR12 : (int)VAR4, VAR5)) == VAR10) ? -1 : VAR9;
#else
	return ((VAR9 = send(VAR2->socket, VAR3, VAR4, VAR5)) == VAR10) ? -1 : VAR9;
#endif
}