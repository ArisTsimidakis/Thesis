bool VAR1::FUN1(wchar_t* VAR2, const char* VAR3) {

  wchar_t VAR4[50];


   for (int VAR5 = 0; VAR3[VAR5]; ++VAR5)
     VAR4[VAR5] = VAR3[VAR5];
 
  int VAR6 = lstrlen(VAR4);
  int VAR7 = lstrlen(VAR2);
  while (VAR7 > VAR6) {
    wchar_t VAR8 = VAR2[0];
    wchar_t VAR9 = VAR2[VAR6+1];
    
    if ((VAR8 == VAR10'' || VAR8 == VAR10'') &&
        (VAR9 == VAR10'' || VAR9 == 0 || VAR9 == VAR10'')) {
      VAR2[VAR6+1] = 0;
      
      if (FUN2(VAR2+1, VAR4) == 0) {
        
        VAR2[VAR6+1] = VAR9;
        return true;
      }
      
      VAR2[VAR6+1] = VAR9;
    }
    
    ++VAR2;
    --VAR7;
  }
  return false;
}