class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (FUN2())
            {
                VAR2 = ""; 
                
                {
                    URLConnection VAR3 = (new FUN3("VAR4:
                    BufferedReader VAR5 = null;
                    InputStreamReader VAR6 = null;
                    try
                    {
                        VAR6 = new InputStreamReader(VAR3.getInputStream(), "");
                        VAR5 = new BufferedReader(VAR6);
                        
                        
                        VAR2 = VAR5.readLine();
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
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
                        catch (IOException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (FUN2())
            {
                Connection VAR12 = null;
                PreparedStatement VAR13 = null;
                try
                {
                    
                    VAR12 = VAR8.FUN4();
                    VAR13 = VAR12.FUN5(""+VAR2+"");
                    Boolean VAR14 = VAR13.execute();
                    if (VAR14)
                    {
                        VAR8.writeLine("" + VAR2 + "");
                    }
                    else
                    {
                        VAR8.writeLine("" + VAR2);
                    }
                }
                catch (SQLException VAR15)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR15);
                }
                finally
                {
                    try
                    {
                        if (VAR13 != null)
                        {
                            VAR13.close();
                        }
                    }
                    catch (SQLException VAR15)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR15);
                    }
    
                    try
                    {
                        if (VAR12 != null)
                        {
                            VAR12.close();
                        }
                    }
                    catch (SQLException VAR15)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR15);
                    }
                }
            }
        }
};