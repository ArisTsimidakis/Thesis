class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            
    
            
            
            VAR2 = System.FUN2("");
    
            for (int VAR3 = 0; VAR3 < 1; VAR3++)
            {
                if (VAR2 != null)
                {
                    String VAR4[] = VAR2.split("");
                    int VAR5 = 0;
                    Connection VAR6 = null;
                    Statement VAR7 = null;
                    try
                    {
                        VAR6 = VAR8.FUN3();
                        VAR7 = VAR6.createStatement();
                        for (int VAR9 = 0; VAR9 < VAR4.length; VAR9++)
                        {
                            
                            VAR7.FUN4("" + VAR4[VAR9] + "");
                        }
                        int VAR10[] = VAR7.FUN5();
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