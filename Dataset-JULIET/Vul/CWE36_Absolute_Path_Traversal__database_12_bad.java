class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
            {
                VAR2 = ""; 
                
                {
                    Connection VAR4 = null;
                    PreparedStatement VAR5 = null;
                    ResultSet VAR6 = null;
                    try
                    {
                        
                        VAR4 = VAR3.FUN3();
                        
                        VAR5 = VAR4.FUN4("");
                        VAR6 = VAR5.executeQuery();
                        
                        VAR2 = VAR6.FUN5(1);
                    }
                    catch (SQLException VAR7)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
                        catch (SQLException VAR7)
                        {
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
    
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (SQLException VAR7)
                        {
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
    
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (SQLException VAR7)
                        {
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
                    }
                }
            }
            else
            {
    
                
                VAR2 = "";
    
            }
    
            
            if (VAR2 != null)
            {
                File VAR11 = new File(VAR2);
                FileInputStream VAR12 = null;
                InputStreamReader VAR13 = null;
                BufferedReader VAR14 = null;
                if (VAR11.exists() && VAR11.isFile())
                {
                    try
                    {
                        VAR12 = new FileInputStream(VAR11);
                        VAR13 = new InputStreamReader(VAR12, "");
                        VAR14 = new BufferedReader(VAR13);
                        VAR3.writeLine(VAR14.readLine());
                    }
                    catch (IOException VAR15)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR15);
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
                        catch (IOException VAR15)
                        {
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR15);
                        }
    
                        try
                        {
                            if (VAR13 != null)
                            {
                                VAR13.close();
                            }
                        }
                        catch (IOException VAR15)
                        {
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR15);
                        }
    
                        try
                        {
                            if (VAR12 != null)
                            {
                                VAR12.close();
                            }
                        }
                        catch (IOException VAR15)
                        {
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR15);
                        }
                    }
                }
            }
    
        }
};