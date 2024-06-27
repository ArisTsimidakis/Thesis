class VAR1{
    private void FUN1() throws Throwable
        {
            long VAR2;
            {
                long VAR3;
    
                
                VAR3 = 2;
    
                VAR2 = VAR3;
            }
            {
                long VAR3 = VAR2;
    
                
                VAR3++;
                long VAR4 = (long)(VAR3);
    
                VAR5.writeLine("" + VAR4);
    
            }
        }
};