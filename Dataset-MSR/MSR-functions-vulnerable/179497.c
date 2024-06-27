FUN1 (VAR1 *VAR2)
{
  struct sockaddr_un VAR3;
  char *VAR4;
  int VAR5;
  ssize_t VAR6;

  VAR5 = socket (VAR7, VAR8, 0);
  if (VAR5 < 0)
    {
      FUN2 ("");
      return -1;
    }

  VAR4 = FUN3 ("");
  if (strlen (VAR4) + 1 >= sizeof(VAR3.VAR9))
    {
      FUN4 (VAR10,
	       "",
	       strlen (VAR4),
	       sizeof (VAR3.VAR9));
      free (VAR4);
      return -1;
    }

   memset (&VAR3, 0, sizeof(VAR3));
   VAR3.VAR11 = VAR7;
 

#ifdef VAR12

  VAR3.VAR9[0] = '';

  memcpy (VAR3.VAR9 + 1, VAR4, strlen (VAR4));

  VAR6 = FUN5 (struct VAR13, VAR9) + strlen (VAR4) + 1;

  FUN6 (VAR4);

#else
   memcpy (VAR3.VAR9, VAR4, strlen (VAR4));
   VAR6 = sizeof (struct VAR13);

#endif
 
   if (FUN7 (VAR5, (const struct VAR14 *) &VAR3, VAR6) < 0)
     {
      FUN2 ("");
      free (VAR4);
      close (VAR5);
      return -1;
    }

  if (FUN8 (VAR5, 5) < 0)
    {
      FUN2 ("");
      free (VAR4);
      close (VAR5);
      return -1;
    }

  VAR2->VAR15 = VAR5;
  VAR2->VAR16 = VAR4;
  return 0;
}