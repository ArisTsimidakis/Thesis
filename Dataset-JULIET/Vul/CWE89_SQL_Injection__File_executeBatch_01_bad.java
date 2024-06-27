class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
            {
                File VAR3 = new File("");
                FileInputStream VAR4 = null;
                InputStreamReader VAR5 = null;
                BufferedReader VAR6 = null;
    
                try
                {
                    
                    VAR4 = new FileInputStream(VAR3);
                    VAR5 = new InputStreamReader(VAR4, "");
                    VAR6 = new BufferedReader(VAR5);
    
                    
                    
                    VAR2 = VAR6.readLine();
                }
                catch (IOException VAR7)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
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
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                    }
                }
            }
    
            if (VAR2 != null)
            {
                String VAR12[] = VAR2.split("");
                int VAR13 = 0;
                Connection VAR14 = null;
                Statement VAR15 = null;
                try
                {
                    VAR14 = VAR8.FUN2();
                    VAR15 = VAR14.createStatement();
                    for (int VAR16 = 0; VAR16 < VAR12.length; VAR16++)
                    {
                        
                        VAR15.FUN3("" + VAR12[VAR16] + "");
                    }
                    int VAR17[] = VAR15.FUN4();
                    for (int VAR16 = 0; VAR16 < VAR12.length; VAR16++)
                    {
                        if (VAR17[VAR16] > 0)
                        {
                            VAR13++;
                        }
                    }
                    VAR8.writeLine("" + VAR13 + "" + VAR12.length + "");
                }
                catch (SQLException VAR18)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR18);
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
                    catch (SQLException VAR18)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR18);
                    }
    
                    try
                    {
                        if (VAR14 != null)
                        {
                            VAR14.close();
                        }
                    }
                    catch (SQLException VAR18)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR18);
                    }
                }
            }
    
        }
};