class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            
    
            VAR2 = ""; 
    
            {
                InputStreamReader VAR3 = null;
                BufferedReader VAR4 = null;
    
                
                try
                {
                    VAR3 = new InputStreamReader(System.in, "");
                    VAR4 = new BufferedReader(VAR3);
    
                    
                    VAR2 = VAR4.readLine();
                }
                catch (IOException VAR5)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                }
                finally
                {
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                    }
    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                    }
                }
            }
            
    
            for (int VAR10 = 0; VAR10 < 1; VAR10++)
            {
                if (VAR2 != null)
                {
                    String VAR11[] = VAR2.split("");
                    int VAR12 = 0;
                    Connection VAR13 = null;
                    Statement VAR14 = null;
                    try
                    {
                        VAR13 = VAR6.FUN2();
                        VAR14 = VAR13.createStatement();
                        for (int VAR15 = 0; VAR15 < VAR11.length; VAR15++)
                        {
                            
                            VAR14.FUN3("" + VAR11[VAR15] + "");
                        }
                        int VAR16[] = VAR14.FUN4();
                        for (int VAR15 = 0; VAR15 < VAR11.length; VAR15++)
                        {
                            if (VAR16[VAR15] > 0)
                            {
                                VAR12++;
                            }
                        }
                        VAR6.writeLine("" + VAR12 + "" + VAR11.length + "");
                    }
                    catch (SQLException VAR17)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR17);
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
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR17);
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
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR17);
                        }
                    }
                }
            }
        }
};