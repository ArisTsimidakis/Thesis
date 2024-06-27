class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                FileInputStream VAR4 = null;
                String VAR5 = "";
                try
                {
                    VAR4 = new FileInputStream(VAR5);
                    Properties VAR6 = new Properties();
                    VAR6.FUN2(VAR4);
    
                    
                    VAR3 = VAR6.FUN3("");
                }
                catch (IOException VAR7)
                {
                    VAR8.writeLine("" + VAR5);
                    VAR3 = ""; 
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
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                
                if("".equals(VAR3))
                {
                    VAR8.writeLine("");
                }
    
            }
        }
};