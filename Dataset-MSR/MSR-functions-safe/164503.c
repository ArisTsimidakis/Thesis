static int FUN1(
  VAR1 *VAR2,           
  VAR3 *VAR4,                
  const VAR5 *VAR6,   
  int VAR7,              
  int VAR8                  
){
  int VAR9 = VAR6->VAR9 - VAR7;
  if( VAR9<=0 ){
    
    int VAR10;
    for(VAR10=0; VAR10<VAR8 && VAR4[VAR10]==0; VAR10++){}
    if( VAR10<VAR8 ){
      int VAR11 = FUN2(VAR2->VAR12);
      if( VAR11 ) return VAR11;
      memset(VAR4 + VAR10, 0, VAR8 - VAR10);
    }
  }else{
    if( VAR9<VAR8 ){
      
      int VAR11 = FUN1(VAR2, VAR4+VAR9, VAR6, VAR7+VAR9,
                                 VAR8-VAR9);
      if( VAR11 ) return VAR11;
      VAR8 = VAR9;
    }
    if( memcmp(VAR4, ((VAR3*)VAR6->VAR13) + VAR7, VAR8)!=0 ){
      int VAR11 = FUN2(VAR2->VAR12);
      if( VAR11 ) return VAR11;
      
      memmove(VAR4, ((VAR3*)VAR6->VAR13) + VAR7, VAR8);
    }
  }
  return VAR14;
}