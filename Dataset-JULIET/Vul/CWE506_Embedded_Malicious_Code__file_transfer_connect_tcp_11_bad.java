class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
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
                    VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
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
                        VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
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
                }
                Socket VAR12 = null;
                OutputStreamWriter VAR13 = null;
                BufferedWriter VAR14 = null;
                try
                {
                    
                    VAR12 = new Socket("", 39544);
                    VAR13 = new FUN3(VAR12.getOutputStream(), "");
                    VAR14 = new BufferedWriter(VAR13);
                    
                    if (VAR3 != null)
                    {
                        VAR14.write(VAR3);
                    }
                }
                catch (IOException VAR8)
                {
                    VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
                }
                finally
                {
                    
                    try
                    {
                        if (VAR14 != null)
                        {
                            VAR14.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
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
                        VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
    
                    
                    try
                    {
                        if (VAR12 != null)
                        {
                            VAR12.close();
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