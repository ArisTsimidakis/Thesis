class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
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
                    
                    int VAR4 = (int)(VAR2 * 2);
                    VAR3.writeLine("" + VAR4);
                }
            }
        }
};