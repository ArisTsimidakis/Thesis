class VAR1{
    private void FUN1(String VAR2 ) throws Throwable
        {
            if (VAR3)
            {
                
                VAR4.writeLine("");
            }
            else
            {
    
                int VAR5;
                try
                {
                    VAR5 = VAR6.parseInt(VAR2);
                }
                catch (NumberFormatException VAR7)
                {
                    VAR4.writeLine("");
                    VAR5 = 1;
                }
    
                
                if (VAR5 >= 0 && VAR5 <= 5)
                {
                    for (int VAR8=0; VAR8 < VAR5; VAR8++)
                    {
                        VAR4.writeLine("");
                    }
                }
    
            }
        }
};