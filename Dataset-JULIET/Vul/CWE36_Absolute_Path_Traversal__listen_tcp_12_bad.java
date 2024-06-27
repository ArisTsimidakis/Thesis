class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
            {
                VAR2 = ""; 
                
                {
                    ServerSocket VAR4 = null;
                    Socket VAR5 = null;
                    BufferedReader VAR6 = null;
                    InputStreamReader VAR7 = null;
                    
                    try
                    {
                        VAR4 = new FUN3(39543);
                        VAR5 = VAR4.accept();
                        
                        VAR7 = new InputStreamReader(VAR5.getInputStream(), "");
                        VAR6 = new BufferedReader(VAR7);
                        
                        VAR2 = VAR6.readLine();
                    }
                    catch (IOException VAR8)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
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
                        catch (IOException VAR8)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR8)
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
                        catch (IOException VAR8)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
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
                File VAR12 = new File(VAR2);
                FileInputStream VAR13 = null;
                InputStreamReader VAR14 = null;
                BufferedReader VAR15 = null;
                if (VAR12.exists() && VAR12.isFile())
                {
                    try
                    {
                        VAR13 = new FileInputStream(VAR12);
                        VAR14 = new InputStreamReader(VAR13, "");
                        VAR15 = new BufferedReader(VAR14);
                        VAR3.writeLine(VAR15.readLine());
                    }
                    catch (IOException VAR8)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR15 != null)
                            {
                                VAR15.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR14 != null)
                            {
                                VAR14.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR13 != null)
                            {
                                VAR13.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
                    }
                }
            }
    
        }
};