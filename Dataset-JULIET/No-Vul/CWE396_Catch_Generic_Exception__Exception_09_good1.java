class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2.VAR3)
            {
                
                VAR2.writeLine("");
            }
            else
            {
    
                try
                {
                    VAR4.parseInt(""); 
                }
                catch (NumberFormatException VAR5) 
                {
                    VAR2.writeLine("");
                    throw VAR5; 
                }
    
            }
        }
};