class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
    
            VAR2 = VAR3.VAR4; 
    
            
            
            {
                String VAR5 = System.FUN2("");
                if (VAR5 != null) 
                {
                    try
                    {
                        VAR2 = VAR3.parseInt(VAR5.trim());
                    }
                    catch(NumberFormatException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
                }
            }
    
            
            int VAR11[] = { 0, 1, 2, 3, 4 };
    
            
            if (VAR2 >= 0 && VAR2 < VAR11.length)
            {
                VAR11[VAR2] = 42;
            }
            else
            {
                VAR7.writeLine("");
            }
    
        }
};