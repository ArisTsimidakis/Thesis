class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.VAR3 == 5)
            {
                String VAR4 = "";
                File VAR5 = new File("");
                FileInputStream VAR6 = null;
                InputStreamReader VAR7 = null;
                BufferedReader VAR8 = null;
                try
                {
                    
                    VAR6 = new FileInputStream(VAR5);
                    VAR7 = new InputStreamReader(VAR6, "");
                    VAR8 = new BufferedReader(VAR7);
                    VAR4 = VAR8.readLine();
                    
                }
                catch (IOException VAR9)
                {
                    VAR2.VAR10.log(VAR11.VAR12, "", VAR9);
                }
                finally
                {
                    
                    try
                    {
                        if (VAR8 != null)
                        {
                            VAR8.close();
                        }
                    }
                    catch (IOException VAR9)
                    {
                        VAR2.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
    
                    try
                    {
                        if (VAR7 != null)
                        {
                            VAR7.close();
                        }
                    }
                    catch (IOException VAR9)
                    {
                        VAR2.VAR10.log(VAR11.VAR12, "", VAR9);
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
                        VAR2.VAR10.log(VAR11.VAR12, "", VAR9);
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
                    
                    if (VAR4 != null)
                    {
                        VAR16.write(VAR4);
                    }
                }
                catch (IOException VAR9)
                {
                    VAR2.VAR10.log(VAR11.VAR12, "", VAR9);
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
                    catch (IOException VAR9)
                    {
                        VAR2.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
    
                    try
                    {
                        if (VAR15 != null )
                        {
                            VAR15.close();
                        }
                    }
                    catch (IOException VAR9)
                    {
                        VAR2.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
    
                    
                    try
                    {
                        if (VAR14 != null)
                        {
                            VAR14.close();
                        }
                    }
                    catch (IOException VAR9)
                    {
                        VAR2.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
    
                    try
                    {
                        if (VAR13 != null)
                        {
                            VAR13.close();
                        }
                    }
                    catch (IOException VAR9)
                    {
                        VAR2.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
                }
            }
        }
};