class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
            if(VAR3.FUN2())
            {
                
                VAR2 = -1;
            }
            else
            {
    
                
                VAR2 = 2;
    
            }
    
            if(VAR3.FUN2())
            {
                
                int VAR4[] = { 0, 1, 2, 3, 4 };
                
                VAR4[VAR2] = 42;
                
            }
            else
            {
    
                
                int VAR4[] = { 0, 1, 2, 3, 4 };
    
                
                if (VAR2 >= 0 && VAR2 < VAR4.length)
                {
                    VAR4[VAR2] = 42;
                }
                else
                {
                    VAR3.writeLine("");
                }
    
            }
        }
};