class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (true)
            {
                VAR2 = VAR3.VAR4; 
                
                
                {
                    String VAR5 = System.FUN2("");
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
    
            if (false)
            {
                
                VAR7.writeLine("");
            }
            else
            {
    
                
                if (VAR2 != 0)
                {
                    VAR7.writeLine("" + VAR2 + "" + (100 % VAR2) + "");
                }
                else
                {
                    VAR7.writeLine("");
                }
    
            }
        }
};