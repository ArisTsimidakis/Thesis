class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = VAR5.VAR6; 
                
                
                {
                    String VAR7 = System.FUN2("");
                    if (VAR7 != null) 
                    {
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
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (VAR3.VAR4)
            {
                
                VAR2++;
                int VAR12 = (int)(VAR2);
                VAR3.writeLine("" + VAR12);
            }
        }
};