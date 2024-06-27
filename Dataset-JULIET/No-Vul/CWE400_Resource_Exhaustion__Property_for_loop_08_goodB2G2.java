class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (FUN2())
            {
                VAR2 = VAR3.VAR4; 
                
                
                {
                    String VAR5 = System.FUN3("");
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
            else
            {
                
                VAR2 = 0;
            }
    
            if (FUN2())
            {
                int VAR11 = 0;
                
                if (VAR2 > 0 && VAR2 <= 20)
                {
                    for (VAR11 = 0; VAR11 < VAR2; VAR11++)
                    {
                        VAR7.writeLine("");
                    }
                }
            }
        }
};