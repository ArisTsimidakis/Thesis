class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = ""; 
                
                {
                    Properties VAR5 = new Properties();
                    FileInputStream VAR6 = null;
                    try
                    {
                        VAR6 = new FileInputStream("");
                        VAR5.FUN2(VAR6);
                        
                        VAR2 = VAR5.FUN3("");
                    }
                    catch (IOException VAR7)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.VAR11)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                if (VAR2 != null)
                {
                    String VAR12[] = VAR2.split("");
                    int VAR13 = 0;
                    Connection VAR14 = null;
                    PreparedStatement VAR15 = null;
                    try
                    {
                        
                        VAR14 = VAR3.FUN4();
                        VAR15 = VAR14.FUN5("");
                        for (int VAR16 = 0; VAR16 < VAR12.length; VAR16++)
                        {
                            VAR15.FUN6(1, VAR12[VAR16]);
                            VAR15.FUN7();
                        }
                        int VAR17[] = VAR15.FUN8();
                        for (int VAR16 = 0; VAR16 < VAR12.length; VAR16++)
                        {
                            if (VAR17[VAR16] > 0)
                            {
                                VAR13++;
                            }
                        }
                        VAR3.writeLine("" + VAR13 + "" + VAR12.length + "");
                    }
                    catch (SQLException VAR18)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR18);
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
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR18);
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
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR18);
                        }
                    }
                }
    
            }
        }
};