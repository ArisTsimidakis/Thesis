class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (5 == 5)
            {
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
                
            }
            else
            {
                
                VAR2 = null;
            }
    
            String VAR10;
            if(System.FUN2("").toLowerCase().indexOf("") >= 0)
            {
                
                VAR10 = "";
            }
            else
            {
                
                VAR10 = "";
            }
    
            if (VAR2 != null)
            {
                
                File VAR11 = new File(VAR10 + VAR2);
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
                        VAR6.writeLine(VAR14.readLine());
                    }
                    catch (IOException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
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
                        catch (IOException VAR5)
                        {
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                        }
    
                        try
                        {
                            if (VAR13 != null)
                            {
                                VAR13.close();
                            }
                        }
                        catch (IOException VAR5)
                        {
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                        }
    
                        try
                        {
                            if (VAR12 != null)
                            {
                                VAR12.close();
                            }
                        }
                        catch (IOException VAR5)
                        {
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                        }
                    }
                }
            }
    
        }
};