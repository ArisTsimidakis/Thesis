class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
            {
                VAR2 = ""; 
                {
                    InputStreamReader VAR4 = null;
                    BufferedReader VAR5 = null;
                    
                    try
                    {
                        VAR4 = new InputStreamReader(System.in, "");
                        VAR5 = new BufferedReader(VAR4);
                        
                        VAR2 = VAR5.readLine();
                    }
                    catch (IOException VAR6)
                    {
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
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
                            VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                        }
    
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR6)
                        {
                            VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                        }
                    }
                }
                
            }
            else
            {
                
                VAR2 = null;
            }
    
            
            if (VAR2 != null)
            {
                File VAR10 = new File(VAR2);
                FileInputStream VAR11 = null;
                InputStreamReader VAR12 = null;
                BufferedReader VAR13 = null;
                if (VAR10.exists() && VAR10.isFile())
                {
                    try
                    {
                        VAR11 = new FileInputStream(VAR10);
                        VAR12 = new InputStreamReader(VAR11, "");
                        VAR13 = new BufferedReader(VAR12);
                        VAR3.writeLine(VAR13.readLine());
                    }
                    catch (IOException VAR6)
                    {
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
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
                        catch (IOException VAR6)
                        {
                            VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                        }
    
                        try
                        {
                            if (VAR12 != null)
                            {
                                VAR12.close();
                            }
                        }
                        catch (IOException VAR6)
                        {
                            VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                        }
    
                        try
                        {
                            if (VAR11 != null)
                            {
                                VAR11.close();
                            }
                        }
                        catch (IOException VAR6)
                        {
                            VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                        }
                    }
                }
            }
    
        }
};