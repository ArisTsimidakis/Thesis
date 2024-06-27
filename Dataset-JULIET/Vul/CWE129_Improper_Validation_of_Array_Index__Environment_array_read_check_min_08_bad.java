class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
            if (FUN2())
            {
                VAR2 = VAR3.VAR4; 
                
                
                {
                    String VAR5 = System.FUN3("");
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
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (FUN2())
            {
                
                int VAR11[] = { 0, 1, 2, 3, 4 };
                
                if (VAR2 >= 0)
                {
                    VAR7.writeLine(VAR11[VAR2]);
                }
                else
                {
                    VAR7.writeLine("");
                }
            }
        }
};