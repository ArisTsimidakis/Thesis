class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
            {
                VAR2 = ""; 
                
                {
                    Properties VAR4 = new Properties();
                    FileInputStream VAR5 = null;
                    try
                    {
                        VAR5 = new FileInputStream("");
                        VAR4.FUN3(VAR5);
                        
                        VAR2 = VAR4.FUN4("");
                    }
                    catch (IOException VAR6)
                    {
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (IOException VAR6)
                        {
                            VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.FUN5())
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                if (VAR2 != null)
                {
                    String VAR10[] = VAR2.split("");
                    int VAR11 = 0;
                    Connection VAR12 = null;
                    PreparedStatement VAR13 = null;
                    try
                    {
                        
                        VAR12 = VAR3.FUN6();
                        VAR13 = VAR12.FUN7("");
                        for (int VAR14 = 0; VAR14 < VAR10.length; VAR14++)
                        {
                            VAR13.FUN8(1, VAR10[VAR14]);
                            VAR13.FUN9();
                        }
                        int VAR15[] = VAR13.FUN10();
                        for (int VAR14 = 0; VAR14 < VAR10.length; VAR14++)
                        {
                            if (VAR15[VAR14] > 0)
                            {
                                VAR11++;
                            }
                        }
                        VAR3.writeLine("" + VAR11 + "" + VAR10.length + "");
                    }
                    catch (SQLException VAR16)
                    {
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR16);
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
                        catch (SQLException VAR16)
                        {
                            VAR3.VAR7.log(VAR8.VAR9, "", VAR16);
                        }
    
                        try
                        {
                            if (VAR12 != null)
                            {
                                VAR12.close();
                            }
                        }
                        catch (SQLException VAR16)
                        {
                            VAR3.VAR7.log(VAR8.VAR9, "", VAR16);
                        }
                    }
                }
    
            }
        }
};