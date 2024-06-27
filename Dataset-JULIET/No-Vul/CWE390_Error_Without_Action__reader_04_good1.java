class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                File VAR4 = null;
                FileInputStream VAR5 = null;
                InputStreamReader VAR6 = null;
                BufferedReader VAR7 = null;
    
                if(System.FUN2("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR4 = new File("");
                }
                else
                {
                    
                    VAR4 = new File("");
                }
    
                try
                {
                    VAR5 = new FileInputStream(VAR4);
                    VAR6 = new InputStreamReader(VAR5, "");
                    VAR7 = new BufferedReader(VAR6);
                }
                catch (FileNotFoundException VAR8)
                {
                    
                    VAR3.writeLine("" + VAR8.FUN3());
                    throw VAR8;
                }
                finally
                {
                    
                    try
                    {
                        if (VAR7 != null)
                        {
                            VAR7.close();
                        }
                    }
                    catch (IOException VAR9)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (IOException VAR9)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
    
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
        }
};