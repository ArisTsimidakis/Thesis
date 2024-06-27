FUN1( int             VAR1,
                    int             VAR2,
                    const VAR3*  VAR4,
                    PWorker         VAR5 )
  {
    unsigned char*  VAR6;
    VAR7*      VAR8 = &VAR5->VAR9;


     
     VAR6 = (unsigned char*)VAR8->VAR10 - VAR1 * VAR8->VAR11;
     if ( VAR8->VAR11 >= 0 )

      VAR6 += ( VAR8->VAR12 - 1 ) * VAR8->VAR11;


 
     for ( ; VAR2 > 0; VAR2--, VAR4++ )
     {
      unsigned char  VAR13 = VAR4->VAR13;


      if ( VAR13 )
      {
        
        if ( VAR4->VAR14 >= 8 )
          FUN2( VAR6 + VAR4->VAR15, (unsigned char)VAR13, VAR4->VAR14 );
        else
        {
          unsigned char*  VAR16 = VAR6 + VAR4->VAR15;


          switch ( VAR4->VAR14 )
          {
          case 7: *VAR16++ = (unsigned char)VAR13;
          case 6: *VAR16++ = (unsigned char)VAR13;
          case 5: *VAR16++ = (unsigned char)VAR13;
          case 4: *VAR16++ = (unsigned char)VAR13;
          case 3: *VAR16++ = (unsigned char)VAR13;
          case 2: *VAR16++ = (unsigned char)VAR13;
          case 1: *VAR16   = (unsigned char)VAR13;
          default:
            ;
          }
        }
      }
    }
  }