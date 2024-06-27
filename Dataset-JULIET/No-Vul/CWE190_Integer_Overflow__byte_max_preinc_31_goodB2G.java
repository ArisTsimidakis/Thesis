class VAR1{
    private void FUN1() throws Throwable
        {
            byte VAR2;
            {
                byte VAR3;
    
                
                VAR3 = VAR4.VAR5;
    
                VAR2 = VAR3;
            }
            {
                byte VAR3 = VAR2;
    
                
                if (VAR3 < VAR4.VAR5)
                {
                    byte VAR6 = (byte)(++VAR3);
                    VAR7.writeLine("" + VAR6);
                }
                else
                {
                    VAR7.writeLine("");
                }
    
            }
        }
};