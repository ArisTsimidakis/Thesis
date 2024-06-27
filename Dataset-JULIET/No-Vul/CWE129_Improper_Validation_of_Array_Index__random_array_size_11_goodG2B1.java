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
                int VAR4[] = null;
                
                if (VAR2 >= 0)
                {
                    VAR4 = new int[VAR2];
                }
                else
                {
                    VAR3.writeLine("");
                }
                
                VAR4[0] = 5;
                VAR3.writeLine(VAR4[0]);
            }
        }
};