class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3==5)
            {
                
                
                VAR2 = System.FUN2("");
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3!=5)
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
                        
                        VAR7 = VAR4.FUN3();
                        VAR8 = VAR7.FUN4("");
                        for (int VAR9 = 0; VAR9 < VAR5.length; VAR9++)
                        {
                            VAR8.FUN5(1, VAR5[VAR9]);
                            VAR8.FUN6();
                        }
                        int VAR10[] = VAR8.FUN7();
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