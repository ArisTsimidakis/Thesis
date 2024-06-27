class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                FileInputStream VAR5 = null;
                String VAR6 = "";
                try
                {
                    VAR5 = new FileInputStream(VAR6);
                    Properties VAR7 = new Properties();
                    VAR7.FUN2(VAR5);
                    
                    VAR2 = VAR7.FUN3("");
                }
                catch (IOException VAR8)
                {
                    VAR3.writeLine("" + VAR6);
                    VAR2 = ""; 
                }
                finally
                {
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR9)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.VAR4)
            {
                
                if(VAR2.equals(""))
                {
                    VAR3.writeLine("");
                }
            }
        }
};