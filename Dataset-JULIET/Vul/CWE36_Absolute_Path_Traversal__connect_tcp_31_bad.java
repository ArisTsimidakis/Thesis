class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                VAR3 = ""; 
    
                
                {
                    Socket VAR4 = null;
                    BufferedReader VAR5 = null;
                    InputStreamReader VAR6 = null;
    
                    try
                    {
                        
                        VAR4 = new Socket("", 39544);
    
                        
    
                        VAR6 = new InputStreamReader(VAR4.getInputStream(), "");
                        VAR5 = new BufferedReader(VAR6);
    
                        
                        VAR3 = VAR5.readLine();
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
    
                        
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
                    }
                }
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                
                if (VAR3 != null)
                {
                    File VAR12 = new File(VAR3);
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
                            VAR8.writeLine(VAR15.readLine());
                        }
                        catch (IOException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
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
                            catch (IOException VAR7)
                            {
                                VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                            }
    
                            try
                            {
                                if (VAR14 != null)
                                {
                                    VAR14.close();
                                }
                            }
                            catch (IOException VAR7)
                            {
                                VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                            }
    
                            try
                            {
                                if (VAR13 != null)
                                {
                                    VAR13.close();
                                }
                            }
                            catch (IOException VAR7)
                            {
                                VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                            }
                        }
                    }
                }
    
            }
        }
};