FUN1 (gnutls_session_t VAR1,
                         void *VAR2, VAR3 * VAR4)
{

  gnutls_datum_t VAR5;
  int VAR6;

  if (VAR1->VAR7.VAR8 == VAR9)
    return VAR10;

  VAR5.VAR11 = VAR2;

  VAR6 = FUN2 (VAR1, &VAR5);
  if (VAR6 < 0)
    {
       FUN3 ();
       return VAR6;
     }

  *VAR4 = VAR5.VAR12;
 
   if (VAR5.VAR12 > *VAR4)
     {
       VAR6 = VAR13;
       goto VAR14;
     }


 
   if (VAR2 != NULL)
     memcpy (VAR2, VAR5.VAR11, VAR5.VAR12);

  VAR6 = 0;

VAR14:
  FUN4 (&VAR5);
  return VAR6;
}