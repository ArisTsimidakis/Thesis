class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = VAR5.VAR6; 
                
                
                {
                    String VAR7 = System.FUN2("");
                    try
                    {
                        VAR2 = VAR5.parseInt(VAR7.trim());
                    }
                    catch(NumberFormatException VAR8)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                }
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (VAR3.VAR4)
            {
                
                int VAR12[] = { 0, 1, 2, 3, 4 };
                
                if (VAR2 >= 0 && VAR2 < VAR12.length)
                {
                    VAR3.writeLine(VAR12[VAR2]);
                }
                else
                {
                    VAR3.writeLine("");
                }
            }
        }
};