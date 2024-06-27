class VAR1{
    private void FUN1() throws Throwable
        {
            byte VAR2;
            {
                byte VAR3;
    
                
                VAR3 = 2;
    
                VAR2 = VAR3;
            }
            {
                byte VAR3 = VAR2;
    
                
                VAR3--;
                byte VAR4 = (byte)(VAR3);
    
                VAR5.writeLine("" + VAR4);
    
            }
        }
};