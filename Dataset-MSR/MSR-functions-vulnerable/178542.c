FUN1 (void *VAR1)
{
  VAR2 *VAR3 = VAR1;
  VAR4 *VAR5 = NULL;
  size_t  VAR6;

  if (!VAR3) return NULL;

  if (VAR3->VAR7) return NULL;

  if (NULL == VAR3->VAR8) {
    VAR5 = FUN2 (VAR3);

    if (NULL != VAR5) {
      VAR6 = FUN3(VAR5)-2;
      VAR3->VAR8 = FUN4();
 
       if(VAR6 <= 0 || 0 != FUN5 (VAR3->VAR8, &VAR5[4], VAR6)) {
         VAR3->VAR7 = true;

        FUN6 (VAR3->VAR8);
         free(VAR3->VAR8);
         VAR3->VAR8 = NULL;
       }
      }

      free(VAR5);
    }
  }