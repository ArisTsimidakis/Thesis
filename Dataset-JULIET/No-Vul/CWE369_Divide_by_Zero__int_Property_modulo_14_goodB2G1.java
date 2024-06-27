class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3.VAR4==5)
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
    
            if (VAR3.VAR4!=5)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                
                if (VAR2 != 0)
                {
                    VAR3.writeLine("" + VAR2 + "" + (100 % VAR2) + "");
                }
                else
                {
                    VAR3.writeLine("");
                }
    
            }
        }
};