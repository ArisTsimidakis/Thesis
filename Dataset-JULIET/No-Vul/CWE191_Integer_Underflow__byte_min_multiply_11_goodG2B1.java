class VAR1{
    private void FUN1() throws Throwable
        {
            byte VAR2;
            if (VAR3.FUN2())
            {
                
                VAR2 = 0;
            }
            else
            {
    
                
                VAR2 = 2;
    
            }
    
            if (VAR3.FUN3())
            {
                if(VAR2 < 0) 
                {
                    
                    byte VAR4 = (byte)(VAR2 * 2);
                    VAR3.writeLine("" + VAR4);
                }
            }
        }
};