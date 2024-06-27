class VAR1{
    private void FUN1() throws Throwable
        {
            for(int VAR2 = 0; VAR2 < 1; VAR2++)
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