class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            switch (6)
            {
            case 6:
                
                
                VAR2 = System.FUN2("");
                break;
            default:
                
                VAR2 = null;
                break;
            }
    
            switch (8)
            {
            case 7:
                
                VAR3.writeLine("");
                break;
            default:
                if (VAR2 != null)
                {
                    String VAR4[] = VAR2.split("");
                    int VAR5 = 0;
                    Connection VAR6 = null;
                    PreparedStatement VAR7 = null;
                    try
                    {
                        
                        VAR6 = VAR3.FUN3();
                        VAR7 = VAR6.FUN4("");
                        for (int VAR8 = 0; VAR8 < VAR4.length; VAR8++)
                        {
                            VAR7.FUN5(1, VAR4[VAR8]);
                            VAR7.FUN6();
                        }
                        int VAR9[] = VAR7.FUN7();
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
                break;
            }
        }
};