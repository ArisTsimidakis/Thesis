class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2.VAR3)
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