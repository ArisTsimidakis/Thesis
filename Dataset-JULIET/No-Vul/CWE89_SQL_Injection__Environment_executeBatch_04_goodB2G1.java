class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3)
            {
                
                
                VAR2 = System.FUN2("");
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR4)
            {
                
                VAR5.writeLine("");
            }
            else
            {
    
                if (VAR2 != null)
                {
                    String VAR6[] = VAR2.split("");
                    int VAR7 = 0;
                    Connection VAR8 = null;
                    PreparedStatement VAR9 = null;
                    try
                    {
                        
                        VAR8 = VAR5.FUN3();
                        VAR9 = VAR8.FUN4("");
                        for (int VAR10 = 0; VAR10 < VAR6.length; VAR10++)
                        {
                            VAR9.FUN5(1, VAR6[VAR10]);
                            VAR9.FUN6();
                        }
                        int VAR11[] = VAR9.FUN7();
                        for (int VAR10 = 0; VAR10 < VAR6.length; VAR10++)
                        {
                            if (VAR11[VAR10] > 0)
                            {
                                VAR7++;
                            }
                        }
                        VAR5.writeLine("" + VAR7 + "" + VAR6.length + "");
                    }
                    catch (SQLException VAR12)
                    {
                        VAR5.VAR13.log(VAR14.VAR15, "", VAR12);
                    }
                    finally
                    {
                        try
                        {
                            if (VAR9 != null)
                            {
                                VAR9.close();
                            }
                        }
                        catch (SQLException VAR12)
                        {
                            VAR5.VAR13.log(VAR14.VAR15, "", VAR12);
                        }
    
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (SQLException VAR12)
                        {
                            VAR5.VAR13.log(VAR14.VAR15, "", VAR12);
                        }
                    }
                }
    
            }
        }
};