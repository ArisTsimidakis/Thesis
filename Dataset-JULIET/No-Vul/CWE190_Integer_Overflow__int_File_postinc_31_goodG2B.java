class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            {
                int VAR3;
    
                
                VAR3 = 2;
    
                VAR2 = VAR3;
            }
            {
                int VAR3 = VAR2;
    
                
                VAR3++;
                int VAR4 = (int)(VAR3);
    
                VAR5.writeLine("" + VAR4);
    
            }
        }
};