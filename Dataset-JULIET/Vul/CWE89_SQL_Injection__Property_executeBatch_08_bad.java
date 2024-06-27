class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (FUN2())
            {
                
                
                VAR2 = System.FUN3("");
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (FUN2())
            {
                if (VAR2 != null)
                {
                    String VAR3[] = VAR2.split("");
                    int VAR4 = 0;
                    Connection VAR5 = null;
                    Statement VAR6 = null;
                    try
                    {
                        VAR5 = VAR7.FUN4();
                        VAR6 = VAR5.createStatement();
                        for (int VAR8 = 0; VAR8 < VAR3.length; VAR8++)
                        {
                            
                            VAR6.FUN5("" + VAR3[VAR8] + "");
                        }
                        int VAR9[] = VAR6.FUN6();
                        for (int VAR8 = 0; VAR8 < VAR3.length; VAR8++)
                        {
                            if (VAR9[VAR8] > 0)
                            {
                                VAR4++;
                            }
                        }
                        VAR7.writeLine("" + VAR4 + "" + VAR3.length + "");
                    }
                    catch (SQLException VAR10)
                    {
                        VAR7.VAR11.log(VAR12.VAR13, "", VAR10);
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
                        catch (SQLException VAR10)
                        {
                            VAR7.VAR11.log(VAR12.VAR13, "", VAR10);
                        }
    
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (SQLException VAR10)
                        {
                            VAR7.VAR11.log(VAR12.VAR13, "", VAR10);
                        }
                    }
                }
            }
        }
};