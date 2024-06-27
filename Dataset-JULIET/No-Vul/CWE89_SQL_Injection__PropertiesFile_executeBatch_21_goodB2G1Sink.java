class VAR1{
    private void FUN1(String VAR2 ) throws Throwable
        {
            if (VAR3)
            {
                
                VAR4.writeLine("");
            }
            else
            {
    
                if (VAR2 != null)
                {
                    String VAR5[] = VAR2.split("");
                    int VAR6 = 0;
                    Connection VAR7 = null;
                    PreparedStatement VAR8 = null;
                    try
                    {
                        
                        VAR7 = VAR4.FUN2();
                        VAR8 = VAR7.FUN3("");
                        for (int VAR9 = 0; VAR9 < VAR5.length; VAR9++)
                        {
                            VAR8.FUN4(1, VAR5[VAR9]);
                            VAR8.FUN5();
                        }
                        int VAR10[] = VAR8.FUN6();
                        for (int VAR9 = 0; VAR9 < VAR5.length; VAR9++)
                        {
                            if (VAR10[VAR9] > 0)
                            {
                                VAR6++;
                            }
                        }
                        VAR4.writeLine("" + VAR6 + "" + VAR5.length + "");
                    }
                    catch (SQLException VAR11)
                    {
                        VAR4.VAR12.log(VAR13.VAR14, "", VAR11);
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
                        catch (SQLException VAR11)
                        {
                            VAR4.VAR12.log(VAR13.VAR14, "", VAR11);
                        }
    
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (SQLException VAR11)
                        {
                            VAR4.VAR12.log(VAR13.VAR14, "", VAR11);
                        }
                    }
                }
    
            }
        }
};