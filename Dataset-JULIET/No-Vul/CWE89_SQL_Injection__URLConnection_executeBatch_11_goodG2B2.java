class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            if (VAR3.FUN2())
            {
                
                VAR2 = "";
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.FUN2())
            {
                if (VAR2 != null)
                {
                    String VAR4[] = VAR2.split("");
                    int VAR5 = 0;
                    Connection VAR6 = null;
                    Statement VAR7 = null;
                    try
                    {
                        VAR6 = VAR3.FUN3();
                        VAR7 = VAR6.createStatement();
                        for (int VAR8 = 0; VAR8 < VAR4.length; VAR8++)
                        {
                            
                            VAR7.FUN4("" + VAR4[VAR8] + "");
                        }
                        int VAR9[] = VAR7.FUN5();
                        for (int VAR8 = 0; VAR8 < VAR4.length; VAR8++)
                        {
                            if (VAR9[VAR8] > 0)
                            {
                                VAR5++;
                            }
                        }
                        VAR3.writeLine("" + VAR5 + "" + VAR4.length + "");
                    }
                    catch (SQLException VAR10)
                    {
                        VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
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
                        catch (SQLException VAR10)
                        {
                            VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (SQLException VAR10)
                        {
                            VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
                        }
                    }
                }
            }
        }
};