class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3)
            {
                VAR2 = ""; 
                {
                    File VAR4 = new File("");
                    FileInputStream VAR5 = null;
                    InputStreamReader VAR6 = null;
                    BufferedReader VAR7 = null;
                    try
                    {
                        
                        VAR5 = new FileInputStream(VAR4);
                        VAR6 = new InputStreamReader(VAR5, "");
                        VAR7 = new BufferedReader(VAR6);
                        
                        
                        VAR2 = VAR7.readLine();
                    }
                    catch (IOException VAR8)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
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
                        catch (IOException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
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
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            String VAR13;
            if(System.FUN2("").toLowerCase().indexOf("") >= 0)
            {
                
                VAR13 = "";
            }
            else
            {
                
                VAR13 = "";
            }
    
            if (VAR2 != null)
            {
                
                File VAR4 = new File(VAR13 + VAR2);
                FileInputStream VAR14 = null;
                InputStreamReader VAR15 = null;
                BufferedReader VAR16 = null;
                if (VAR4.exists() && VAR4.isFile())
                {
                    try
                    {
                        VAR14 = new FileInputStream(VAR4);
                        VAR15 = new InputStreamReader(VAR14, "");
                        VAR16 = new BufferedReader(VAR15);
                        VAR9.writeLine(VAR16.readLine());
                    }
                    catch (IOException VAR8)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
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
                        catch (IOException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR15 != null)
                            {
                                VAR15.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
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
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
                    }
                }
            }
    
        }
};