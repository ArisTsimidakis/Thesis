class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                VAR3 = ""; 
    
                
                {
                    Properties VAR4 = new Properties();
                    FileInputStream VAR5 = null;
    
                    try
                    {
                        VAR5 = new FileInputStream("");
                        VAR4.FUN2(VAR5);
    
                        
                        VAR3 = VAR4.FUN3("");
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (IOException VAR6)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                        }
                    }
                }
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                if (VAR3 != null)
                {
                    String VAR11[] = VAR3.split("");
                    int VAR12 = 0;
                    Connection VAR13 = null;
                    Statement VAR14 = null;
                    try
                    {
                        VAR13 = VAR7.FUN4();
                        VAR14 = VAR13.createStatement();
                        for (int VAR15 = 0; VAR15 < VAR11.length; VAR15++)
                        {
                            
                            VAR14.FUN5("" + VAR11[VAR15] + "");
                        }
                        int VAR16[] = VAR14.FUN6();
                        for (int VAR15 = 0; VAR15 < VAR11.length; VAR15++)
                        {
                            if (VAR16[VAR15] > 0)
                            {
                                VAR12++;
                            }
                        }
                        VAR7.writeLine("" + VAR12 + "" + VAR11.length + "");
                    }
                    catch (SQLException VAR17)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR17);
                    }
                    finally
                    {
                        try
                        {
                            if (VAR14 != null)
                            {
                                VAR14.close();
                            }
                        }
                        catch (SQLException VAR17)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR17);
                        }
    
                        try
                        {
                            if (VAR13 != null)
                            {
                                VAR13.close();
                            }
                        }
                        catch (SQLException VAR17)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR17);
                        }
                    }
                }
    
            }
        }
};