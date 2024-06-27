class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4 == 5)
            {
                VAR2 = ""; 
                
                {
                    Connection VAR5 = null;
                    PreparedStatement VAR6 = null;
                    ResultSet VAR7 = null;
                    try
                    {
                        
                        VAR5 = VAR3.FUN2();
                        
                        VAR6 = VAR5.FUN3("");
                        VAR7 = VAR6.executeQuery();
                        
                        VAR2 = VAR7.FUN4(1);
                    }
                    catch (SQLException VAR8)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
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
                        catch (SQLException VAR8)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (SQLException VAR8)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (SQLException VAR8)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            String VAR12;
            if(System.FUN5("").toLowerCase().indexOf("") >= 0)
            {
                
                VAR12 = "";
            }
            else
            {
                
                VAR12 = "";
            }
    
            if (VAR2 != null)
            {
                
                File VAR13 = new File(VAR12 + VAR2);
                FileInputStream VAR14 = null;
                InputStreamReader VAR15 = null;
                BufferedReader VAR16 = null;
                if (VAR13.exists() && VAR13.isFile())
                {
                    try
                    {
                        VAR14 = new FileInputStream(VAR13);
                        VAR15 = new InputStreamReader(VAR14, "");
                        VAR16 = new BufferedReader(VAR15);
                        VAR3.writeLine(VAR16.readLine());
                    }
                    catch (IOException VAR17)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR17);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR16 != null)
                            {
                                VAR16.close();
                            }
                        }
                        catch (IOException VAR17)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR17);
                        }
    
                        try
                        {
                            if (VAR15 != null)
                            {
                                VAR15.close();
                            }
                        }
                        catch (IOException VAR17)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR17);
                        }
    
                        try
                        {
                            if (VAR14 != null)
                            {
                                VAR14.close();
                            }
                        }
                        catch (IOException VAR17)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR17);
                        }
                    }
                }
            }
    
        }
};