class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
    
            if (VAR3.FUN2())
            {
                
                VAR2 = 2;
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (VAR3.FUN2())
            {
                
                int VAR4[] = { 0, 1, 2, 3, 4 };
                
                if (VAR2 < VAR4.length)
                {
                    VAR3.writeLine(VAR4[VAR2]);
                }
                else
                {
                    VAR3.writeLine("");
                }
            }
        }
};