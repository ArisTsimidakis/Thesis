class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2 == 5)
            {
                try
                {
                    VAR3.parseInt(""); 
                }
                catch (NumberFormatException VAR4) 
                {
                    VAR5.writeLine("");
                    throw VAR4; 
                }
            }
        }
};