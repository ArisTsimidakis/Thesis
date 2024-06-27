xcalloc (size_t VAR1, size_t VAR2)
 {

    void *VAR3 = malloc(VAR1 * VAR2);












     if (VAR3)
     {

        memset (VAR3, '', (VAR1 * VAR2));


     }
     return VAR3;
 }