class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3)
            {
                FileInputStream VAR4 = null;
                String VAR5 = "";
                try
                {
                    VAR4 = new FileInputStream(VAR5);
                    Properties VAR6 = new Properties();
                    VAR6.FUN2(VAR4);
                    
                    VAR2 = VAR6.FUN3("");
                }
                catch (IOException VAR7)
                {
                    VAR8.writeLine("" + VAR5);
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
                    catch (IOException VAR9)
                    {
                        VAR8.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3)
            {
                
                if (VAR2 != null)
                {
                    String VAR13 = VAR2.trim();
                    VAR8.writeLine(VAR13);
                }
            }
        }
};