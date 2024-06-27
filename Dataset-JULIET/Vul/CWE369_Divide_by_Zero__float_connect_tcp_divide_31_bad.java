class VAR1{
    public void FUN1() throws Throwable
        {
            float VAR2;
            {
                float VAR3;
    
                VAR3 = -1.0f; 
    
                
                {
                    Socket VAR4 = null;
                    BufferedReader VAR5 = null;
                    InputStreamReader VAR6 = null;
    
                    try
                    {
                        
                        VAR4 = new Socket("", 39544);
    
                        
    
                        VAR6 = new InputStreamReader(VAR4.getInputStream(), "");
                        VAR5 = new BufferedReader(VAR6);
    
                        
                        String VAR7 = VAR5.readLine();
                        if (VAR7 != null) 
                        {
                            try
                            {
                                VAR3 = VAR8.FUN2(VAR7.trim());
                            }
                            catch(NumberFormatException VAR9)
                            {
                                VAR10.VAR11.log(VAR12.VAR13, "", VAR9);
                            }
                        }
                    }
                    catch (IOException VAR14)
                    {
                        VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
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
                        catch (IOException VAR14)
                        {
                            VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR14)
                        {
                            VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
    
                        
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR14)
                        {
                            VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
                    }
                }
    
                VAR2 = VAR3;
            }
            {
                float VAR3 = VAR2;
    
                
                int VAR15 = (int)(100.0 / VAR3);
                VAR10.writeLine(VAR15);
    
            }
        }
};