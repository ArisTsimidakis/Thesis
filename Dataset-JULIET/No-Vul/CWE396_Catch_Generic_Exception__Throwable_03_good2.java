class VAR1{
    private void FUN1() throws Throwable
        {
            if (5 == 5)
            {
                try
                {
                    VAR2.parseInt(""); 
                }
                catch (NumberFormatException VAR3) 
                {
                    VAR4.writeLine("");
                    throw VAR3; 
                }
            }
        }
};