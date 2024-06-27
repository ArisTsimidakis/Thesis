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
                if (VAR2 != null)
                {
                    String VAR12[] = VAR2.split("");
                    int VAR13 = 0;
                    Connection VAR14 = null;
                    PreparedStatement VAR15 = null;
                    try
                    {
                        
                        VAR14 = VAR7.FUN2();
                        VAR15 = VAR14.FUN3("");
                        for (int VAR16 = 0; VAR16 < VAR12.length; VAR16++)
                        {
                            VAR15.FUN4(1, VAR12[VAR16]);
                            VAR15.FUN5();
                        }
                        int VAR17[] = VAR15.FUN6();
                        for (int VAR16 = 0; VAR16 < VAR12.length; VAR16++)
                        {
                            if (VAR17[VAR16] > 0)
                            {
                                VAR13++;
                            }
                        }
                        VAR7.writeLine("" + VAR13 + "" + VAR12.length + "");
                    }
                    catch (SQLException VAR18)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR18);
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
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR18);
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
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR18);
                        }
                    }
                }
            }
        }
};