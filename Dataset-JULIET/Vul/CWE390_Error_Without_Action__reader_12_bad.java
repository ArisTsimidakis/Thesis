class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                File VAR3 = null;
                FileInputStream VAR4 = null;
                InputStreamReader VAR5 = null;
                BufferedReader VAR6 = null;
                if(System.FUN3("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR3 = new File("");
                }
                else
                {
                    
                    VAR3 = new File("");
                }
                try
                {
                    VAR4 = new FileInputStream(VAR3);
                    VAR5 = new InputStreamReader(VAR4, "");
                    VAR6 = new BufferedReader(VAR5);
                }
                catch (FileNotFoundException VAR7)
                {
                    
                }
                finally
                {
                    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                }
            }
            else
            {
    
                File VAR3 = null;
                FileInputStream VAR4 = null;
                InputStreamReader VAR5 = null;
                BufferedReader VAR6 = null;
    
                if(System.FUN3("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR3 = new File("");
                }
                else
                {
                    
                    VAR3 = new File("");
                }
    
                try
                {
                    VAR4 = new FileInputStream(VAR3);
                    VAR5 = new InputStreamReader(VAR4, "");
                    VAR6 = new BufferedReader(VAR5);
                }
                catch (FileNotFoundException VAR7)
                {
                    
                    VAR2.writeLine("" + VAR7.FUN4());
                    throw VAR7;
                }
                finally
                {
                    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                }
    
            }
        }
};