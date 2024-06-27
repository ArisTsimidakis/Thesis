class VAR1{
    private void FUN1(String VAR2 ) throws Throwable
        {
            if (VAR3)
            {
                if (VAR2 != null)
                {
                    String VAR4[] = VAR2.split("");
                    int VAR5 = 0;
                    Connection VAR6 = null;
                    PreparedStatement VAR7 = null;
                    try
                    {
                        
                        VAR6 = VAR8.FUN2();
                        VAR7 = VAR6.FUN3("");
                        for (int VAR9 = 0; VAR9 < VAR4.length; VAR9++)
                        {
                            VAR7.FUN4(1, VAR4[VAR9]);
                            VAR7.FUN5();
                        }
                        int VAR10[] = VAR7.FUN6();
                        for (int VAR9 = 0; VAR9 < VAR4.length; VAR9++)
                        {
                            if (VAR10[VAR9] > 0)
                            {
                                VAR5++;
                            }
                        }
                        VAR8.writeLine("" + VAR5 + "" + VAR4.length + "");
                    }
                    catch (SQLException VAR11)
                    {
                        VAR8.VAR12.log(VAR13.VAR14, "", VAR11);
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
                        catch (SQLException VAR11)
                        {
                            VAR8.VAR12.log(VAR13.VAR14, "", VAR11);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (SQLException VAR11)
                        {
                            VAR8.VAR12.log(VAR13.VAR14, "", VAR11);
                        }
                    }
                }
            }
        }
};