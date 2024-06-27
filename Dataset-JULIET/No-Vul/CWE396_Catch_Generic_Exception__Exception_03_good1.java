class VAR1{
    private void FUN1() throws Throwable
        {
            if (5 != 5)
            {
                
                VAR2.writeLine("");
            }
            else
            {
    
                try
                {
                    VAR3.parseInt(""); 
                }
                catch (NumberFormatException VAR4) 
                {
                    VAR2.writeLine("");
                    throw VAR4; 
                }
    
            }
        }
};