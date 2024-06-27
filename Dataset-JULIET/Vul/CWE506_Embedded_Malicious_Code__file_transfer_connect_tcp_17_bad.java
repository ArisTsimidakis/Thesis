class VAR1{
    public void FUN1() throws Throwable
        {
            for (int VAR2 = 0; VAR2 < 1; VAR2++)
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
                Socket VAR13 = null;
                OutputStreamWriter VAR14 = null;
                BufferedWriter VAR15 = null;
                try
                {
                    
                    VAR13 = new Socket("", 39544);
                    VAR14 = new FUN2(VAR13.getOutputStream(), "");
                    VAR15 = new BufferedWriter(VAR14);
                    
                    if (VAR3 != null)
                    {
                        VAR15.write(VAR3);
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
                        if (VAR15 != null)
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