class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3.FUN2())
            {
                VAR2 = VAR4.VAR5; 
                
                
                {
                    String VAR6 = System.FUN3("");
                    try
                    {
                        VAR2 = VAR4.parseInt(VAR6.trim());
                    }
                    catch(NumberFormatException VAR7)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
                }
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if(VAR3.FUN2())
            {
                
                int VAR11 = (int)(VAR2 * VAR2);
                VAR3.writeLine("" + VAR11);
            }
        }
};