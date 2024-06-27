class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
            {
                FileInputStream VAR4 = null;
                String VAR5 = "";
                try
                {
                    VAR4 = new FileInputStream(VAR5);
                    Properties VAR6 = new Properties();
                    VAR6.FUN3(VAR4);
                    
                    VAR2 = VAR6.FUN4("");
                }
                catch (IOException VAR7)
                {
                    VAR3.writeLine("" + VAR5);
                    VAR2 = ""; 
                }
                finally
                {
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.FUN2())
            {
                
                if("".equals(VAR2))
                {
                    VAR3.writeLine("");
                }
            }
        }
};