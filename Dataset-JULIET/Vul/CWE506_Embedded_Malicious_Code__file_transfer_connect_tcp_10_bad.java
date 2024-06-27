class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.VAR3)
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
                Socket VAR13 = null;
                OutputStreamWriter VAR14 = null;
                BufferedWriter VAR15 = null;
                try
                {
                    
                    VAR13 = new Socket("", 39544);
                    VAR14 = new FUN2(VAR13.getOutputStream(), "");
                    VAR15 = new BufferedWriter(VAR14);
                    
                    if (VAR4 != null)
                    {
                        VAR15.write(VAR4);
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
                        if (VAR15 != null)
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