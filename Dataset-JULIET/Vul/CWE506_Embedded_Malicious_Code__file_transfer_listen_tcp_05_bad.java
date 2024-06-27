class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2)
            {
                String VAR3 = "";
                File VAR4 = new File("");
                FileInputStream VAR5 = null;
                InputStreamReader VAR6 = null;
                BufferedReader VAR7 = null;
                try
                {
                    
                    VAR5 = new FileInputStream(VAR4);
                    VAR6 = new InputStreamReader(VAR5, "");
                    VAR7 = new BufferedReader(VAR6);
                    VAR3 = VAR7.readLine();
                    
                }
                catch (IOException VAR8)
                {
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
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
                    catch (IOException VAR8)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                    }
    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
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
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                    }
                }
                ServerSocket VAR13 = null;
                Socket VAR14 = null;
                OutputStreamWriter VAR15 = null;
                BufferedWriter VAR16 = null;
                try
                {
                    
                    VAR13 = new FUN2(39543);
                    VAR14 = VAR13.accept();
                    VAR15 = new FUN3(VAR14.getOutputStream(), "");
                    VAR16 = new BufferedWriter(VAR15);
                    
                    if (VAR3 != null)
                    {
                        VAR16.write(VAR3);
                    }
                }
                catch (IOException VAR8)
                {
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                }
                finally
                {
                    
                    try
                    {
                        if (VAR16 != null )
                        {
                            VAR16.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                    }
    
                    try
                    {
                        if (VAR15 != null )
                        {
                            VAR15.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                    }
    
                    
                    try
                    {
                        if (VAR14 != null)
                        {
                            VAR14.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                    }
    
                    try
                    {
                        if (VAR13 != null)
                        {
                            VAR13.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                    }
                }
            }
        }
};