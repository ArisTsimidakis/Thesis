class VAR1{
    public void FUN1(String VAR2 ) throws Throwable
        {
            if (VAR3.VAR4)
            {
                if (VAR2 != null)
                {
                    String VAR5[] = VAR2.split("");
                    int VAR6 = 0;
                    Connection VAR7 = null;
                    PreparedStatement VAR8 = null;
                    try
                    {
                        
                        VAR7 = VAR9.FUN2();
                        VAR8 = VAR7.FUN3("");
                        for (int VAR10 = 0; VAR10 < VAR5.length; VAR10++)
                        {
                            VAR8.FUN4(1, VAR5[VAR10]);
                            VAR8.FUN5();
                        }
                        int VAR11[] = VAR8.FUN6();
                        for (int VAR10 = 0; VAR10 < VAR5.length; VAR10++)
                        {
                            if (VAR11[VAR10] > 0)
                            {
                                VAR6++;
                            }
                        }
                        VAR9.writeLine("" + VAR6 + "" + VAR5.length + "");
                    }
                    catch (SQLException VAR12)
                    {
                        VAR9.VAR13.log(VAR14.VAR15, "", VAR12);
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
                        catch (SQLException VAR12)
                        {
                            VAR9.VAR13.log(VAR14.VAR15, "", VAR12);
                        }
    
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (SQLException VAR12)
                        {
                            VAR9.VAR13.log(VAR14.VAR15, "", VAR12);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
        }
};