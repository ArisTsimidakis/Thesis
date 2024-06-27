class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2 != 5)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                try
                {
                    VAR4.parseInt(""); 
                }
                catch (NumberFormatException VAR5) 
                {
                    VAR3.writeLine("");
                    throw VAR5; 
                }
    
            }
        }
};