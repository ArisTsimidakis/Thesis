class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
            {
                int VAR3;
    
                VAR3 = VAR4.VAR5; 
    
                
                {
                    Socket VAR6 = null;
                    BufferedReader VAR7 = null;
                    InputStreamReader VAR8 = null;
    
                    try
                    {
                        
                        VAR6 = new Socket("", 39544);
    
                        
    
                        VAR8 = new InputStreamReader(VAR6.getInputStream(), "");
                        VAR7 = new BufferedReader(VAR8);
    
                        
                        String VAR9 = VAR7.readLine();
                        if (VAR9 != null) 
                        {
                            try
                            {
                                VAR3 = VAR4.parseInt(VAR9.trim());
                            }
                            catch(NumberFormatException VAR10)
                            {
                                VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
                            }
                        }
                    }
                    catch (IOException VAR15)
                    {
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
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
                        catch (IOException VAR15)
                        {
                            VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
    
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (IOException VAR15)
                        {
                            VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
    
                        
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR15)
                        {
                            VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
                    }
                }
    
                VAR2 = VAR3;
            }
            {
                int VAR3 = VAR2;
    
                int VAR16[] = null;
    
                
                if (VAR3 >= 0)
                {
                    VAR16 = new int[VAR3];
                }
                else
                {
                    VAR11.writeLine("");
                }
    
                
                VAR16[0] = 5;
                VAR11.writeLine(VAR16[0]);
    
            }
        }
};