class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            VAR2 = ""; 
    
            
            {
                Socket VAR3 = null;
                BufferedReader VAR4 = null;
                InputStreamReader VAR5 = null;
    
                try
                {
                    
                    VAR3 = new Socket("", 39544);
    
                    
    
                    VAR5 = new InputStreamReader(VAR3.getInputStream(), "");
                    VAR4 = new BufferedReader(VAR5);
    
                    
                    VAR2 = VAR4.readLine();
                }
                catch (IOException VAR6)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
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
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
    
                    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
                }
            }
    
            for (int VAR11 = 0; VAR11 < 1; VAR11++)
            {
                Connection VAR12 = null;
                PreparedStatement VAR13 = null;
                try
                {
                    
                    VAR12 = VAR7.FUN2();
                    VAR13 = VAR12.FUN3("");
                    VAR13.FUN4(1, VAR2);
                    Boolean VAR14 = VAR13.execute();
                    if (VAR14)
                    {
                        VAR7.writeLine("" + VAR2 + "");
                    }
                    else
                    {
                        VAR7.writeLine("" + VAR2);
                    }
                }
                catch (SQLException VAR15)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR15);
                }
                finally
                {
                    try
                    {
                        if (VAR13 != null)
                        {
                            VAR13.close();
                        }
                    }
                    catch (SQLException VAR15)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR15);
                    }
    
                    try
                    {
                        if (VAR12 != null)
                        {
                            VAR12.close();
                        }
                    }
                    catch (SQLException VAR15)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR15);
                    }
                }
            }
        }
};