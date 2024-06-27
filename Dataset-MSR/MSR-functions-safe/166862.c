bool FUN1(void* VAR1, size_t VAR2) {
  
  VAR3* VAR4 = reinterpret_cast<VAR3*>(VAR1);
  for (size_t VAR5 = 0; VAR5 < VAR2 / sizeof(VAR3); ++VAR5) {
    if (VAR4[VAR5])
      return false;
  }
  return true;
}