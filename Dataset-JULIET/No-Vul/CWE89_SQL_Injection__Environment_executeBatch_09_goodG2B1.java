class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                
                VAR2 = null;
            }
            else
            {
    
                
                VAR2 = "";
    
            }
    
            if (VAR3.VAR5)
            {
                if (VAR2 != null)
                {
                    String VAR6[] = VAR2.split("");
                    int VAR7 = 0;
                    Connection VAR8 = null;
                    Statement VAR9 = null;
                    try
                    {
                        VAR8 = VAR3.FUN2();
                        VAR9 = VAR8.createStatement();
                        for (int VAR10 = 0; VAR10 < VAR6.length; VAR10++)
                        {
                            
                            VAR9.FUN3("" + VAR6[VAR10] + "");
                        }
                        int VAR11[] = VAR9.FUN4();
                        for (int VAR10 = 0; VAR10 < VAR6.length; VAR10++)
                        {
                            if (VAR11[VAR10] > 0)
                            {
                                VAR7++;
                            }
                        }
                        VAR3.writeLine("" + VAR7 + "" + VAR6.length + "");
                    }
                    catch (SQLException VAR12)
                    {
                        VAR3.VAR13.log(VAR14.VAR15, "", VAR12);
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
                            VAR3.VAR13.log(VAR14.VAR15, "", VAR12);
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
                            VAR3.VAR13.log(VAR14.VAR15, "", VAR12);
                        }
                    }
                }
            }
        }
};